/* 
 * File:   SHT_AN.h
 * Author: C65471
 *
 * Created on February 16, 2022, 12:13 PM
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


