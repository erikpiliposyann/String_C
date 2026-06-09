#include <stdio.h>
#include <stddef.h>

char* my_strchr(const char *str, char c){
	while(*str != '\0'){
		if(*str == c){
			return (char*)str;
		}	
		str++;
	}
    if (c == '\0') {
        return (char*)str;
    }

	return NULL;
}

char* my_strrchr(const char *str, char c){
	const char *last = NULL;

    while (*str != '\0') {
        if (*str == c) {
            last = str;
        }
        str++;
    }

    if (c == '\0') {
        return (char*)str;
    }

    return (char*)last;
}

int main(){
	char str[] = "Hello wold";
	char* ptr1 = my_strchr(str,'l');
	char* ptr2 = my_strrchr(str,'l');
	if(ptr1 == NULL){
		printf("Don't find.");
	}
	else{
		printf("First find %s\n", ptr1);
	}

	if(ptr1 == NULL){
		printf("Don't find.");
     }
    else{
       	printf("Last find %s\n", ptr2);
    }

	return 0;
}
