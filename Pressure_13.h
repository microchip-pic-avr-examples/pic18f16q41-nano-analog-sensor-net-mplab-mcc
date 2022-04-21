/* 
 * File:   Pressure_13.H
 * Author: C65471
 *
 * Created on February 9, 2022, 1:49 PM
 */

#ifndef PRESSURE_13_H
#define	PRESSURE_13_H

#include <xc.h>
#include "mcc_generated_files/system/system.h"
#include <math.h>


#ifdef	__cplusplus
extern "C" {
#endif

//#define PRESSURE_SENSOR_A_TERM  0.0046 //0.00293 on datasheet, recalculated for application
#define PRESSURE_SENSOR_A_TERM 0.00293
#define PRESSURE_SENSOR_B_TERM  0.05069
#define ADCC_RESOLUTION         4096
#define ADCC_POS_REFERENCE      5.00
#define SENSOR_VDD              5.00
    

    // Function Declarations;
    //void PRESSURE_13_ADCC_Init(void);
    //void PRESSURE_OPA_Disable(void);
    //void PRESSURE_13_FVR_Init(void);
    void PRESSURE_13_Init(void);
    void PRESSURE_13_SendData(void);

#ifdef	__cplusplus
}
#endif

#endif	/* PRESSURE_13_H */

