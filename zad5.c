// Napisać funkcję podnoszącą dowolną liczbę całkowitą a do potęgi n będącej również liczbą całkowitą.
// Funkcja ma zwracać wynik potęgowania.
// int power(int a, int n)

#include <stdio.h>
#include <stdlib.h>

int power(int a, int n){
	
	int acc = a;
	
	if(n == 0) return 1;
	else if(n == 1 || n == -1) return a;
	else if(n > 1 || n < 1) {
		
		int wykladnik = n;
		if(n < 0) wykladnik = -wykladnik;
		
		for(int i = wykladnik; i > 1; i--){
			acc = acc * a;
		}
		
		return acc;
	}
	else return 0;
}
	
void zadanie5(){
	
	system("cls");
	
	int liczba, wykladnik, wynik;
	
	printf("Podaj liczbe: ");
	scanf("%d", &liczba);
	printf("Podaj wykladnik: ");
	scanf("%d", &wykladnik);
	
	system("cls");
	
	wynik = power(liczba, wykladnik);
	
	if(wykladnik >= 0) printf("%d do potegi %d to: %d\n\n", liczba, wykladnik, wynik);
	else printf("%d do potegi %d to: 1/%d\n\n", liczba, wykladnik, wynik);
}