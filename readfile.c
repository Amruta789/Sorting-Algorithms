#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "myheader.h"

//Reads from input file to the array
void readFile(char filename[]){
    FILE *fp2;

    // Here, ascorder.txt and descorder.txt files are generated without giving size in first line
    // So, it reads the values into array directly.
    if(strcmp(filename,"ascorder.txt")==0 || strcmp(filename,"descorder.txt")==0){
        fp2=fopen(filename,"r");

        if(fp2==NULL){
            printf("Error, unable to open file.");
            exit(1);
        }
        int i;
        for ( i = 0; i < o.size; i++){
            fscanf(fp2,"%d\n",&o.array[i]);
        }
        fclose(fp2);

    }
    //Here, first line is stored as o.size in struct, then the values are read into array 
    else{
        fp2=fopen(filename,"r");

        if(fp2==NULL){
            printf("Error, unable to open file.");
            exit(1);
        }
        int i;
        fscanf(fp2,"%ld",&o.size);

        for ( i = 0; i < o.size; i++){
            fscanf(fp2,"%d\n",&o.array[i]);
        }
        fclose(fp2);
    }
    // printf("The numbers are:\n");
    
    // for ( i = 0; i < o.size; i++){
    //     printf(" %d\n",o.array[i]);
    // }

}