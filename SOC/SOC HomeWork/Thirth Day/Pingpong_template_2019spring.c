//pingpong template file for Lab #7
//Revised by Jianjian Song to add pressing early penalty
//June 2019
#include "xparameters.h"
#include "xgpio.h"
#include "led_ip.h"
// Include scutimer header file
#include "XScuTimer.h"
//====================================================
XScuTimer Timer;		/* Cortex A9 SCU Private Timer Instance */
void delay(void);
void MoveBallRight(void);
void MoveBallLeft(void);

#define ONE_TENTH 32500000 // half of the CPU clock speed/10
#define START 1
#define STOP 0
#define LEFT 0
#define RIGHT 1
#define RESETBUTTON 0b0100
#define STARTBUTTON 0b0010
#define LEFTPADDLE 0b1000
#define RIGHTPADDLE 0b0001

int psb_check, dip_check, LedState, Status;
XGpio dip, push;
// PS Timer related definitions
XScuTimer_Config *ConfigPtr;
XScuTimer *TimerInstancePtr = &Timer;


int LED_PATTERNS[4]={0b1000, 0b0100, 0b0010,0b0001};
int scoreright, scoreleft;
char GameOver, StartDirection;

int main (void)
{
	unsigned int i;

   //initialize variables, timers, ports

   xil_printf("-- Start of the Ping Pong Program --\r\n");
   GameOver=STOP;
   scoreright = 0; scoreleft = 0;
   xil_printf("Score Left = %d   Score Right = %d\r\n", scoreright, scoreleft);
   StartDirection=LEFT;
   while (1)
   {
	  // Read push buttons and reset score if Button 2 is pressed
	   	  psb_check = XGpio_DiscreteRead(&push, 1);
	  if(psb_check== RESETBUTTON)	//reset game
	     {
		  xil_printf("\n\rNew Game - Scores Reset\r\n");
		  	     }
	  if(psb_check == STARTBUTTON)	GameOver=START;	//start game
			//start the game and follow StartDirection}
   }	//while(1)
} //main()

void MoveBallRight(void) {
char i, EarlyPress;
		EarlyPress=0;
//move LED to the right
// check for button pushes
//set StartDirection
//set GameOver; display scores
}

void MoveBallLeft(void) {
char i, EarlyPress;
	EarlyPress=0;
//move LED to the left
// check for button pushes
//set StartDirection
//set GameOver, update and display scores
}


void delay(void){
	  // Read dip switch values
	   dip_check = XGpio_DiscreteRead(&dip, 1);
	   // Load timer with delay in multiple of ONE_T
}
