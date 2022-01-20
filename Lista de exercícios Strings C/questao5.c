#include <stdio.h>
#include <locale.h>

int strlenY(char string[], int limit);

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char stringIn[100];
	int stringLim;
	
	printf("Entrada: ");
	fgets(stringIn, 100, stdin);
	
	printf("Limite: ");
	scanf("%d", &stringLim);
	
	printf("Saída: %d", strlenY(stringIn, stringLim));
}

int strlenY(char str[], int lim) {
	int i = 0, j = 0;
	int strCout = 0;
	
	while(str[i] != '\0') {
		i++;
	}
			
	//printf("%d", i);
	
	for(j = 0; j <= lim; j++) {
		
		if(str[j] >= 'a' && str[j] <= 'z')
			strCout++;
		
		if(str[j] >= 'A' && str[j] <= 'Z')
			strCout++;
		
		if(str[j] == ' ')
			strCout++;
		else
			str[j] = 0;	
			
		//printf("%c\n", str[j]);
			
	}
				
	return strCout;
}
