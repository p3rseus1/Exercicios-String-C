#include <stdio.h>
#include <locale.h>

void *replaceY(char str[], char old[], char newS[], int lim);

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char stringIn[100];
	char stringOld[1];
	char stringNew[1];
	int limit;
	
	printf("Entrada: ");
	fgets(stringIn, 100, stdin);
	
	printf("Antigo: ");
	scanf("%c", stringOld);
	
	printf("Novo: ");
	scanf(" %c", stringNew);
	
	printf("Limite: ");
	scanf("%d", &limit);
	
	printf("Saída: %s", replaceY(stringIn, stringOld, stringNew, limit));
}

void *replaceY(char str[], char old[], char newS[], int lim) {
	int i;
	int indexOldAndNew = 0;
	char *strReturn;
	
	
	for(i = 0; i <= lim; i++) {
		if(str[i] == old[indexOldAndNew])
			str[i] = newS[indexOldAndNew];
	}
	
	strReturn = str;
	
	return strReturn;	
}
