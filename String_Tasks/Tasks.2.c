#include <stdio.h>
#include <stdbool.h>

bool strequal(char *str1,char *str2){
	while(*str1 != '\0' && *str2 != '\0'){
		if(*str1 != *str2){
			return 0;
		}
		str1++;
		str2++;
	}
	return 1;
}

int main(){
	char *str1 = "Hello";
	char *str2 = "Helo";
	if(strequal(str1,str2)){
		printf("True");
	}
	else{
		printf("False");
	}

	return 0;
}
