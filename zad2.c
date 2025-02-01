// Napisz program wprowadzający trzy liczby z klawiatury a następnie wyświetlający na ekranie największą z nich.

#include <stdio.h>
#include <stdlib.h>

int sprawdzMax(int *tab, int n){
	int max = tab[0];
	for(int i = 0; i < n; i++){
		if(tab[i] > max) max = tab[i];
	}
	
	return max;
}

void zadanie2(){
	int tabLength = 3;
	int tab[tabLength];
	
	for(int i = 0; i < tabLength; i++){
		printf("Podaj %d liczbe: ", i+1);
		scanf("%d", &tab[i]);
	}
	
	system("cls");
	
	printf("Najwieksza liczba z trzech wprowadzonych to: %d\n\n", sprawdzMax(tab, tabLength));
}