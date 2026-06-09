#include <stdio.h>
#include <stddef.h>

char* my_strcpy(char *dest, const char *src){
	char *start = dest;
	while(*src != '\0'){
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (char*)start;
}

char* my_strncpy(char *dest, const char *src, size_t n){
	char *start = dest;
	int i = 0;
	while(i < n && src[i] != '\0'){
		dest[i] = src[i];
		i++;
	}
	while(i < n){
		dest[i] = '\0';
		i++;
	}
	return (char*)start;
}

int main(){
	char src[] = "Hello";
    char dest1[20];
    char dest2[20];

    my_strcpy(dest1, src);
	my_strncpy(dest2, src, 3);
    printf("my_strcpy: %s\n", dest1);
	printf("my_strncpy: %s\n", dest2);
	
	return 0;
}
