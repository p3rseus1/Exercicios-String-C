#include <stdio.h>
#include <stdlib.h>

void strcpyY(char *dest, char *orig, int lim);

void main() {
	char stringDestiny[100];
	char stringOrigin[100];
	int limit;
	
	printf("Destino: ");
	fgets(stringDestiny, 100, stdin);
	
	printf("Origem: ");
	fgets(stringOrigin, 100, stdin);
	
	printf("Limite: ");
	scanf("%d", &limit);
	
	strcpyY(stringDestiny, stringOrigin, limit);
}

void strcpyY(char destiny[], char origin[], int limit) {
	int i, j;
	
	/*while(destiny[i] != '\0')
		j++;*/
	
	for(i = 0; i < limit; i++) {
		destiny[i] = origin[i];
		
		if(destiny[i] == '\0' || destiny[i] == 10) {
			destiny[i] = 0;	
		}
	}
	
	
	
	printf("%s, %s", destiny, origin);
}
