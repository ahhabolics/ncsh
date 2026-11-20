#include <stdio.h>
#include <stdlib.h>

#define MIN_ARRAY_SIZE 16
#define MAX_ARRAY_SIZE 256

#define SUCCESS 0
#define ERR_INPUT 1
#define ERR_MEMORY 2

void handle_error(int errorCode){
    switch(errorCode){
        case 1: printf("Error: Invalid input.\n"); break;
        case 2: printf("Error: Memory allocation failed.\n"); break;
        default: printf("Error: Unknown error.\n"); break;
    }
}

char* allocate_memory(char *arrPtr, int *size){
    *size = *size * 2;
    char *ptr = realloc(arrPtr, *size);
    return ptr;
}

int handle_input(){   // unfinished function, doesn't do shit yet 
    //int arrLength = MIN_ARRAY_SIZE;

    char *buff = malloc(MIN_ARRAY_SIZE * sizeof(char));
    if(buff == NULL){
        return ERR_MEMORY;
    }

    char c;
    while(c = getchar() != '\n' && c != EOF){
        //arrLength++;
        //if(arrLength )
        
    } 

    //    
    free(buff); // temp 
    return SUCCESS;
}

void main_loop(){
    while(1){
        int returnCode = handle_input();
        if(returnCode > 0){
            handle_error(returnCode);
        }
    }
}

int main(){
    main_loop();
    return 0;
}