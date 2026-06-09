#include <stdio.h>
#include <stddef.h>

int my_strcmp(const char *str1, const char *str2){
	int cmp = 0;
	while(*str1 != '\0' && *str2 != '\0' && *str1 == *str2){
		str1++;
        str2++;
	}
	cmp =  *str1 - *str2;
	return cmp;
}

int my_strncmp(const char *str1, const char *str2, size_t n){
	int cmp = 0;
	int i = 0;
	while (i < n && str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }
	if (i == n) {
        return 0;
    }
	cmp = *str1 - *str2;
	return cmp;
}	

int main(){
	char s1[] = "Hello";
    char s2[] = "Help";

    printf("my_strcmp = %d\n", my_strcmp(s1, s2));
    printf("my_strncmp = %d\n", my_strncmp(s1, s2, 2));

	return 0;
}
