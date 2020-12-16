#include<stdio.h>
#include<stdbool.h>
#include "myheader.h"

// Insertion sort
void insertionSort(int arr[], long int n){ 
    long int i, key, j; 
    for(i=1;i<n;i++){ 
        key=arr[i];  
        for(j=i-1;j>=0 && arr[j]>key;j--){ 
            arr[j+1]=arr[j];  
        } 
        arr[j+1]=key; 
    } 
} 