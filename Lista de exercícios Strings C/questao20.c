#include <stdio.h>
#include <locale.h>
#define LIMIT 100
#define IN 1
#define OUT 0

void wordUprY(char str[], int lim);

void main () {
	char stringIn[LIMIT];
	
	printf("Entrada: ");
	fgets(stringIn, LIMIT, stdin);
	
	wordUprY(stringIn, LIMIT);
}

void wordUprY(char str[], int lim) {
	int startWord = IN;
	int inWord = OUT;
	int i;
	char *strReturn;
		
	while(str[i] != '\0') {
		
		if((str[i] >= 'a' && str[i] <= 'z') && startWord != OUT && inWord != IN) {
			str[i] = str[i] - 32;
			inWord = IN;	
		} else {
			inWord = IN;
		}
		
		if((str[i] >= 'A' && str[i] <= 'Z') && inWord != OUT && startWord != IN) {
			str[i] = str[i] + 32;
			inWord = IN;
		} else {
			inWord = IN;
		}	
		ERA
		if(startWord == IN)
			startWord = OUT;
		
		if(str[i] == 32 || str[i] == '\t') {
			startWord = IN;
			inWord = OUT;
		}
		
		i++;
	}
	
	printf("%s", str);
}
