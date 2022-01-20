#include <stdio.h>
#include <locale.h>

int indexOfY(char str[], char ch[], int lim);

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char stringIn[100];
	char characterIn[1];
	int limit;
	
	printf("Entrada: ");
	fgets(stringIn, 100, stdin);
	
	printf("Encontrar: ");
	scanf("%c", characterIn);
	
	printf("Limite: ");
	scanf("%d", &limit);
	
	printf("Saída: %d", indexOfY(stringIn, characterIn, limit));
}

int indexOfY(char str[], char ch[], int lim) {
	int i = 0;
	int chCout = 0;
	int indexChar = 0;
	
	for(i = 0; i <= lim; i++) {
		if(str[i] == ch[indexChar])
			chCout++;
	}
	
	return chCout;
}
