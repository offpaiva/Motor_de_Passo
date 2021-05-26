/*
 * File:   MotorPasso.c
 * Author: 20185206
 *
 * Created on 26 de Maio de 2021, 15:42
 */


#include <xc.h>
#include "delay.h"
#include "MotorPasso.h"

int ppr = 16;
char passos[4] = {0x02,0x04,0x01,0x08};
char indice = 0;

void stepMotor_init(int pulsosPorRevolucao) 
{
    TRISDbits.TRISD0 = 0;
    TRISDbits.TRISD1 = 0;   
    TRISDbits.TRISD2 = 0;   
    TRISDbits.TRISD3 = 0;   
    
    PORTDbits.RD0 = 0;
    PORTDbits.RD1 = 0;
    PORTDbits.RD2 = 0;
    PORTDbits.RD3 = 0;
    
    ppr = pulsosPorRevolucao; 
}



void stepMotor (char sentido, int graus, int t)
{
    int i;
    int numPassos; 
    numPassos = (graus * ppr)/360;
    
    for(i=0; i<numPassos; i++)
    {
        PORTD =((PORTD & 0xF0) | passos[indice]);
        indice = (indice+sentido) % 4;
        delay(250);
    
    
    }    
}












