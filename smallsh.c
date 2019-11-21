#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

void shell_loop();

char* read_line();

char** get_args();


int main(){

    shell_loop();

    return 0;
}



void shell_loop(){
    do{
        printf("\n:");
        char* line = read_line();
        char** args = get_args();
    }while(1);
}

char* read_line(){

    return "C";
}

char** get_args(){
    char* args = malloc(sizeof(char) * 512);
    return args;
}