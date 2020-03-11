#include "mbed.h"

AnalogOut Aout(DACO_OUT);
int main(){
    while(1){
        Aout = 0.25;
        wait(2);
        Aout = 0.5;
        wait(2);
        Aout = 0.75;
        wait(2);
    }
}