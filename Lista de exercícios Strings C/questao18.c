#include <stdio.h>
#include <locale.h>
#define LIMIT 100
#define OUT 0
#define IN 1

void trimAllY(char str[], int lim);

void main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char stringIn[LIMIT];
	
	printf("Entrada: ");
	fgets(stringIn, LIMIT, stdin);
	
	trimAllY(stringIn, LIMIT);
	
}

void trimAllY(char str[], int lim) {
	
	int i, j, k, l;
	int startString, endString;
	int startIndex, endIndex;
	char strReturn[lim];
	
	int inString;
	
	int newEndIndex = 0;
	
	int newWord;
	int totalBlank;
		
	startString = OUT;
	endString = OUT;
	inString = OUT;
	
	i = j = l = k = 0;
	
	newWord = 0;
	totalBlank = 1;
	
	while(str[i] != '\0') {
		
		if((str[i] >= 'a' && str[i] <= 'z') && startString != IN) {
			startString = IN;
			startIndex = i;
		}
		
		if((str[i] >= 'A' && str[i] <= 'Z') && startString != IN) {
			startString = IN;
			startIndex = i;
		}	
		
		if(str[i + 2] == '\0') {
			endString = IN;
			endIndex = i;	
		}
		
		i++;
		
	}
	
	j = endIndex;
	
	while(newEndIndex == 0){
		
		if((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z'))
			newEndIndex = j;
		
		j--;
		
	}
	
	k = startIndex;
	
	while(k <= newEndIndex) {
		
		if((str[k] >= 'a' && str[k] <= 'z') || (str[k] >= 'A' && str[k] <= 'Z')) {
			strReturn[l] = str[k];
			inString = IN;
			l++;
		}
			
		if((str[k] == 32 || str[k] == '\t' || str[k] == '\0') && inString != OUT) {
			strReturn[l] = str[k];
			inString = OUT;	
			l++;
		}
			
		k++;
		
	}
	
	printf("Saída: %s", strReturn);
		
}
