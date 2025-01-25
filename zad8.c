// Napisz funkcję odwracającą n-elementową tablicę liczb całkowitych:
// Wyświetlić tablicę przed i po wywołaniu funkcji.
// void inverseArray(int tab[], int n)

#include <stdio.h>
#include <stdlib.h>
#include "zadania.h"

void inverseArray(int tab[], int n){
	int temp;
	
	for (int i = 0; i < n/2; i++){
		temp = tab[i];
		tab[i] = tab[n-i-1];
		tab[n-i-1] = temp;
	}
}

void zadanie8(){
	int tabLength = 10;
	int tab[tabLength];
	
	randomArray(tab, tabLength);
	
	system("cls");
	
	printf("Tablica przed odwroceniem: ");
	for(int i = 0; i < tabLength; i++){
		printf("%d, ", tab[i]);
	}
	
	inverseArray(tab, tabLength);
	
	printf("\nTablica po odwroceniu: ");
	for(int i = 0; i < tabLength; i++){
		printf("%d, ", tab[i]);
	}
	
	printf("\n\n");
}