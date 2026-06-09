#include <stdio.h>

int my_atoi(const char *str){
	int sign = 1; 
	int result = 0;

    while (*str == ' ' || *str == '\t' || *str == '\n')
        str++;

    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }

    return sign * result;
}

int main(){
	printf("%d\n", my_atoi("123"));     
    printf("%d\n", my_atoi("-456"));    
    printf("%d\n", my_atoi(" +78"));  
    printf("%d\n", my_atoi("123abc"));    
    printf("%d\n", my_atoi("abc123"));
}
