#include "p24FJ64GA002.h"
#include "pwm.h"
void initPWM(){

TRISBbits.TRISB3 = 0;
TRISBbits.TRISB9 = 0;
LATBbits.LATB3 = 1;
LATBbits.LATB9 = 1;

T3CONbits.TCKPS = 3;
TMR3 = 0;
PR3 = 56;
OC1CONbits.OCTSEL = 1; // using timer 3
OC1CONbits.OCM = 6;
RPOR1bits.RP2R = 18; // map OC1 to pin 6
OC1R = 0; //very important
OC1RS = 14;
//T3CONbits.TON = 1;

T3CONbits.TCKPS = 3;
TMR3 = 0;
PR3 = 56;
OC2CONbits.OCTSEL = 1; // using timer 3
OC2CONbits.OCM = 6;
RPOR4bits.RP8R = 18; // map OC2 to pin 17
OC2R = 0; //very important
OC2RS = 14;
T3CONbits.TON = 1;

}
