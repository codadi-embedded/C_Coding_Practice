#include <stdio.h>
#include <string.h>

int my_strncmp(char *dest, char *src, unsigned int n);

int main()
{
    char src1[] = "AmiT Kumar";
    char src2[] = "Amit KumAr";
    char src3[] = "My function created for ";
    
    // strcmp(src1, src2);
    // my_strcmp(src1, src2);
    
    printf("Original: %d\nMy Function: %d\n", strncmp(src1, src2, 4),
                my_strncmp(src1, src2, 4));
    // printf("%d\n", strcmp(src1, src2));
    return 0;
}

int my_strncmp(char *dest, char *src, unsigned int n){
    unsigned int count = 0;

    while(*dest == *src && count < n){
        if(*dest == '\0' || *src == '\0'){
            break;
        }
        dest++;
        src++;
        count++;
    }
    
    if(*dest == '\0' && *src == '\0'){
        return 0;
    }
    else{
        return *dest - *src;
    }
}