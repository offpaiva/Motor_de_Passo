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

//                       instruções
// escolher e inserir no while as funçoes (stepMotor, meiopasso, passoduplo)
// cw= sentido horario ccw= anti-horario
// colocar primeiro sentido, depois o graus, tempo
// usar mais de uma funçao requer o uso do delay

void main (void)
{
    stepMotor_init (16);
    
    while( 1 )
    {
        stepMotor(cw, 360, 200);
        delay(300);
        meiopasso(ccw, 180, 200);
        delay(300);
    }    
}






