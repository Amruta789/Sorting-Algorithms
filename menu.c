#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include "myheader.h"

// If command line input file is given, then select sorting algortihm.
void menu(){
    clock_t start, end;
    long double cpu_time_used;
    while(1){
        printf("Select the sorting algorithm to be executed:\n");
        printf("1. Bubble sort\n");
        printf("2. Selection sort\n");
        printf("3. Insertion sort\n");
        printf("4. Quick sort\n");
        printf("5. Merge sort\n");
        printf("6. Heap sort\n");
        printf("7. Exit program\n");
        int x;
        scanf("%d",&x);
        switch(x){
            case 1: readFile(o.filename);
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
                break;
            case 2: readFile(o.filename);
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
                break;
            case 3: readFile(o.filename);
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
                break;
            case 4: readFile(o.filename);
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
                break;
            case 5: readFile(o.filename);
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
                break;
            case 6: readFile(o.filename);
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
                break;
            case 7: exit(0);
                break;
            default: printf("Invalid input\n");
        }
    }

}