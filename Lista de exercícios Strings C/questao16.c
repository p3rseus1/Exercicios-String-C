#include <stdio.h>
#include <locale.h>
#define LIMIT 100
#define OUT 0
#define IN 1


void secondNameY(char str[], int lim);

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char stringIn[LIMIT];
	
	printf("Nome: ");
	fgets(stringIn, LIMIT, stdin);
	
	secondNameY(stringIn, LIMIT); 	
}

void secondNameY(char str[], int lim) {	
	int i, j, k, l, m;
	int startIndex, endIndex;
	int secondName = OUT;
	int stateCount = OUT;
	int totalBlank;
	char strReturn[lim];
	
	i = j = k = l = m = 0;
	
	totalBlank = 0;
	
	while(str[i] != '\0') {
		if((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') && secondName != OUT && stateCount != IN) {
			startIndex = i;
			
			stateCount = IN;
		}
						
		if((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') && str[i + 2] == '\0') 
			endIndex = i;	
		
		if((str[i] == 32 || str[i] == '\t') && totalBlank < 2)
			totalBlank++;
			
		if(totalBlank == 2)
			secondName = IN;
		
		i++;
	}
	
	j = startIndex;
	
	while(j <= endIndex) {
		strReturn[k] = str[j];
		
		k++;
		j++;
	}
	
	//Inserindo o vírgula(44) e espaço(32) manualmente
	strReturn[k] = 44;
	strReturn[k + 1] = 32;
	
	//Incrementando manualmente para encaixar o primeiro nome
	k = k + 2;
	
	//Pegando valor do começo do segundo nome, para determinar final do laço e final do primeiro nome
	m = startIndex;
	
	while(l < m) {		
		strReturn[k] = str[l];
		
		k++;
		l++;		
	}
	
	strReturn[k] = 0;
	strReturn[k + 1] = 0;
	
	printf("Saída: %s", strReturn);
}
