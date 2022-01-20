#include <stdio.h>
#include <locale.h>
#define LIMIT 100

int equalsIgnoreCaseY(char str1[], char str2[], int lim);

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char stringOg[LIMIT];
	char stringClone[LIMIT];
	
	printf("Original: ");
	fgets(stringOg, LIMIT, stdin);
	
	printf("Clone: ");
	fgets(stringClone, LIMIT, stdin);
	
	if(equalsIgnoreCaseY(stringOg, stringClone, LIMIT) == 1)
		printf("1 - True");
	
	if(equalsIgnoreCaseY(stringOg, stringClone, LIMIT) == 0)
		printf("0 - False");		
}

int equalsIgnoreCaseY(char str1[], char str2[], int lim) {
	int status = 0;
	int i = 0;
	
	while(str1[i] != '\0' && str2[i] != '\0') {
		if(str1[i] == str2[i] || (str1[i] - 32) == str2[i] || str1[i] == (str2[i] - 32))
			status = 1;	
		else 
			break;
		
		i++;
	}
	
	if(status == 1)
		return 1;
	else 
		return 0;
}

/*void main() {
	char letraUm[1];
	char letraDois[1];
	
	letraUm[0] = 'D';
	letraDois[0] = 'd';
	
	letraDois[0] = letraDois[0] - 32;
	
	if(letraUm[0] == letraDois[0])
		printf("%c %c", letraUm[0], letraDois[0]);
	else 
		printf("otário");
}*/

