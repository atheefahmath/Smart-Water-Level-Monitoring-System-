/* config.h file   
* File:   Smart Water Level Indicator with Motor Control  * Author: F,Atheef 
Ahmath, Jaslan* Comments:   
* Revision history:    
*/   
// This is a guard condition so that contents of this file are not included // more 
than once.     
#ifndef XC_HEADER_TEMPLATE_H   
#define   
XC_HEADER_TEMPLATE_H   
#include <xc.h> // include processor files - each processor file is guarded.    
#include <pic.h>   
#define _XTAL_FREQ 20000000   
#define RS RD2   
#define EN RD3   
#define D4 RD4   
#define D5 RD5   
#define D6 RD6   
22   
#define D7 RD7   
#define Trigger RB1 //34 is Trigger   
#define Echo RB2//35 is Echo   
//#define PWM_PIN RB7         // PWM output pin   
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)   
#pragma config WDTE = OFF
       //
#pragma config PWRTE = ON       
 Watchdog Timer Enable bit (WDT disabled)   
// Power-up Timer Enable bit (PWRT enabled) #pragma config 
BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)   
#pragma config LVP = OFF
        //
 Low-Voltage (Single-Supply) In-Circuit Serial Programming   
Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)   
#pragma config CPD = OFF        
// Data EEPROM Memory Code Protection bit (Data EEPROM 
code protection off)   
#pragma config WRT = OFF        
// Flash Program Memory Write Enable bits (Write protection 
off; all program memory may be written to by EECON control)   
#pragma config CP = OFF         
// Flash Program Memory Code Protection bit (Code protection 
off)   
// TODO Insert appropriate #include <>   
// TODO Insert C++ class definitions if appropriate   
// TODO Insert declarations   
// Comment a function and leverage automatic documentation with slash star star /**      
<p><b>Function prototype:</b></p>   
<p><b>Summary:</b></p>   
23   
   
  
 
24   
   
    <p><b>Description:</b></p>   
   
    <p><b>Precondition:</b></p>   
   
    <p><b>Parameters:</b></p>   
   
    <p><b>Returns:</b></p>   
   
    <p><b>Example:</b></p>   
    <code>   
    
    </code>   
   
    <p><b>Remarks:</b></p>   
 */   
// TODO Insert declarations or function prototypes (right here) to leverage    
// live documentation   
   
  #ifdef   __cplusplus  extern "C" {   
#endif /* __cplusplus */   
   
    // TODO If C++ is being used, regular C code needs function names to have C      // 
linkage so the functions can be used by the c code.    
   
  #ifdef   __cplusplus   
}   
#endif /* __cplusplus */   
   
  #endif   /* XC_HEADER_TEMPLATE_H */  