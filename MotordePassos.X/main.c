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

// inserir no while as funçoes (stepMotor, meiopasso, passo)
// cw= sentido horario ccw= antihorario
// colocar primeiro sentido, depois o grau, depois o tempo
// usar mais de uma funçao requer o uso do delay

void main (void)
{
    stepMotor_init (8);
    
    while( 1 )
    {
        meiopasso(cw, 360,20);
        delay(300);
        stepMotor(ccw, 90, 20);
    }    
}






