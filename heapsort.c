#include<stdio.h>
#include "myheader.h"

// To heapify a subtree rooted with node i which is 
// an index in arr[]. n is size of heap 
void heapify(int arr[],long int n, long int i) 
{ 
	long int largest = i; // Initialize largest as root 
	long int l = 2*i + 1; // left = 2*i + 1 
	long int r = 2*i + 2; // right = 2*i + 2 

	// If left child is larger than root 
	if (l < n && arr[l] > arr[largest]) 
		largest = l; 

	// If right child is larger than largest so far 
	if (r < n && arr[r] > arr[largest]) 
		largest = r; 

	// If largest is not root 
	if (largest != i) 
	{ 
		int temp=arr[largest];
		arr[largest]=arr[i];
		arr[i]=temp;

		// Recursively heapify the affected sub-tree 
		heapify(arr, n, largest); 
	} 
} 

// main function to do heap sort 
void heapSort(int arr[],long int n) 
{ 
	// Build heap (rearrange array) 
	for (long int i = n / 2 - 1; i >= 0; i--) 
		heapify(arr, n, i); 

	// One by one extract an element from heap 
	for (long int i=n-1; i>0; i--) 
	{ 
		// Move current root to end
		int temp=arr[i];
		arr[i]=arr[0]; 
		arr[0]=temp; 

		// call max heapify on the reduced heap 
		heapify(arr, i, 0); 
	} 
} 




