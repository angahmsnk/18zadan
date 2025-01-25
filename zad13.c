// Napisać funkcję przeszukującą n elementową tablicę liczb całkowitych i znajdującą w niej największą i najmniejszą liczbę. 
// Liczby mają być zwrócone do programu głównego w postaci struktury:
// struct maxmin{int max, min;};
// struct maxmin szukaj(int *tab, int n)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "zadania.h"

struct maxmin {
	int max;
	int min;
};

struct maxmin szukaj(int *tab, int n){
	struct maxmin max_i_min;
	max_i_min.max = tab[0];
	max_i_min.min = tab[0];
	
	for(int i = 0; i < n; i++){
		if(tab[i] > max_i_min.max){
			max_i_min.max = tab[i];
		}
		if(tab[i] < max_i_min.min){
			max_i_min.min = tab[i];
		}
	}
	
	return max_i_min;
}

void zadanie13(){
	system("cls");
	
	srand(time(NULL));
	int tabLength = 10;
	int tab[tabLength];
	randomArrayWithNegative(tab, tabLength);
	
	struct maxmin max_i_min = szukaj(tab, tabLength);
	
	printf("Wygenerowana zostala nastepujaca %d elementowa tablica liczb calkowitych: ", tabLength);
	
	for(int i = 0; i < tabLength; i++){
		printf("%d, ", tab[i]);
	}
	
	printf("\nNajmniejszy element tej tablicy to: %d\n", max_i_min.min);
	printf("Najwiekszy element tej tablicy to: %d\n\n", max_i_min.max);
}