/*
 * File:   MQ135_Sensor.c
 * Author: C16783
 *
 * Created on April 16, 2020, 12:03 PM
 */

#include "MQ135_Sensor.h"

void MQ135_ADCC_Init(void) {
    // MQ135 ADCC Sensor Settings
    ADPCH = 0x82; // ADCC Positive Channel = OPA1OUT; PCH = OPAIN2+(RA2)
    PIR1bits.ADIF = 0; // Clear ADIF;
    PIE1bits.ADIE = 1; // Enable ADCC Interrupts;
}

void MQ135_OPA_Init(void) {
    // MQ135 OPA Sensor Settings
    OPA1CON2 = 0x02; // NCH = No Connection; PCH = OPA1IN+ (PSS))
    OPA1CON0 = 0x88; // OPA Enabled; Unity Gain Mode;
}

void MQ135_Init(void) {
    uint8_t i;
    float MQ135_RawCal = 0;
    float MQ135_Voltage_Cal, RS_Cal; // Sensor Resistance;

    MQ135_ADCC_Init();
    MQ135_OPA_Init();

    for (i = 0; i < 32; i++) {
        ADCON0bits.GO = 1; // Trigger ADC Conversion;
        while (!ADCON0bits.GO); // Wait for Conversion to Complete;
        MQ135_RawCal = MQ135_RawCal + ADCC_GetConversionResult();
    }
    MQ135_RawCal = MQ135_RawCal / 32;
    MQ135_Voltage_Cal = (MQ135_RawCal / ADCC_RESOLUTION) * ADCC_POS_REFERENCE;
    RS_Cal = ((R1 * ADCC_POS_REFERENCE) / MQ135_Voltage_Cal) - R1;
    R0 = RS_Cal / PPM_CLEAN_AIR; //  PPM CO in calibration air (clean)
}

void MQ135_SendData(void) {
    float CO_PPM, MQ135_Voltage = 0;
    float RS; // Sensor Resistance;
    adc_result_t MQ135_Raw = 0;

    ADCON0bits.GO = 1; // Trigger ADC Conversion;
    while (!ADCON0bits.GO); // Wait for Conversion to Complete;
    MQ135_Raw = ADCC_GetConversionResult();

    MQ135_Voltage = ((float) MQ135_Raw / ADCC_RESOLUTION) * ADCC_POS_REFERENCE;
    RS = R1 * (ADCC_POS_REFERENCE - MQ135_Voltage) / MQ135_Voltage;

    CO_PPM = (RS / R0);
    CO_PPM = pow(CO_PPM, MQ135_TERM0);
    CO_PPM = MQ135_TERM1 * CO_PPM + MQ135_ERROR;
    printf("Carbon Monoxide(PPM), %.2f\r\n", CO_PPM);
}