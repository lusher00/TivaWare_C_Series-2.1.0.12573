#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "driverlib/debug.h"
#include "driverlib/fpu.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/rom.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"

#include "grlib/grlib.h"
#include "grlib/widget.h"
#include "grlib/pushbutton.h"
#include "grlib/canvas.h"
#include "grlib/grlib.h"
#include "Kentec320x240x16_ssd2119_8bit.h"
#include "touch.h"
#include "images.h"

#include "utils/ringbuf.h"

#define USE_RYANS_STRING_RENDERER

// The error routine that is called if the driver library encounters an error.
#ifdef DEBUG
void
__error__(char *pcFilename, uint32_t ui32Line)
{
}
#endif

tRingBufObject ringBufferStruct;
uint8_t ringBuffer[2048];

//*****************************************************************************
//
//! The widget at the root of the widget tree.  This can be used when
//! constructing a widget tree at compile time (used as the psParent argument to
//! a widget declaration) or as the psWidget argument to an API (such as
//! WidgetPaint() to paint the entire widget tree).
//
//*****************************************************************************
#define WIDGET_ROOT             &g_sRoot

char* firstString = "This is my first string...";
char* secondString = "...and this is my second string...";
char* thirdString = "this is my third string!";

char* bigString = "Most printer firmwares use an open loop control system for moving their motors around. \
		Step a few times in one direction, and you know where the nozzle of a 3D printer will be. Missed \
		steps confound the problem, and there’s no way for the firmware to know if the nozzle is where \
		it should be at any one time. Misans solution to this was a DC motor coupled to an optical encoder";

void
PrintText(tContext *pContext)
{
    //
    // Display the introduction text in the canvas.
    //
    GrContextFontSet(pContext, &g_sFontCm12);
    GrContextForegroundSet(pContext, ClrGreen);
	GrContextBackgroundSet(pContext, ClrBlack);
    GrStringDraw(pContext, "This application demonstrates the Stellaris", -1,
                 0, 32, 0);
    GrStringDraw(pContext, "Graphics Library.", -1, 0, 50, 0);
    GrStringDraw(pContext, "Each panel shows a different feature of", -1, 0,
                 74, 0);
    GrStringDraw(pContext, "the graphics library. Widgets on the panels", -1, 0,
                 92, 0);
    GrStringDraw(pContext, "are fully operational; pressing them will", -1, 0,
                 110, 0);
    GrStringDraw(pContext, "result in visible feedback of some kind.", -1, 0,
                 128, 0);
    GrStringDraw(pContext, "Press the + and - buttons at the bottom", -1, 0,
                 146, 0);
    GrStringDraw(pContext, "of the screen to move between the panels.", -1, 0,
                 164, 0);
}

// The UART interrupt handler.
void
UARTIntHandler(void)
{
    uint32_t ui32Status;
    char c;

    ui32Status = ROM_UARTIntStatus(UART0_BASE, true);

    ROM_UARTIntClear(UART0_BASE, ui32Status);

    while(ROM_UARTCharsAvail(UART0_BASE))
    {
    	c = ROM_UARTCharGetNonBlocking(UART0_BASE);
    	//RingBufWriteOne(&ringBufferStruct, (uint8_t)c);
        ROM_UARTCharPutNonBlocking(UART0_BASE, c);

        // Blink the LED to show a character transfer is occuring.
        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, GPIO_PIN_2);

        // Delay for 1 millisecond.  Each SysCtlDelay is about 3 clocks.
        SysCtlDelay(SysCtlClockGet() / (1000 * 3));

        // Turn off the LED
        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0);

    }
}

void
UARTSend(const uint8_t *pui8Buffer, uint32_t ui32Count)
{
    while(ui32Count--)
    {
        ROM_UARTCharPutNonBlocking(UART0_BASE, *pui8Buffer++);
    }
}
// 55x19

void
OnPrevious(tWidget *pWidget)
{

}

void
OnNext(tWidget *pWidget)
{

}

RectangularButton(g_sPrevious, 0, 0, 0, &g_sKentec320x240x16_SSD2119, 270, 0,
                  50, 50, PB_STYLE_FILL, ClrBlack, ClrBlack, 0, ClrSilver,
                  &g_sFontCm20, "-", g_pucBlue50x50, g_pucBlue50x50Press, 0, 0,
                  OnPrevious);

Canvas(g_sTitle, 0, 0, 0, &g_sKentec320x240x16_SSD2119, 50, 190, 220, 50,
       CANVAS_STYLE_TEXT | CANVAS_STYLE_TEXT_OPAQUE, 0, 0, ClrSilver,
       &g_sFontCm20, 0, 0, 0);

RectangularButton(g_sNext, 0, 0, 0, &g_sKentec320x240x16_SSD2119, 270, 90,
                  50, 50, PB_STYLE_IMG | PB_STYLE_TEXT, ClrBlack, ClrBlack, 0,
                  ClrSilver, &g_sFontCm20, "+", g_pucBlue50x50,
                  g_pucBlue50x50Press, 0, 0, OnNext);




int
main(void)
{
    tContext sContext;

    // Enable lazy stacking for interrupt handlers.  This allows floating-point
    // instructions to be used within interrupt handlers, but at the expense of
    // extra stack usage.
    ROM_FPUEnable();
    ROM_FPULazyStackingEnable();

    // Set the clocking to run directly from the crystal.
    ROM_SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_OSC | SYSCTL_OSC_MAIN |
                       SYSCTL_XTAL_16MHZ);

    // Enable the GPIO port that is used for the on-board LED.
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);

    // Enable the GPIO pins for the LED (PF2).
    ROM_GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_2);

    // Enable the peripherals used by this example.
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);

    // Enable processor interrupts.
    ROM_IntMasterEnable();

    // Set GPIO A0 and A1 as UART pins.
    GPIOPinConfigure(GPIO_PA0_U0RX);
    GPIOPinConfigure(GPIO_PA1_U0TX);
    ROM_GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);

    // Configure the UART for 115,200, 8-N-1 operation.
    ROM_UARTConfigSetExpClk(UART0_BASE, ROM_SysCtlClockGet(), 115200,
                            (UART_CONFIG_WLEN_8 | UART_CONFIG_STOP_ONE |
                             UART_CONFIG_PAR_NONE));

    // Enable the UART interrupt.
    ROM_IntEnable(INT_UART0);
    ROM_UARTIntEnable(UART0_BASE, UART_INT_RX | UART_INT_RT);

    // Initialize the display driver.
    Kentec320x240x16_SSD2119Init();
    // Initialize the graphics context.
    GrContextInit(&sContext, &g_sKentec320x240x16_SSD2119);

    //TouchScreenInit();
    //TouchScreenCallbackSet(WidgetPointerMessage);

    WidgetAdd(WIDGET_ROOT, (tWidget *)&g_sPrevious);
    WidgetAdd(WIDGET_ROOT, (tWidget *)&g_sNext);

    //
        // Issue the initial paint request to the widgets.
        //
	WidgetPaint(WIDGET_ROOT);

    //while(1);

    //RingBufInit(&ringBufferStruct, ringBuffer, sizeof(ringBuffer));


    sContext.sStringPoint.i16X = 0;
    sContext.sStringPoint.i16Y = 12;

    //PrintText(&sContext);
    //GrContextFontSet(&sContext, &g_sFontCm14);
	//GrContextForegroundSet(&sContext, ClrWhite);
	//GrContextBackgroundSet(&sContext, ClrBlack);
	//GrRyansStringDraw(&sContext, firstString, -1, 0, 0, 0);
	//GrRyansStringDraw(&sContext, secondString, -1, 0, 0, 0);
	//GrRyansStringDraw(&sContext, thirdString, -1, 0, 0, 0);



    // Prompt for text to be entered.
    //UARTSend((uint8_t *)"\033[2JEnter text: ", 16);

    // Loop forever echoing data through the UART.
    while(1)
    {
        //
        // Process any messages in the widget message queue.
        //
        WidgetMessageQueueProcess();
    }
}
