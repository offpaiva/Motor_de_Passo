/*
 * File:   delay.c
 * Author: 20185315
 *
 * Created on 29 de Abril de 2021, 13:33
 */


#include <xc.h>
#include "config.h"
#include "delay.h"

void delay (unsigned int t )
{
    while( t )
    {
        __delay_ms( 1 );
        --t;
    }
}

   