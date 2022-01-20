#include <stdio.h>

void strcatY(char destino[], char origem[], int limi);

void main() {
	char destinoString[100];
	char origemString[100];
	int limiteString;
	int i;
	
	
	printf("Destino: ");
	fgets(destinoString, 100, stdin);
	
	printf("Origem: ");
	fgets(origemString, 100, stdin);
	
	printf("Limite: ");
	scanf("%d", &limiteString);
	
	strcatY(destinoString, origemString, limiteString);
}

void strcatY(char dest[], char orig[], int lim) {
	int i = 0, j = 0, k = 0, l = 0;
	
	while(dest[i] != '\0') {
		i++;
		if(dest[i] == 10)
			dest[i] = 0;
	}
	
	while(orig[j] != '\0') {
		j++;
	}
	
	for(k = i, l = 0; k <= i + lim; k++, l++) {
		dest[k] = orig[l];
	}
		
	printf("%s", dest);
		
}
