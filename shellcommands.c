#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include "myheader.h"

// All the shell commands used in between

// Creates an ascending order file out of input file.
void createAscOrderFile( char filename[]){
    char buf[100];
    snprintf(buf, sizeof(buf), "sed 1d %s | sort -n > ascorder.txt",filename);
    printf("%s\n",buf);
    system(buf);
}
//Creates descending order file out of input file.
void createDescOrderFile(char filename[]){
    char buf[100];
    snprintf(buf, sizeof(buf), "sed 1d %s | sort -nr > descorder.txt",filename);
    printf("%s\n",buf);
    system(buf);
}
// Modifies the first line to indicate size of file
void modifySizeLine(char filename[], long int size){
    char buf[100];
    snprintf(buf, sizeof(buf), "sed -i '1s/.*/%ld/' %s",size, filename);
    printf("%s\n",buf);
    system(buf);
}

// Compares output file with asc order file to check if sorted
bool checkIfSortedOutput(char filename[]){
    char buf[100];
    snprintf(buf, sizeof(buf), "cmp %s ascorder.txt && echo 'Sorted'",filename);
    char buffer[1000];
    FILE *pipe;
    int len; 

    pipe = popen(buf, "r");

    if (NULL == pipe) {
        perror("pipe");
        exit(1);
    } 
    
    fgets(buffer, sizeof(buffer), pipe);
    pclose(pipe);

    len = strlen(buffer);
    buffer[len-1] = '\0'; 
    printf("%s\n",buffer);
    if(strcmp(buffer,"Sorted")==0){
        return true;
    }else{
        return false;
    }
}
    