#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

#define MAXCHAR 2048 //Max characters allowed in a line
#define MAXARG  512  //Max arguments allowed in a line

void shell_loop();

char* read_line(char* line);

char** get_args(char* line, int lineSize);

int get_lineSize(char* line);


int main(){
    do{
        int lineSize;
        printf(":");
        fflush(stdin);
        char line[MAXCHAR];
        read_line(line);
        lineSize = get_lineSize(line);

        char** args = get_args(line, lineSize);

        for(int i = 0; i < lineSize; i++){
            printf("%c", line[i]);
        }
        printf("\n");
    }while(1);
    return 0;
}

//Read Line
//This function reads input from stdin and moves it into a string
//This function returns a string containing the entire line of input
char* read_line(char * line){

    size_t LINESIZE = MAXCHAR;

    getline(&line, &LINESIZE,stdin);   

    return line;
}

//Get Arguments
//This function uses the string from read line to seperate the line into individual arguements.
//This function returns an array of strings containing the arguments
char** get_args(char* line, int lineSize){
    char** args = malloc(sizeof(char*) * 512);
    int numSpaces = 0;
    for(int i = 0; i < lineSize; i++){
        if(line[i] == ' '){
            numSpaces++;
        }
    }
    printf("%d", numSpaces);
    int numArgs;
    return args;
}

int get_lineSize(char* line){
    int size;
    for(size = 0; size < MAXCHAR; size++){
        if(line[size] == '\n'){
            break;
        }
    }
    return size;
}