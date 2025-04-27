#include <stdio.h>
#include <string.h>

int my_strcmp(char *dest, char *src);

int main()
{
    char src1[] = "Amit Kumar";
    char src2[] = "Amit KumAr";
    char src3[] = "My function created for ";
    
    // strcmp(src1, src2);
    // my_strcmp(src1, src2);
    
    printf("Original: %d\nMy Function: %d\n", strcmp(src1, src2),
                my_strcmp(src1, src2));
    // printf("%d\n", strcmp(src1, src2));
    return 0;
}

int my_strcmp(char *dest, char *src){
    unsigned int count = 0;

    while(*dest == *src){
        if(*dest == '\0' || *src == '\0'){
            break;
        }
        dest++;
        src++;
    }
    
    if(*dest == '\0' && *src == '\0'){
        return 0;
    }
    else{
        return *dest - *src;
    }
}