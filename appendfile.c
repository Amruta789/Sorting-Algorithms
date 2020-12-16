#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "myheader.h"

//It appends 500 random numbers to the file given as input.
void appendFile(char filename[]){
    FILE *fp1;
    fp1=fopen(filename,"a");

    // test if the file exists
    if(fp1==NULL){
        printf("Error, unable to open file.");
        exit(1);
    }

    int n=500, num, i;
    srand(time(NULL));

    for(i=0;i<n;i++){
        num=rand()%1000;
        //printf("The number is %d",num);
        fprintf(fp1,"%d\n",num);
    }

    fclose(fp1);
}