/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2022] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 aliases
#define IO_RA0_TRIS                 TRISAbits.TRISA0
#define IO_RA0_LAT                  LATAbits.LATA0
#define IO_RA0_PORT                 PORTAbits.RA0
#define IO_RA0_WPU                  WPUAbits.WPUA0
#define IO_RA0_OD                   ODCONAbits.ODCA0
#define IO_RA0_ANS                  ANSELAbits.ANSELA0
#define IO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_RA0_GetValue()           PORTAbits.RA0
#define IO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_RA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_RA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define IO_RA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define IO_RA0_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define IO_RA0_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)
   
// get/set RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_OD                   ODCONBbits.ODCB5
#define IO_RB5_ANS                  ANSELBbits.ANSELB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define IO_RB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)
   
// get/set RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_OD                   ODCONBbits.ODCB7
#define IO_RB7_ANS                  ANSELBbits.ANSELB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_RB7_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define IO_RB7_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define IO_RB7_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define IO_RB7_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)
   
// get/set RC0 aliases
#define IO_RC0_TRIS                 TRISCbits.TRISC0
#define IO_RC0_LAT                  LATCbits.LATC0
#define IO_RC0_PORT                 PORTCbits.RC0
#define IO_RC0_WPU                  WPUCbits.WPUC0
#define IO_RC0_OD                   ODCONCbits.ODCC0
#define IO_RC0_ANS                  ANSELCbits.ANSELC0
#define IO_RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_RC0_GetValue()           PORTCbits.RC0
#define IO_RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IO_RC0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IO_RC0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IO_RC0_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define IO_RC0_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define IO_RC0_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define IO_RC0_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)
   
// get/set RC1 aliases
#define SW0_TRIS                 TRISCbits.TRISC1
#define SW0_LAT                  LATCbits.LATC1
#define SW0_PORT                 PORTCbits.RC1
#define SW0_WPU                  WPUCbits.WPUC1
#define SW0_OD                   ODCONCbits.ODCC1
#define SW0_ANS                  ANSELCbits.ANSELC1
#define SW0_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SW0_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SW0_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SW0_GetValue()           PORTCbits.RC1
#define SW0_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SW0_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SW0_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SW0_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SW0_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define SW0_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define SW0_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define SW0_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)
   
// get/set RC2 aliases
#define IO_RC2_TRIS                 TRISCbits.TRISC2
#define IO_RC2_LAT                  LATCbits.LATC2
#define IO_RC2_PORT                 PORTCbits.RC2
#define IO_RC2_WPU                  WPUCbits.WPUC2
#define IO_RC2_OD                   ODCONCbits.ODCC2
#define IO_RC2_ANS                  ANSELCbits.ANSELC2
#define IO_RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IO_RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IO_RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IO_RC2_GetValue()           PORTCbits.RC2
#define IO_RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IO_RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IO_RC2_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define IO_RC2_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define IO_RC2_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define IO_RC2_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define IO_RC2_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define IO_RC2_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)
   
// get/set RC3 aliases
#define RC3_IN1_TRIS                 TRISCbits.TRISC3
#define RC3_IN1_LAT                  LATCbits.LATC3
#define RC3_IN1_PORT                 PORTCbits.RC3
#define RC3_IN1_WPU                  WPUCbits.WPUC3
#define RC3_IN1_OD                   ODCONCbits.ODCC3
#define RC3_IN1_ANS                  ANSELCbits.ANSELC3
#define RC3_IN1_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_IN1_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_IN1_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_IN1_GetValue()           PORTCbits.RC3
#define RC3_IN1_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_IN1_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_IN1_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_IN1_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_IN1_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define RC3_IN1_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define RC3_IN1_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define RC3_IN1_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)
   
// get/set RC7 aliases
#define SHT_AN_SEL_TRIS                 TRISCbits.TRISC7
#define SHT_AN_SEL_LAT                  LATCbits.LATC7
#define SHT_AN_SEL_PORT                 PORTCbits.RC7
#define SHT_AN_SEL_WPU                  WPUCbits.WPUC7
#define SHT_AN_SEL_OD                   ODCONCbits.ODCC7
#define SHT_AN_SEL_ANS                  ANSELCbits.ANSELC7
#define SHT_AN_SEL_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define SHT_AN_SEL_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define SHT_AN_SEL_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define SHT_AN_SEL_GetValue()           PORTCbits.RC7
#define SHT_AN_SEL_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define SHT_AN_SEL_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define SHT_AN_SEL_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define SHT_AN_SEL_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define SHT_AN_SEL_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define SHT_AN_SEL_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define SHT_AN_SEL_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define SHT_AN_SEL_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)
   
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/