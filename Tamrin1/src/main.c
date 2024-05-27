#include <lpc17xx.h>
#define led IOIPIN
#define Tled IOIDIR
void delay_ms ( unsigned int x){
	unsigned int i , j;
	for( i = 0 ; i <x ; i++)
	   for(j = 0;j <20000;j++)
}
int main (){
	LPC_PINCON -> PINSEL4 = 0x00000000;
	LPC_GPIO2 -> FIODIR = 0xffffffff;
	 while(1)
	 {
		 LPC_GPIO2 -> FIOSET = 0xffffffff;
		 delay_ms(100);
		 LPC_GPIO2 -> FIOCLR = 0xffffffff;
		 delay_ms(100);
	 }
 }