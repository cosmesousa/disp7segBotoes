/*
 * File:   botoes.c
 * Author: 20185074
 *
 * Created on 26 de Fevereiro de 2021, 16:50
 */


#include <xc.h>

void botoes_init( void )
{
    TRISDbits.TRISD2 = 1;
    TRISDbits.TRISD3 = 1;
}

char b1( void )
{
    return( PORTDbits.RD3 );
}
char b0( void )
{
    return( PORTDbits.RD2 );
}