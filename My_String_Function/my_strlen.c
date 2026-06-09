#include <stdio.h>
#include <stddef.h>

size_t my_strlen(const char* s1){
	size_t len = 0;
	while(s1[len] != 0){
		len++;
	}
	return len;

}

int main(){
	char str[] = "Hello";
	printf("Size of string %zu.\n", my_strlen(str));

	return 0;
}
