// Wymień rodzaje pętli występujące w języku C. Dla każdej pętli napisz krótki program ilustrujący jej działanie.

#include <stdlib.h>
#include <stdio.h>

void zadanie1(){
	system("cls");
	// Pętla for
	for(int i = 0; i < 5; i++) {
		printf("For: %d\n", i);
	}
	printf("\n");
	// Pętla while
	int j = 0;
	while(j < 5){
		printf("While: %d\n", j);
		j++;
	}
	printf("\n");
	// Pętla do-while
	int k = 0;
	do {
		printf("Do-while: %d\n", k);
		k++;
	} while(k < 5);
	
	printf("\n");
}