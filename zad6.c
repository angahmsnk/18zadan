// Napisz funkcję silnia obliczającą silnię liczby naturalnej. Przedstaw dwa sposoby: iteracyjny oraz rekurencyjny.
// int silniaIter(unsigned char n)
// int silniaRekur(unsigned char n)

#include <stdio.h>
#include <stdlib.h>

int silniaIter(unsigned char n){
	int wynik = n;
	
	if(n == 0 || n == 1) return 1;
	
	for(int i = 2; i < n; i++){
		wynik = wynik * i;
	}
	
	return wynik;
}

int silniaRekur(unsigned char n){
	if(n == 0 || n == 1) return 1;
	
	return n * silniaRekur(n - 1);
}

void zadanie6(){
	system("cls");
	
	int liczba, wynikIter, wynikRekur;
	
	printf("Podaj liczbe: ");
	scanf("%d", &liczba);
	
	wynikIter = silniaIter(liczba);
	wynikRekur = silniaRekur(liczba);
	
	system("cls");
	
	printf("Iteracyjnie: %d! = %d\n", liczba, wynikIter);
	printf("Rekurencyjnie: %d! = %d\n", liczba, wynikRekur);
}