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
 * File: SHT_AN.h
 * Author: C65471
 * Comments:
 * Revision history: 
 */

#ifndef SHT_AN_H
#define	SHT_AN_H

#include <xc.h>
#include "mcc_generated_files/system/system.h"
#include <math.h>


#ifdef	__cplusplus
extern "C" {
#endif


#define CELSIUS_A_TERM          218.75 //0.00293 on datasheet, recalculated for application
#define CELSIUS_B_TERM          -66.875
#define FAHRENHEIT_A_TERM       393.75
#define FAHRENHEIT_B_TERM       -88.375
#define RH_A_TERM               125.0
#define RH_B_TERM               -12.5
#define ADCC_RESOLUTION         4096
#define ADCC_POS_REFERENCE      5.00
#define SENSOR_VDD              5.00
    

    // Function Declarations;
    void SHT_AN_Init(void);
    void SHT_AN_SendTemp(void);
    void SHT_AN_SendHumidity(void);

#ifdef	__cplusplus
}
#endif

#endif	/* SHT_AN_H */


