/*
 * File:   MotorPasso.c
 * Author: 20185206
 *
 * Created on 26 de Maio de 2021, 15:42
 */


#include <xc.h>
#include "delay.h"
#include "config.h"

int ppr = 0;
char passos[4] = {0x02,0x04,0x01,0x08};
char indice = 0;
int meiopas [8]={0x02,0x06,0x04,0X05,0x01,0x09,0x08,0x0A};
char doispulsos [4]={0x09,0x0A,0x06,0x05};

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



void stepMotor (char sentido, int graus, char t)
{
    char i; char indice= 0;
    
   char numPassos = (graus * ppr)/360;
    
    for(i=0; i<numPassos; i++)
    {
        indice = (indice+sentido) % 4;
        PORTD =((PORTD & 0xF0) | passos[indice]);
        delay(250);

      
    }    
}

void meiopasso (char sentido, int graus, char t)
{
    char i;    char indice = 0;
    
    char numPasso = (graus * ppr)/180;  
    
    for(i=0; i<numPasso; i++)
    { 
        indice = ( indice + sentido )  % 8;
        delay(250);
        PORTD = (PORTD & 0xF0) | meiopas[indice];
        
    }
}   


void passoduplo (char sentido, int graus, char t)
{
    char i;    char indice = 0;
    
    char numPasso = (graus * ppr)/360;  
    
    for(i=0; i<numPasso; i++)
    {
      indice = ( indice + sentido )  % 4;  
      delay(250);
      PORTD = (PORTD & 0xF0) | doispulsos[indice];
    }  
}     








