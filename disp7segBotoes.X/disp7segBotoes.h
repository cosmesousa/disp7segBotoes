#ifndef DISPLAY7SEG_H
#define DISPLAY7SEG_H

void display7seg_init( void );
void display7seg( char c );

struct display7seg_T
{
    void (*init) (void);
    void (*print) (char c);
} disp7seg = { display7seg_init, display7seg };

#endif