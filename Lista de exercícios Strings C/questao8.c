#include <stdio.h>
#include <locale.h>

int lastIndexOf(char str[], char ch[], int lim);

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
	
	printf("Saída: %d", lastIndexOf(stringIn, characterIn, limit));
}

int lastIndexOf(char str[], char ch[], int lim) {
	int i;
	int greatIndex = 0;
	int charIndex = 0;
	
	for(i = 0; i <= lim; i++)
		if(str[i] == ch[charIndex] && i > greatIndex)
			greatIndex = i;
	
	return greatIndex;
}
