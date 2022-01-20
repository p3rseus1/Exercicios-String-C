#include<stdio.h>
#include <locale.h>
#define LIMIT 100


void duplicaY(char str[], int lim);

void main() {
	
	char stringIn[LIMIT];
	
	printf("Entrada: ");
	fgets(stringIn, LIMIT, stdin);
	
	duplicaY(stringIn, LIMIT);
}

void duplicaY(char str[], int lim) {
	
	int i, j, k;
	int stringEnd;
	int newString;
	char strReturn[LIMIT];
	char strCopy[LIMIT];
	
	
	i = j = k = 0; 
	
	while(str[i] != '\0') {
		strCopy[i] = str[i];
		
		if(str[i] != '\0')
			stringEnd = i;
		i++;
	}
	
	while(strCopy[j] != '\0') {
		str[stringEnd] = strCopy[j];
		stringEnd++;
		j++;
	}
	
	printf("%s", str);
	
}
