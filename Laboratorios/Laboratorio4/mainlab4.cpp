#include "headerlab4.hpp"



int main()
{
    const int SIZE = 10000;
    int arr[SIZE];

    generateRandomArray(arr, SIZE);
    measuringSortingTime(bubbleSort, arr, SIZE, "Bubble Sort");
    
    generateRandomArray(arr, SIZE);
    measuringSortingTime(selectionSort, arr, SIZE, "Selection Sort");
    
    generateRandomArray(arr, SIZE);
    measuringSortingTime(insertionSort, arr, SIZE, "Insertion Sort");
    
    generateRandomArray(arr, SIZE);
    measuringQuickSortTime(quickSort, arr, 0, SIZE - 1, "Quick Sort");
return 0;
}

