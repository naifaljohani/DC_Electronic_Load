// CONFIG1
#pragma config FOSC = INTOSC    // Oscillator Selection Bits (INTOSC oscillator: I/O function on CLKIN pin)
#pragma config WDTE = OFF       // Watchdog Timer Enable (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable (PWRT disabled)
#pragma config MCLRE = ON       // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
#pragma config CP = OFF         // Flash Program Memory Code Protection (Program memory code protection is disabled)
#pragma config BOREN =OFF       // Brown-out Reset Enable (Brown-out Reset enabled)
#pragma config CLKOUTEN = OFF   // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)
#pragma config IESO = OFF        // Internal/External Switchover Mode (Internal/External Switchover Mode is enabled)
#pragma config FCMEN = OFF       // Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is enabled)

// CONFIG2
#pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
#pragma config PPS1WAY = ON     // Peripheral Pin Select one-way control (The PPSLOCK bit cannot be cleared once it is set by software)
#pragma config ZCD = OFF        // Zero-cross detect disable (Zero-cross detect circuit is disabled at POR)
#pragma config PLLEN = OFF       // Phase Lock Loop enable (4x PLL is always enabled)
#pragma config STVREN = OFF      // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will cause a Reset)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)
#pragma config LPBOR = OFF      // Low-Power Brown Out Reset (Low-Power BOR is disabled)
#pragma config LVP = ON         // Low-Voltage Programming Enable (Low-voltage programming enabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.


#include <xc.h>

// LCD Pin Connection in 4-bit mode
#define LCD_RS 		LATBbits.LATB0
#define	LCD_EN 		LATBbits.LATB1
#define	LCD_REST	LATBbits.LATB2
#define	LCD_DB4		LATBbits.LATB3
#define	LCD_DB5		LATBbits.LATB4
#define	LCD_DB6		LATBbits.LATB5
#define	LCD_DB7		LATBbits.LATB6


// LCD Functions
void LCD_Init(void);
void LCD_TextDisplayString(unsigned char line, char* string);
void LCD_GraphicsDisplayString(unsigned char line, char* str);
void LCD_EnableGraphics(void);
void LCD_DisableGraphics(void);
void LCD_FillScreenGraphics(const unsigned char* graphic);
void LCD_ClearGraphics(void);
void LCD_WriteData(unsigned char data);
void LCD_WriteCommand(unsigned char command);
