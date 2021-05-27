/*
 * File:   main.c
 * Author: 20185206
 *
 * Created on 27 de Maio de 2021, 13:18
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "MotorPasso.h"

#define cw 1
#define ccw -1

void main (void)
{
    stepMotor_init (8);
    
    while( 1 )
    {
        stepMotor(ccw, 360,20);
        delay(300);
        stepMotor(cw, 360,20);
    }    delay(3000);
}






