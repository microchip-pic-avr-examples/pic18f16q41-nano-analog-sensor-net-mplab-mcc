#include "SHT_AN.h"

void SHT_AN_ADCC_Init(void) {
    // SHT_AN ADCC Sensor Settings  
    ADPCH = 0x93; // ADCC Positive Channel = OPA1OUT; PCH = OPA1IN1+(RC3)
    PIR1bits.ADIF = 0; // Clear ADIF;
    PIE1bits.ADIE = 1; // Enable ADCC Interrupts;
}

void SHT_AN_OPA_Init(void) {
    // SHT_AN OPA Sensor Settings
    OPA1CON2 = 0x02; // NCH = No Connection; PCH = OPA1IN+ (PSS))
    OPA1CON0 = 0x88; // OPA Enabled; Unity Gain Mode;
}

void SHT_AN_Init(void) {
    SHT_AN_ADCC_Init();
    SHT_AN_OPA_Init();
    SHT_AN_SEL_SetLow();
}


void SHT_AN_SendTemp(void) {
    
    SHT_AN_SEL_SetLow();
    float SHT_AN_Raw = 0.0;
    float SHT_AN_Voltage = 0.0;
    float SensorCelsius = 0.0;
    float SensorFah = 0.0;
    
    ADCON0bits.GO = 1; // Trigger ADC Conversion;
    while (!ADCON0bits.GO); // Wait for Conversion to Complete;
    SHT_AN_Raw = ADCC_GetConversionResult();
    
    SHT_AN_Voltage = ((float) SHT_AN_Raw / ADCC_RESOLUTION) * ADCC_POS_REFERENCE;
    SensorCelsius = ((SHT_AN_Voltage/SENSOR_VDD)* CELSIUS_A_TERM + CELSIUS_B_TERM);
    SensorFah = ((SHT_AN_Voltage/SENSOR_VDD)* FAHRENHEIT_A_TERM + FAHRENHEIT_B_TERM);
    
    printf("Temperature, %.0fC or %.0fF\r\n", SensorCelsius, SensorFah);
}

void SHT_AN_SendHumidity(void) {
    SHT_AN_SEL_SetHigh();
    float SHT_AN_Raw = 0;
    float SHT_AN_Voltage = 0.0;
    float SensorHumidity = 0.0;
   
    ADCON0bits.GO = 1; // Trigger ADC Conversion;
    while (!ADCON0bits.GO); // Wait for Conversion to Complete;
    SHT_AN_Raw = ADCC_GetConversionResult();
    
    SHT_AN_Voltage = ((float) SHT_AN_Raw / ADCC_RESOLUTION) * ADCC_POS_REFERENCE;
    SensorHumidity = ((SHT_AN_Voltage/SENSOR_VDD)* RH_A_TERM + RH_B_TERM);
    
    printf("Humidity, %.0fRH\r\n", SensorHumidity);
}