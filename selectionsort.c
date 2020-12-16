#include<stdio.h>
#include<stdlib.h>
#include "myheader.h"

//Selection sort 
void selectionSort(long int n, int arr[]){
    int temp; 
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
                min=j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}