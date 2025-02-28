/*
 * File:   newmain.c
 * Author: DELL
 *
 * Created on 24 February, 2025, 6:01 PM
 */
#define _XTAL_FREQ 1000000
// CONFIG1
#pragma config FOSC = INTOSC    // Oscillator Selection Bits (INTOSC oscillator: I/O function on CLKIN pin)
#pragma config WDTE = OFF       // Watchdog Timer Enable (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable (PWRT disabled)
#pragma config MCLRE = ON       // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
#pragma config CP = OFF         // Flash Program Memory Code Protection (Program memory code protection is disabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable (Brown-out Reset disabled)
#pragma config CLKOUTEN = OFF   // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)
#pragma config IESO = OFF       // Internal/External Switchover Mode (Internal/External Switchover Mode is disabled)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is disabled)

// CONFIG2
#pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
#pragma config STVREN = OFF     // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will not cause a Reset)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)
#pragma config LPBOR = OFF      // Low-Power Brown Out Reset (Low-Power BOR is disabled)
#pragma config LVP = ON         // Low-Voltage Programming Enable (Low-voltage programming enabled)

#include <xc.h>

void main(void) {
    TRISCbits.TRISC0=0; //Set output to RC0
    TRISCbits.TRISC1=0; //Set output to RC1
    TRISCbits.TRISC2=0; //Set output to RC2
    TRISCbits.TRISC3=0; //Set output to RC3
    TRISCbits.TRISC4=0; //Set output to RC4
    TRISCbits.TRISC5=0; //Set output to RC5
    ANSELA = 0x00;
    ANSELA = 0x00;
    ANSELA = 0x00;
    
   /* LATCbits.LATC0 = 1;
    LATCbits.LATC1 = 1;
    LATCbits.LATC2 = 1;
    */
    while(1){
        LATCbits.LATC0 = 1;
    LATCbits.LATC1 = 0;
    LATCbits.LATC2 = 0;
    LATCbits.LATC3 = 0;
    LATCbits.LATC4 = 0;
    LATCbits.LATC5 = 0;
    __delay_ms(500);  // request a delay in milliseconds
            
     LATCbits.LATC0 = 0;
    LATCbits.LATC1 = 1;
    LATCbits.LATC2 = 0;
    LATCbits.LATC3 = 0;
    LATCbits.LATC4 = 0;
    LATCbits.LATC5 = 0;
    __delay_ms(500);  // request a delay in milliseconds
            
    LATCbits.LATC0 = 0;
    LATCbits.LATC1 = 0;
    LATCbits.LATC2 = 1;
    LATCbits.LATC3 = 0;
    LATCbits.LATC4 = 0;
    LATCbits.LATC5 = 0;
    __delay_ms(500);  // request a delay in milliseconds
        
    LATCbits.LATC0 = 0;
    LATCbits.LATC1 = 0;
    LATCbits.LATC2 = 0;
    LATCbits.LATC3 = 1;
    LATCbits.LATC4 = 0;
    LATCbits.LATC5 = 0;
    __delay_ms(500);  // request a delay in milliseconds
    
    LATCbits.LATC0 = 0;
    LATCbits.LATC1 = 0;
    LATCbits.LATC2 = 0;
    LATCbits.LATC3 = 0;
    LATCbits.LATC4 = 1;
    LATCbits.LATC5 = 0;
    __delay_ms(500);  // request a delay in milliseconds
    
    LATCbits.LATC0 = 0;
    LATCbits.LATC1 = 0;
    LATCbits.LATC2 = 0;
    LATCbits.LATC3 = 0;
    LATCbits.LATC4 = 0;
    LATCbits.LATC5 = 1;
    __delay_ms(500);  // request a delay in milliseconds
    }
    return;
}
