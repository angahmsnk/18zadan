// Napisać funkcję sprawdzającą czy podana liczba całkowita jest parzysta.
// Funkcja ma zwracać wartość 1 jeśli liczba jest parzysta, natomiast 0 jeśli liczba jest nieparzysta.
// int parzysta(int a)

#include <stdio.h>
#include <stdlib.h>

int parzysta(int a){
	if(a % 2 == 0) printf("Liczba %d jest parzysta\n", a);
	else if (a % 2 != 0) printf("Liczba %d jest nieparzysta.\n", a);
	else printf("To nie liczba!"); // to nie działa
	return 0;
}

void zadanie4(){
	system("cls");
	int liczba;
	printf("Podaj liczbe calkowita: ");
	scanf("%d", &liczba);
	parzysta(liczba);
}