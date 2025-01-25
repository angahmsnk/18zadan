/*
Palindrom jest to wyraz, który czytany od tylu jest taki sam jak czytany od przodu, np. kajak. 
Napisz funkcję sprawdzającą czy w tablicy znaków zapisany jest palindrom. 
Funkcja ma zwracać wartość 1 jeśli w tablicy znaków jest palindrom lub 0 w przeciwnym wypadku.
int palindrom(char *tab, int n)
char line[1024];
scanf("%1023[^\n]", line);
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int palindrom(char *tab, int n){
	int left = 0;
	int right = n - 1;
	
	while(left < right){
		
		while(left < right && !isalpha(tab[left])){
        	left++;
    	}
    
    	while(left < right && !isalpha(tab[right])){
        	right--;
    	}
	
		if(tolower(tab[left]) != tolower(tab[right])) return 0;
		
		left++;
		right--;
	}
	
	return 1;
}

void zadanie9(){
	char line[1024];
	int tabLength = 0;
	system("cls");
	printf("Podaj wyrazenie do sprawdzenia (bez polskich znakow): ");
	scanf("%1023[^\n]", line);
	
	while(line[tabLength] != '\0'){
		tabLength++;
	}
	
	system("cls");
	
	if(palindrom(line, tabLength)) printf("Podany ciag znakow jest palindromem.\n");
	else printf("Podany ciag znakow nie jest palindromem.\n");
	
}