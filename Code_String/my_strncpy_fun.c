#include <stdio.h>
#include <string.h>

char * my_strncpy(char *dest, const char *src, unsigned int n);

int main()
{
    char src[] = "Hello World";
    char dest1[20];
    char dest2[20];
    
    strncpy(dest1, src, 3);
    my_strncpy(dest2, src, 3);
    
    printf("Original: %s\nMy Function: %s\n", dest1, my_strncpy(dest2, src, 3));

    return 0;
}

char * my_strncpy(char *dest, const char *src, unsigned int n){
    
    unsigned int count = 0;
    char *temp = dest;
    while(*src != '\0' && count < n){
        *dest++ = *src++;
        count++;
    }
    
    *dest = '\0';
    
    // return dest // it returns the last address
    return temp; // return address to the start of the array
}