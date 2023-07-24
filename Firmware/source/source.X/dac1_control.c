/*
 * File:   dac1_control.c
 * Author: user
 *
 * Created on July 24, 2023, 11:27 AM
 */


#include "mcc_generated_files/mcc.h"
#include "dac1_control.h"



void dac1_voltage(float volt){
    const float volt_max = 4.096;
    
    if (volt > volt_max ){
        volt = volt_max;
    }
    if(volt < 0){
        volt = 0;
    }
    
    const uint8_t dac_mult = 64;   // 4mv count multiplier
    const float offset  = 0.03;    // 30mv offset ,error +- 1mv
    volt = (volt - offset) ;       // correcting for offset 
    
    double div = (volt /0.004)  ;  // every one count is 4mv, max 1023
    
    uint16_t count = (dac_mult * div );  // DAC output count, max 65535
    
    DAC1_Load16bitInputData(count); 
    
}