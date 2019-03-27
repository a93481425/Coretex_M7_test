#include "GPIO.h"
#include "reg.h"

int main(){
    pinMode(GPIO_PORTI,1,OUTPUT);
    while(1){
     digitalWrite(GPIO_PORTI,1,HIGH);
    }
}
