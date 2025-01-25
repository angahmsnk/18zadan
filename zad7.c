// Napisz funkcję wpisującą do n-elementowej tablicy, liczby całkowite losowe.
// Wyświetlić tablicę.
// void randomArray(int tab[], int n)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomArray(int tab[], int n){
	
	int i = 0;
	
	while(i < n){
		tab[i++] = rand()%101;
	}
}

void zadanie7() {
	int tabLength = 10;
	int tab[tabLength];

	srand(time(NULL));
	
	randomArray(tab, tabLength);
	
	system("cls");
	for(int i = 0; i < tabLength; i++){
		printf("%d element: %d\n", i+1, tab[i]);
	}
}