#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

//#define servoPin 1  //Pin 1 Supports PWM
//#define position 1500

int main(void){
  if(wiringPiSetup ()== -1){
  printf("setup wiring PI failed!");
  return 1;
  }
int servoPin = 1;
int position = 500;
//double position = 0;
int counter = 0;

  pinMode(servoPin, OUTPUT);

//while(1){
/*printf("Please enter the pulse width (in terms of time)\n");
printf("The units entered will be in terms of miliseconds\n");
printf("Enter in the range of 500 to 2200.\n");
vxcvzxcvvprintf("500 is angle 0, 2100 is about 180.\n");
printf("Input: ");
//scanf("%lf",&position);
printf("\n");*/
//while(getchar() != '\n'){;}

  while(1){

    digitalWrite(servoPin, HIGH);
    delayMicroseconds(position); // NOTE: TIME IS IN MICROSECONDS
    digitalWrite(servoPin,  LOW);

    delayMicroseconds(5000-position);
    delay(15);

    counter++;

    if (counter == 100){break;}

  }

//  counter = 0;
//}
  return 1;

}


/*
#include <wiringPi.h>
#include <stdio.h>
#include <softPwm.h>

#define SERVOPIN 1

int main(void){
	if(wiringPiSetup ()== -1){
	printf("setup wiring PI failed!");
	return 1;
	}
    softPwmCreate(SERVOPIN, 0, 100);
   // softPwmWrite(SERVOPIN, 15);
    int pw = 10;
   while(1){
  //  if(pw == 50){
    //       pw = 0;
    //}
//    sleep(100);
   softPwmWrite(SERVOPIN, pw%50);
   pw++;
   if(pw == 20) pw = 10;
   printf("Le servo %d\n",pw);
   sleep(1);
   //softPwmWrite(SERVOPIN, 15);
   //softPwmWrite(SERVOPIN, 20);
   //softPwmWrite(SERVOPIN, 25);
   //softPwmWrite(SERVOPIN, 30);
   }
  return 1;

}

*/
