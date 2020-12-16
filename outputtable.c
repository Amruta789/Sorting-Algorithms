#include<stdio.h>
#include<stdlib.h>
#include "myheader.h"

//Writes the struct values to the table in output
void outputTable(){
    FILE *fp1;
    fp1=fopen("outputtable.txt","a");

    // test if the file exists
    if(fp1==NULL){
        printf("Error, unable to open file.");
        exit(1);
    }
    fprintf(fp1,"%ld|%s|%s|%s|%Lf\n",o.size,o.sortalgo,o.filename,o.fileinputtype,o.timetaken);
    fclose(fp1);
}