// Napisz funkcję obliczającą średnią arytmetyczną z elementów tablicy liczb całkowitych. 
// Tablica posiada n liczb całkowitych. Zainicjować tablicę liczbami losowymi.
// double mean(int *tab, int n)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "zadania.h"

double mean(int *tab, int n){
	int sum = 0;
	
	for (int i = 0; i < n; i++){
		sum = sum + tab[i];
	}
	
	return (double)sum/n;
}

void zadanie10(){
	int tabLength = 10;
	int tab[tabLength];

	srand(time(NULL));
	
	randomArray(tab, tabLength);
	
	system("cls");
	
	double srednia = mean(tab, tabLength);
	
		for(int i = 0; i < tabLength; i++){
		printf("%d element: %d\n", i+1, tab[i]);
	}
	
	printf("Srednia arytmetyczna losowo wygenerowanej tablicy to: %.1f\n\n", srednia);
}