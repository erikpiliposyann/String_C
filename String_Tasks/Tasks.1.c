#include <stdio.h>

int count_char(char* str, char ch){
	int count = 0;
	while(*str != '\0'){
		if(*str == ch){
			count++;
		}
		str++;
	}
	return count;
}

int main(){
	char *str = "Hello";
	char ch = 'l';
	printf("%d", count_char(str,ch));
	
	return 0;
}
