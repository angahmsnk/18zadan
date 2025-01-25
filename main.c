#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include "zadania.h"

int main(int argc, char *argv[]) {
	
	int option;
	
	do {
		showOptions();

		scanf("%d", &option);
		
		if(option >= 0 && option <= 99){
		
			switch(option){
				case 1: zadanie1(); break;
				case 2: zadanie2(); break;
				case 3: zadanie3(); break;
				case 4: zadanie4(); break;
				case 5: zadanie5(); break;
				case 6: zadanie6(); break;
				case 7: zadanie7(); break;
				case 8: zadanie8(); break;
				case 9: zadanie9(); break;
				case 10: zadanie10(); break;
				case 11: zadanie11(); break;
				case 12: zadanie12(); break;
				case 13: zadanie13(); break;
				case 14: zadanie14(); break;
				case 15: zadanie15(); break;
				case 16: zadanie16(); break;
				case 17: zadanie17(); break;
				case 18: zadanie18(); break;
				case 99: system("cls");
				case 0: break;
				default: break;
			}
		}
		else return 0;
				
	} while(option != 0);
	
	return 0;
}