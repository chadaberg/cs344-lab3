#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

#define MAXCHAR 2048 //Max characters allowed in a line
#define MAXARG  512  //Max arguments allowed in a line

void shell_loop();

char* read_line();

char** get_args();


int main(){
    do{
        printf("\n:");
        fflush();
        char* line = read_line();
        char** args = get_args();
    }while(1);

    return 0;
}

//Read Line
//This function reads input from stdin and moves it into a string
//This function returns a string containing the entire line of input
char* read_line(){
    char* line = malloc(sizeof(char) * 2048)
    
    char* buffer;
    buffer = readline();
    
    strcpy(line, buffer);

    return line;
}

//Get Arguments
//This function uses the string from read line to seperate the line into individual arguements.
//This function returns an array of strings containing the arguments
char** get_args(char* line){
    char* args[] = malloc(sizeof(char*) * 512);
    return args;
}