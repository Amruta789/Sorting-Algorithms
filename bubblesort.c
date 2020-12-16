#include "myheader.h"

//Bubble sort
void bubbleSort(long int n, int arr[]){
    for(int j=0;j<n;j++){
        for(int i=0;i<n-j-1;i++){
                if(arr[i]>arr[i+1]){
                        int temp=arr[i];
                        arr[i]=arr[i+1];
                        arr[i+1]=temp;
                }
        }
    }
}