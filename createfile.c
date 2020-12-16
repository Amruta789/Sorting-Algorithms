#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "myheader.h"

//Creates a file with 10000 random numbers.
void createFile(){
    FILE *fp1;
    fp1=fopen("randomlist.txt","w");

    // test if the file exists
    if(fp1==NULL){
        printf("Error, unable to open file.");
        exit(1);
    }

    int n=10000, num, i;
    srand(time(NULL));
    fprintf(fp1,"%d\n",n);

    for(i=0;i<n;i++){
        num=rand()%1000;
        //printf("The number is %d",num);
        fprintf(fp1,"%d\n",num);
    }

    fclose(fp1);
}