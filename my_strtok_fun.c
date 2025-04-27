#include <stdio.h>
#include <string.h>


int my_strcmp(char *fstring, const char *sub){
    
    if(!fstring || !sub){
        return -1;
    }

    while(*sub != '\0'){
        if(*sub++ != *fstring++){
            return -1;
        }
    }

    return 1;
}

char *my_strtok(char *str, const char *del){
    static char *save;
    char *start;
    unsigned int i = 0;

    if(str != NULL){ // First call or continuing
        save = str;
    }

    if(save == NULL || *save == '\0'){
        return NULL;
    }

    start = save; // To return the start address

    while(*(save+i) != '\0'){

        if(my_strcmp(save + i, del) == 1){
            // Found delimiter and split here
            *(save + i) = '\0';
            save = save + i + strlen(del);
            return start;
        }
        i++;
    }

    // No more delimiter found, this is the last token
    save = NULL;
    return start;
}

int main(){
    char a[] = "Hello1!--Hello2!--Hello3!";
    char *token = NULL;

    token = my_strtok(a, "--");

    while(token != NULL){
        printf("%s\n", token);
        token = my_strtok(NULL, "--");
    }
}