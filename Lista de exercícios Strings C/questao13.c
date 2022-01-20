#include <stdio.h>
#include <locale.h>
#define LIMIT 100

void *replaceLastY(char str[], char newC[], int size, int lim);

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char stringIn[LIMIT];
	char newChar[1];
	int endLimit;
	int limit = LIMIT;
	
	printf("Entrada:");
	fgets(stringIn, LIMIT, stdin);
	
	printf("Novo caractere: ");
	scanf("%c", newChar);
	
	printf("Quantidade de letras a serem substituídas: ");
	scanf("%d", &endLimit);
	
	printf("Saída: %s", replaceLastY(stringIn, newChar, endLimit, limit));
}

void *replaceLastY(char str[], char newC[], int size, int lim) {
	int strCout;
	int i, j;
	int indexChar;
	int strNewLength;
	char *strReturn;
	
	strCout = i = j = indexChar = strNewLength = 0;
	
	while(str[i] != '\0') {
		strCout++;
		i++;
	}
	
	strNewLength = strCout - 2; // Excluindo os caracteres '\0' e adequando o valor para os vetores
	
	for(j = strNewLength; j >= 0; j--) {
		if(j > (strNewLength - size))
			str[j] = newC[indexChar];
	}
	
	strReturn = str;
	
	return strReturn;
}
