
#include "Pressure_13.h"

//#include <stdint.h>
//#include <xc.h>
//#include "mcc_generated_files/system/system.h"

void PRESSURE_13_ADCC_Init(void) {
    // Pressure_13 ADCC Sensor Settings
    ADPCH = 0x12; // ADCC Positive Channel = ANC2; PCH = RC2 Pin
    PIR1bits.ADIF = 0; // Clear ADIF;
    PIE1bits.ADIE = 1; // Enable ADCC Interrupts;
}

void PRESSURE_13_OPA_Disable(void) { 
    // Pressure_13 OPA Sensor Settings
    OPA1CON2 = 0x00; // NCH = No Connection; PCH = No Connection
    OPA1CON0 = 0x00; // OPA Disabled
}

void PRESSURE_13_Init(void) {
    
    PRESSURE_13_ADCC_Init();
    PRESSURE_13_OPA_Disable();
    
    }

void PRESSURE_13_SendData(void) {
    
    float Pressure_13_Raw = 0;
    float Pressure_13_Voltage = 0.0;
    float SensorPressure = 0.0;
   
    ADCON0bits.GO = 1; // Trigger ADC Conversion;
    while (!ADCON0bits.GO); // Wait for Conversion to Complete;
    Pressure_13_Raw = ADCC_GetConversionResult();
    
    Pressure_13_Voltage = ((float) Pressure_13_Raw / ADCC_RESOLUTION) * ADCC_POS_REFERENCE;
    SensorPressure = ((Pressure_13_Voltage/SENSOR_VDD) - PRESSURE_SENSOR_B_TERM) / PRESSURE_SENSOR_A_TERM;
    
    printf("Atmospheric Pressure, %.0fkPA\r\n", SensorPressure);
}