/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   MQ135_Sensor.h
 * Author: C65471
 * Comments: 
 * Revision history: 
 */

#ifndef MQ135_SENSOR_H
#define	MQ135_SENSOR_H

#include <xc.h>
#include "mcc_generated_files/system/system.h"
#include <math.h>


#ifdef	__cplusplus
extern "C" {
#endif

#define PPM_CLEAN_AIR           5
#define MQ135_ERROR             -0.7
#define MQ135_TERM1             662.9382
#define MQ135_TERM0             -4.0241
#define ADCC_RESOLUTION         4096
#define ADCC_POS_REFERENCE      5.0

    float R1 = 9500.0; // R1 = Load Resistor (Ohm);
    float R0; // Resistance Value in Clean Air;
    float ratio; // RS / R0 Ratio;

    // Function Declarations;
    void MQ135_Init(void);
    void MQ135_SendData(void);

#ifdef	__cplusplus
}
#endif

#endif	/* MQ135_SENSOR_H */

