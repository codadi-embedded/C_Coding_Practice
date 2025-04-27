#include <stdio.h>
#include <string.h>

char * my_strncat(char *dest, const char *src, unsigned int n);

int main()
{
    char src1[60] = "How to code, ";
    char src2[] = "string functions!";
    char src3[60] = "My function created for ";
    
    strncat(src1, src2, 5);
    my_strncat(src3, src2, 10);
    
    printf("Original: %s\nMy Function: %s\n", src1, src3);
    // printf("%s\n", strcat(src1, src2));
    return 0;
}

char * my_strncat(char *dest, const char *src, unsigned int n){
    unsigned int count = 0;

    char *temp = dest;
    while((*dest != '\0' || *src != '\0') && count < n){
        if(*dest != '\0'){
            dest++;
        }
        else{
            *dest++ = *src++;
            count++;
        }
    }
    
    *dest = '\0';
    
    // return dest // it returns the last address
    return temp; // return address to the start of the array
}