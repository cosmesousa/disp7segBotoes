/*
 * File:   disp7segBotoes.c
 * Author: 20185074
 *
 * Created on 26 de Fevereiro de 2021, 16:47
 */


#include <xc.h>

char vetor[16] = {  0x3F, 0x06, 0x5B, 0x4F,
                    0x66, 0x6D, 0x7D, 0x07,
                    0x7F, 0x6F, 0x77, 0x7C,
                    0x39, 0x5E, 0x79, 0x71 };

void display7seg_init( void )
{
    ANSELH = 0;
    TRISB = 0x00;
    PORTB = 0x00;
}

void display7seg( char c )
{
    if( c >= 0 && c <= 15 )
        PORTB = vetor[c];
    else 
        PORTB = 0x00;// error: caractere não imprimivel
}
