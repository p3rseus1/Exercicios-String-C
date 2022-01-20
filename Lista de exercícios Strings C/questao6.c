#include <stdio.h>
#include <locale.h>

void initY(char string[]);

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[100];
	
	printf("Entrada: ");
	fgets(palavra, 100, stdin);
	
	initY(palavra);
}

void initY(char str[]) {
	int i = 0;
	
	while(str[i] != '\0')
		str[i] = 0;
		
	printf("Saída: \"%s\"", str);
}
