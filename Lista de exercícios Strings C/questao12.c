#include <stdio.h>
#include <locale.h>

void *replaceFirstY(char str[], char newC[], int size, int lim);

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char stringIn[100];
	char stringNew[1];
	int limitSize;
	int limit;
	
	printf("Entrada: ");
	fgets(stringIn, 100, stdin);
	
	printf("Novo: ");
	scanf("%c", stringNew);
	
	printf("Limite String: ");
	scanf("%d", &limitSize);
	
	printf("Limite: ");
	scanf("%d", &limit);
	
	printf("Saída: %s", replaceFirstY(stringIn, stringNew, limitSize, limit));
}

void *replaceFirstY(char str[], char newC[], int size, int lim) {
	int i;
	int indexNewC = 0;
	char *strReturn;
	
	
	for(i = 0; i <= lim; i++) {
		if(i < size)
			str[i] = newC[indexNewC];
	}
	
	strReturn = str;
	
	return strReturn;	
}
