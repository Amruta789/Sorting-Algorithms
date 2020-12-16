#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include<stdbool.h>

// Structure of all global variables
struct output{
    long int size; 
    int array[100000];
	char sortalgo[20]; // bubble sort, merge sort, etc
	char filename[20]; // any .txt file
	long double timetaken;
	char fileinputtype[30]; // Random or asc or desc
}o;

//Function to take input of sorting algorithm from stdin.
void menu();
// Calls all the algorithms in succession
void allAlgorithms();

// Function to create a random list file.
void createFile(void);

// Reads numbers from file and stores values into the struct
void readFile(char filename[]);

// creates ascending order and descending order files using shell commands.
void createAscOrderFile(char filename[]);
void createDescOrderFile(char filename[]);

// Writes sorted array to output file.
void outputFileWrite(int outputarr[],int size);

// Compares output file and ascending order file to check if sorted using shell. 
bool checkIfSortedOutput(char filename[]);

// Writes values from struct to the table.
void outputTable(void);

// Function to append 500 numbers to the random list.
void appendFile(char filename[]);

// Function to modify first line of file (which denotes size) after numbers have been appended using shell.
void modifySizeLine(char filename[], long int size);


// Sorting Algorithms

//Bubble sort function
void bubbleSort(long int n, int arr[]);

//Selection Sort function
void selectionSort(long int n, int arr[]);

//Insertion sort function
void insertionSort(int arr[],long int n);

// Heap sort functions
void heapify(int arr[], long int n, long int i);
void heapSort(int arr[], long int n);

// Quick sort functions 
long int partition(int arr[],long int low,long int high);
void quickSort(int arr[], long int low, long int high);

// Merge sort functions
void merge(int arr[], long int leftfirst, long int leftlast,long int rightfirst,long int rightlast);
void mergeSort(int arr[],long int first, long int last);

#endif