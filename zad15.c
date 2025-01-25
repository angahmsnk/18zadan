/*
a) Co to jest wskaźnik? Po co jest stosowany. Podać schemat tworzenia n-elementowej tablicy za pomocą wskaźnika.
b) Co to jest referencja? Jaka jest zależność pomiędzy wskaźnikiem i referencją.
*/

#include <stdio.h>
#include <stdlib.h>

void zadanie15(){
	system("cls");
	printf("a) Co to jest wskaznik? Po co jest stosowany. Podac schemat tworzenia n-elementowej tablicy za pomoca wskaznika.\n");
	printf("Odpowiedz: wskaznik to zmienna przechowujaca adres pamieci innej zmiennej.\nStosowana do dynamicznego zarzadzania pamiecia, do przekazywania duzych struktur bez funkcji kopiowania oraz pozwala na tworzenie dynamicznych struktur danych np. list lub tablic.\n");
	printf("Schemat tworzenia n-elementowej tablicy za pomoca wskaznika:\n");
	printf("int *tab = (int *)malloc(n * sizeof(int)); // Alokacja pamieci\nif (tab == NULL) {\n  printf(\"Blad alokacji pamieci.\");\n  exit(1);\n}\n// Po uzyciu nalezy zwolnic pamiec\nfree(tab);\n");
	printf("\nb) Co to jest referencja? Jaka jest zaleznosc pomiedzy wskaznikiem i referencja.\n");
	printf("Odpowiedz: referencja to alternatywna nazwa do istniejacej zmiennej. Referencja jest bezpieczniejszym sposobem na operacjach na zmiennej, bo zawsze wskazuje na istniejacy obiekt. Wskaznik moze wskazywac na NULL lub byc zmieniany w czasie dzialania programu, a referencja nie.\n");
	printf("Przyklad:\n");
	printf("int x = 10;\nint &ref = x;   // Referencja\nint *ptr = &x;  // Wskaznik\n\n");
}