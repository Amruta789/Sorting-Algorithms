#include<stdio.h>
#include "myheader.h"

//Both quick sort functions
long int partition(int arr[],long int low,long int high){
        long int left, right;
        int pivotitem;
        int t;
        pivotitem =arr[low];
        left =low;
        right=high;
        while(left<right){
                while(arr[left]<=pivotitem)
                        left++;
                while(arr[right]>pivotitem)
                        right--;
                if(left<right){  
                        t=arr[left];
                        arr[left]=arr[right];
                        arr[right]=t;
                }
        }
        arr[low]=arr[right];
        arr[right]=pivotitem;
        return right;
}
void quickSort(int arr[], long int low, long int high){
        long int pivot;
        if(high>low){
                pivot=partition(arr,low,high);
                quickSort(arr,low,pivot-1);
                quickSort(arr,pivot+1,high);
        }
}