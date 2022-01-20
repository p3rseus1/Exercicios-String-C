#include <stdio.h>
#include <locale.h>

char* toLowerCaseY(char str[], int lim);

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char stringIn[100];
	int limit;
	
	printf("Entrada: ");
	fgets(stringIn, 100, stdin);
	
	printf("Limite: ");
	scanf("%d", &limit);
	
	printf("Saída: %s", toLowerCaseY(stringIn, limit));
}

char* toLowerCaseY(char str[], int lim) {
	int i;
	char *strReturn;
	
	for(i = 0; i <= lim; i++) {
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	
	strReturn = str;
	
	return strReturn;
}

