#include <stdio.h>

char* my_strstr(const char* haystack, const char* needle){
	while(*haystack != '\0'){
		if (*needle == '\0'){
    	   return (char *)haystack;
		}
		const char *real = haystack;
		const char *find = needle;
		while(*real == *find && *real != '\0' && *find != '\0'){
			real++;
			find++;
		}
		if(*find == '\0'){
			return (char *) haystack;
		}
		haystack++;
	}
	return NULL;
}

int main(){
	char *p;
	p = my_strstr("hello world", "world");
    printf("%s\n", p);

    p = my_strstr("abcdef", "de");
    printf("%s\n", p);

    p = my_strstr("abcdef", "gh");
    printf("%s\n", p);

    p = my_strstr("abc", "");
    printf("%s\n", p);
	

	return 0;
}
