// Napisać program wyświetlający w osobnych wierszach liczby z zakresu 1 do 10.
// Przedstawić wersje programu wykorzystujące pętle: for, while, do-while.

#include <stdio.h>
#include <stdlib.h>

void zadanie3(){
	system("cls");
	// Pętla for
	for(int i = 1; i <= 10; i++) {
		printf("For: %d\n", i);
	}
	printf("\n");
	// Pętla while
	int j = 1;
	while(j <= 10){
		printf("While: %d\n", j);
		j++;
	}
	printf("\n");
	// Pętla do-while
	int k = 1;
	do {
		printf("Do-while: %d\n", k);
		k++;
	} while(k <= 10);
	
	printf("\n");
}