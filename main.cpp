#include "mbed.h"
#include "AdpsSensor.h"

void Instruction(int cont){
	Serial pc(USBTX, USBRX, 115200);

	switch(cont){

			case 1: pc.printf("Input Green\n");
			break;

			case 2: pc.printf("Input Blue\n");
			break;

			case 3: pc.printf("Input White\n");
			break;

			case 4: pc.printf("Input Black\n");
			break;	

			case 5: pc.printf("Press to show values\n");
		}
}

int main() {
 	AdpsSensor adps(PB_9, PB_8);
	Serial pc(USBTX, USBRX, 115200);
	DigitalIn button(USER_BUTTON);
	DigitalOut led1(LED1);
	ColorRGBC colors[5];
	int cont = 0;

	adps.read_color();
	adps.read_color();
	pc.printf("TESTE APDS\n");
	pc.printf("Input Red\n");
	while(true){
		
		if((button == 1) && (cont < 5)){
			led1 = !led1;
			wait(2);
			colors[cont] = adps.read_color();
			led1 = !led1;
			cont++;
			Instruction(cont);
		}
		
		if((button == 1) && (cont == 5)){
			for(int i = 0; i<5 ; i++)
				pc.printf(colors[i].to_string().c_str());
			wait(1.0);
		}
	}
}


