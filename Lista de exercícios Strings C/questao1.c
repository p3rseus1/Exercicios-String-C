#include <stdio.h>
#include <locale.h>

int alphabeticCount(char string[]) {
	int i = 0;
	int stringCount = 0;
	
	while(string[i] != '\0') {
		
		if(string[i] >= 'a' && string[i] <= 'z')
			stringCount++;
			
		if(string[i] >= 'A' && string[i] <= 'Z')
			stringCount++;
			
		i++;
	}
	
	return stringCount;
}

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[100];
	int letraContador = 0;
	int i = 0;
	
	printf("Entrada: ");
	fgets(palavra, 100, stdin);
		
	printf("Saída: %d", alphabeticCount(palavra));
}
