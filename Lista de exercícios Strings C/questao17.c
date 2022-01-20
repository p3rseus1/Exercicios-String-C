#include <stdio.h>
#include <locale.h>
#define LIMIT 100
#define OUT 0
#define IN 1

void *trimY(char str[], int lim);

void main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char stringIn[LIMIT];
	
	printf("Entrada: ");
	fgets(stringIn, LIMIT, stdin);
	
	trimY(stringIn, LIMIT);
	
}

void *trimY(char str[], int lim) {
	
	int i = 0;
	int stateStartString = OUT;
	int startIndex;
	int endIndex;
	int newEndIndex;
	int nw = 0;
	int stateEndString = OUT;
	int j, k, l;
	char strReturn[lim];
	
	j = k = l = 0;
	
	while(str[i] != '\0') {
		
		if((str[i] >= 'a' && str[i] <= 'z') && stateStartString != IN) {
			stateStartString = IN;	
			startIndex = i;	
		}
		
		if((str[i] >= 'A' && str[i] <= 'Z') && stateStartString != IN) {
			stateStartString = IN;	
			startIndex = i;	
		}
		
		if((str[i + 2] == '\0')) {
			stateEndString = IN;	
			endIndex = i;	
		}
				
		i++;	
	}
	
	l = endIndex;
	
	while(newEndIndex == 0) {
		if((str[l] >= 'A' && str[l] <= 'Z') || (str[l] >= 'a' && str[l] <= 'z')) {
			newEndIndex = l;
		}
		
		l--;
	}
	
	j = startIndex;
	
	while(j <= newEndIndex) {
		strReturn[k] = str[j];
		j++;
		k++;
	}
	
	strReturn[k] = 0;
	strReturn[k + 1] = 0;
	strReturn[k + 2] = 0;

			
	printf("Saída: %s", strReturn);
	
}
