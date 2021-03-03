/*
 * File:   main.c
 * Author: 20185074
 *
 * Created on 26 de Fevereiro de 2021, 16:42
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "display7seg.h"
#include "botoes.h"


void main(void) 
{
    char cont = 0;
    char estado = 0;
    disp7seg.init();
    botoes_init();
    while( 1 )
    {
        switch( estado )
        {
            case 0:
                    if( b1() == 1 )
                        estado = 1;
                    break;
            case 1:
                    if( b1() == 0 )
                        estado = 2;
                    break;
            case 2:
                    ++cont;
                    estado = 0;
                    break;
        }
        disp7seg.print(cont);
    
        if( cont >= 10 )
            cont = 0;
        if( cont < 0 )
            cont = 9;
    }
}