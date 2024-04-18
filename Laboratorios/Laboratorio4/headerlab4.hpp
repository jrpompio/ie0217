#ifndef SORT_HEADER
#define SORT_HEADER

#include <string>

// Creación de las firmas de las funciones usando prototipos de función.

void bubbleSort(int arr[], int n);

void selectionSort(int arr[], int n);

int partition(int arr[], int low, int high);

void quickSort(int arr[], int low, int high);

void insertionSort(int arr[], int n);

void generateRandomArray(int arr[], int n);

void measuringSortingTime(void (*sortingAlgorithm)(int [], int),
    int arr[], int n, std::string algorithmName);

void measuringQuickSortTime(void (*sortingAlgorithm)(int [],
    int, int), int arr[], int low, int hight, std::string algorithmName);


#endif