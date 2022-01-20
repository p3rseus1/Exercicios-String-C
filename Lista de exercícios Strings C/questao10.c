#include <stdio.h>
#include <locale.h>

char* toUpperCaseY(char str[], int lim);

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char stringIn[100];
	int limit;
	
	printf("Entrada: ");
	fgets(stringIn, 100, stdin);
	
	printf("Limite: ");
	scanf("%d", &limit);
	
	printf("Saída: %s", toUpperCaseY(stringIn, limit));
}

char* toUpperCaseY(char str[], int lim) {
	int i;
	char *strReturn;
	
	for(i = 0; i <= lim; i++) {
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	
	strReturn = str;
	
	return strReturn;
}

