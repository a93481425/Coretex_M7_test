#include "GPIO.h"
#include "reg.h"

int main(){
    pinMode(GPIO_PORTI,1,OUTPUT);
    unsigned int i;
  
    while(1){
                digitalWrite(GPIO_PORTI,1,HIGH);

		for (i = 0; i < 100000; i++)
			;

		//reset GPIOD led pin
		digitalWrite(GPIO_PORTI,1,LOW);

		for (i = 0; i < 100000; i++)
			;


     
    }
}
