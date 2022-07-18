 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
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
#include "mcc_generated_files/system/system.h"
#include "MQ135_Sensor.h"
#include "Pressure_13.h"
#include "SHT_AN.h"

/*
    Main application
*/

enum state {
    SENSOR_NET_SPLASH,
    MQ135_SENSOR,
    HUMIDITY_SENSOR,
    TEMP_SENSOR,
    PRESSURE_SENSOR,
};


int main(void)
{
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    //INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 
    
    enum state currentState = SENSOR_NET_SPLASH;
    uint8_t InitFlag = 0;

    while (1) {
        switch (currentState) {
            case SENSOR_NET_SPLASH:
                printf("PIC18F16Q41 Sensor Net Application Note \r\n");
                printf("Press button RC0 to cycle through sensor nodes \r\n\n");
                
                currentState = PRESSURE_SENSOR;
                break;

            case MQ135_SENSOR:
                if (InitFlag == 0) {
                    MQ135_Init();
                    InitFlag = 1;
                }
                MQ135_SendData();

                if (SW0_GetValue() == 0){
                    while(SW0_GetValue() == 0){
                        ;
                    }
                    InitFlag = 0;
                    currentState = HUMIDITY_SENSOR;
                }
                break;

            case HUMIDITY_SENSOR:
                if (InitFlag == 0) {
                    SHT_AN_Init();
                    InitFlag = 1;
                }
                SHT_AN_SendHumidity();

                if (SW0_GetValue() == 0){
                    while(SW0_GetValue() == 0){
                        ;
                    }
                    InitFlag = 0;
                    currentState = TEMP_SENSOR;
                }
                break;

            case TEMP_SENSOR:
                if (InitFlag == 0) {
                    SHT_AN_Init();
                    InitFlag = 1;
                }
                SHT_AN_SendTemp();

                if (SW0_GetValue() == 0){
                    while(SW0_GetValue() == 0){
                        ;
                    }
                    InitFlag = 0;
                    currentState = PRESSURE_SENSOR;
                }
                break;

            case PRESSURE_SENSOR:
                if (InitFlag == 0) {
                    PRESSURE_13_Init();
                    InitFlag = 1;
                }
                PRESSURE_13_SendData();

                if (SW0_GetValue() == 0){
                    while(SW0_GetValue() == 0){
                        ;
                    }
                    InitFlag = 0;
                    currentState = MQ135_SENSOR;
                }
                break;
        }
    }    
}