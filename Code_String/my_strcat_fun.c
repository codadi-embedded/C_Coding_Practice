#include <stdio.h>
#include <string.h>

char * my_strcat(char *dest, const char *src);

int main()
{
    char src1[60] = "How to code, ";
    char src2[] = "string functions!";
    char src3[60] = "My function created for ";
    
    strcat(src1, src2);
    my_strcat(src3, src2);
    
    printf("Original: %s\nMy Function: %s\n", src1, src3);
    // printf("%s\n", strcat(src1, src2));
    return 0;
}

char * my_strcat(char *dest, const char *src){
    // unsigned int count = 0;

    char *temp = dest;
    while(*dest != '\0' || *src != '\0'){
        if(*dest != '\0'){
            dest++;
        }
        else{
            *dest++ = *src++;
        }
    }
    
    *dest = '\0';
    
    // return dest // it returns the last address
    return temp; // return address to the start of the array
}