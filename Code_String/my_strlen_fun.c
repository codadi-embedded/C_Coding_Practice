#include <stdio.h>
#include <string.h>

long int my_strlen(const char *str);

int main()
{
    char s[] = "Hello World";
    
    long int res1 = strlen(s);
    long int res2 = my_strlen(s);
    
    printf("Original: %ld\nMy Function: %ld\n", res1, res2);

    return 0;
}

long int my_strlen(const char *str){
    long int count = 0;
    while(*str != '\0'){
        count++;
        str++;
    }
    
    return count;
}