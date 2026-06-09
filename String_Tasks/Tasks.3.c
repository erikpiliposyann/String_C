#include <stdio.h>

void fill_string(char *str,char ch){
	while(*str != '\0'){
		*str = ch;
		str++;
	}
}

int strlastindex(char *str, char ch){
	int index = 0;
	int last_index = -1;
	while(str[index] != '\0'){
		if(str[index] == ch){
			last_index = index;
		}
		index++;
	}
	return last_index;
}

int main(){
	char s1[] = "hello";
    fill_string(s1, 'H');
    printf("%s\n", s1);  

    printf("%d\n", strlastindex("programming", 'm')); 
    printf("%d\n", strlastindex("hello", 'z'));     



	return 0;
}
