// Napisać funkcję CopyArray przepisującą tablicę liczb całkowitych tab do innej tablicy liczb całkowitych tab2, o tej samej liczbie elementów n. 
// Dodatkowo każda liczba mniejsza od zera z tablicy tab powinna być przepisana jako zero do tab2.
// int CopyArray(int *tab, int *tab2, int n)

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void randomArrayWithNegative(int tab[], int n){
	
	int i = 0;
	
	while(i < n){
		if (rand()%101 <= 50) tab[i++] = rand()%101;
		else tab[i++] = rand()%101 * (-1);
	}
}

int CopyArray(int *tab, int *tab2, int n){
	for(int i = 0; i < n; i++){
		if(tab[i] < 0) tab2[i] = 0;
		else tab2[i] = tab[i];
	}
}

void zadanie11(){
	int tabLength = 10;
	int tab1[tabLength];
	int tab2[tabLength];

	srand(time(NULL));
	
	randomArrayWithNegative(tab1, tabLength);
	
	system("cls");
	for(int i = 0; i < tabLength; i++){
		printf("%d element Tablicy 1: %d\n", i+1, tab1[i]);
	}
	
	CopyArray(tab1, tab2, tabLength);
	for(int i = 0; i < tabLength; i++){
		printf("%d element Tablicy 2: %d\n", i+1, tab2[i]);
	}
}