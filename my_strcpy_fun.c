#include <stdio.h>
#include <string.h>

char * my_strcpy(char *dest, const char *src);

int main()
{
    char src[20] = "Hello World";
    char dest1[20];
    char dest2[20];
    
    strcpy(dest1, src);
    my_strcpy(dest2, src);
    
    printf("Original: %s\nMy Function: %s\n", dest1, my_strcpy(dest2, src));

    return 0;
}

char * my_strcpy(char *dest, const char *src){
    
    char *temp = dest;
    while(*src != '\0'){
        *dest++ = *src++;
    }
    
    *dest = '\0';
    
    // return dest // it returns the last address
    return temp; // return address to the start of the array
}