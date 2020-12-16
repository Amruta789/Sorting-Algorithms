#include<stdio.h>
#include<stdlib.h>
#include "myheader.h"

// Writes the sorted array values to output.txt file 
void outputFileWrite(int outputarr[],int size){
    FILE *fp1;
    fp1=fopen("output.txt","w");

    // test if the file exists
    if(fp1==NULL){
        printf("Error, unable to open file.");
        exit(1);
    }

    int num, i;

    for(i=0;i<size;i++){
        num=outputarr[i];
        //printf("The number is %d",num);
        fprintf(fp1,"%d\n",num);
    }

    fclose(fp1);
}