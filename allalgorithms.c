#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include "myheader.h"

//Sequentially executes all the algorithms.
void allAlgorithms(){
    clock_t start, end;
    long double cpu_time_used;

    //Bubble sort
    readFile(o.filename);
    printf("Bubble sort\n");
    start=clock();
    bubbleSort(o.size,o.array);
    end = clock();
    cpu_time_used = ((long double) (end - start)) / CLOCKS_PER_SEC;
    outputFileWrite(o.array,o.size);
    if(!checkIfSortedOutput("output.txt")){
        fputs("Sorting algorithm wrong\n", stderr);
        exit(1);
    }
    strcpy(o.sortalgo,"bubble sort");
    o.timetaken=cpu_time_used;
    outputTable();

    //Selection sort
    readFile(o.filename);
    printf("Selection sort\n");
    start=clock();
    selectionSort(o.size,o.array);
    end = clock();
    cpu_time_used = ((long double) (end - start)) / CLOCKS_PER_SEC;
    outputFileWrite(o.array,o.size);
    if(!checkIfSortedOutput("output.txt")){
        fputs("Sorting algorithm wrong\n", stderr);
        exit(1);
    }
    strcpy(o.sortalgo,"selection sort");
    o.timetaken=cpu_time_used;
    outputTable();

    //Insertion sort
    readFile(o.filename);
    printf("Insertion sort\n");
    start=clock();
    insertionSort(o.array,o.size);
    end = clock();
    cpu_time_used = ((long double) (end - start)) / CLOCKS_PER_SEC;
    outputFileWrite(o.array,o.size);
    if(!checkIfSortedOutput("output.txt")){
        fputs("Sorting algorithm wrong\n", stderr);
        exit(1);
    }
    strcpy(o.sortalgo,"insertion sort");
    o.timetaken=cpu_time_used;
    outputTable();
    
    //Quick sort
    readFile(o.filename);
    printf("Quick sort\n");
    start=clock();
    quickSort(o.array,0,o.size-1);
    end = clock();
    cpu_time_used = ((long double) (end - start)) / CLOCKS_PER_SEC;
    outputFileWrite(o.array,o.size);
    if(!checkIfSortedOutput("output.txt")){
        fputs("Sorting algorithm wrong\n", stderr);
        exit(1);
    }
    strcpy(o.sortalgo,"quick sort");
    o.timetaken=cpu_time_used;
    outputTable();

    //Merge sort
    readFile(o.filename);
    printf("Merge sort\n");
    start=clock();
    mergeSort(o.array,0,o.size-1);
    end = clock();
    cpu_time_used = ((long double) (end - start)) / CLOCKS_PER_SEC;
    outputFileWrite(o.array,o.size);
    if(!checkIfSortedOutput("output.txt")){
        fputs("Sorting algorithm wrong\n", stderr);
        exit(1);
    }
    strcpy(o.sortalgo,"merge sort");
    o.timetaken=cpu_time_used;
    outputTable();

    //Heap sort
    readFile(o.filename);
    printf("Heap sort\n");
    start=clock();
    heapSort(o.array,o.size);
    end = clock();
    cpu_time_used = ((long double) (end - start)) / CLOCKS_PER_SEC;
    outputFileWrite(o.array,o.size);
    if(!checkIfSortedOutput("output.txt")){
        fputs("Sorting algorithm wrong\n", stderr);
        exit(1);
    }
    strcpy(o.sortalgo,"heap sort");
    o.timetaken=cpu_time_used;
    outputTable();
}