/*
Napisać funkcję sprawdzającą czy liczba a jest elementem tablicy liczb całkowitych tab.
Funkcja powinna zwracać: -1 – jeśli liczba nie znajduje się w tablicy,
indeks liczby w tablicy – jeśli tylko jedna liczba a znajduje się w tablicy tab,
indeks ostatniego wystąpienia – jeśli w tablicy tab jest kilka liczb a.
int sprawdz(int *tab, int n, int a)
*/

#include <stdio.h>
#include <stdlib.h>
#include "zadania.h"

int sprawdz(int *tab, int n, int a){
	
	int lastIndex = -1;
	
	for(int i = 0; i < n; i++){
		if(tab[i] == a)	lastIndex = i;
	}
	return lastIndex;
}

void zadanie12(){
	
	int option, guess, result;
	int tabLength = 20;
	int tab[tabLength];
	randomArray(tab, tabLength);
	
	do {
		system("cls");
		printf("Sprawdz czy liczba, o ktorej myslisz wystepuje w losowo wygenerowanej 20-cio elementowej tablicy od 1 do 100.\nPodaj liczbe: ");
		scanf("%d", &guess);
		
		result = sprawdz(tab, tabLength, guess);
		
		if(result == -1) printf("Podanej liczby nie ma w tablicy.\n");
		else printf("Ostatnie wystapienie podanej liczby ma indeks: %d\n", result);
		
		printf("Tablica zawierala elementy:\n");
		for(int i = 0; i < tabLength; i++){
			printf("%d, ", tab[i]);
			if((i+1)%10==0) printf("\n");
		}
		
		printf("\nChcesz sprobowac jeszcze raz?\n1. Tak\n0. Nie\n");
		scanf("%d", &option);
	} while (option != 0);
}