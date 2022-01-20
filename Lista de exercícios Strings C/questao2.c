#include <stdio.h>
#include <locale.h>

char* isNully(char string[]) {
	char status[5];
	int i = 0;
		
	while(string[i] != '\0') {
		if(string[i] != ' ' && string[i] != '\t' && string[i] != '\0' && string[i] != 10)
			return "(1) True";
		else 
			return "(0) False";
			
		i++;
	}
}

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[100];
	
	printf("Entrada: ");
	fgets(palavra, 100, stdin);
	
	printf("Saída: %s", isNully(palavra));
}
