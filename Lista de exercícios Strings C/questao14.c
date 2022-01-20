#include <stdio.h>
#include <locale.h>
#define LIMIT 100

int equalsY (char str1[], char str2[], int lim);

void main() {
	char stringOg[LIMIT];
	char stringClone[LIMIT];
	
	printf("Original: ");
	fgets(stringOg, LIMIT, stdin);
	
	printf("Clone: ");
	fgets(stringClone, LIMIT, stdin);
	
	if(equalsY(stringOg, stringClone, LIMIT) == 1) {
		printf("1 - True");
	}
	
	if(equalsY(stringOg, stringClone, LIMIT) == 0) {
		printf("0 - False");
	}		
}

int equalsY(char str1[], char str2[], int lim) {
	
	int status;
	int i = 0; 
	
	
	while(str1[i] != '\0' && str2[i] != '\0') {
		if(str1[i] == str2[i])
			status = 1;
		else {
			status = 0;
			break;
		} 	
		i++;
	}
	
	if(status == 1) 
		return 1;
	else 
		return 0;
	

}
