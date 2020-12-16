#include<stdio.h>
#include "myheader.h"

// Both the merge sort functions
void merge(int arr[], long int leftfirst,long int leftlast,long int rightfirst, long int rightlast){    
    long int i=leftfirst;
    long int savefirst=leftfirst;
    int temp[rightlast+1];
    while ((leftfirst<=leftlast)&&(rightfirst<=rightlast)){
        if(arr[leftfirst]<arr[rightfirst]){
            temp[i]=arr[leftfirst];
            leftfirst++;
        }else{
            temp[i]=arr[rightfirst];
            rightfirst++;            
        }
        i++;        
    }
    while (leftfirst<=leftlast){
        temp[i]=arr[leftfirst];
        leftfirst++;
        i++;
    }
    while (rightfirst<=rightlast){
        temp[i]=arr[rightfirst];
        rightfirst++;        
        i++;        
    }
    for(i=savefirst;i<=rightlast;i++){
        arr[i]=temp[i];
    }
}

void mergeSort(int arr[],long int first,long int last){
    long int mid;    
    if(first<last){
        mid=(first+last)/2;        
        mergeSort(arr,first,mid);
        mergeSort(arr,mid+1,last);
        merge(arr,first,mid,mid+1,last);
    }
}