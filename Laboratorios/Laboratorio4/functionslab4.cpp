#include "headerlab4.hpp"

#include <iostream>
#include <cstdlib> // Necesaria para generar números aleatorios.
#include <string>  

#include <ctime>   // Esta libreria sirve para obtener referencia de tiempo.
#include <chrono>  // Esta libreria sirve para obtener la referencia de tiempo
                   // en unidad cientifica y con mayor resolución.

using namespace std;
using namespace std::chrono;


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

void generateRandomArray(int arr[], int n){
    srand(time(0));
    for (int i = 0; i < n; ++i){
        arr[i] = rand() % 1000;
    }
}

void measuringSortingTime(
    void (*sortingAlgorithm)(int [], int),  // Acá se demuestra que se puede
                                            // recibir una función como puntero
                                            // en la firma de otra función.
    int arr[],            // Se reciben los parametros necesarios
    int n,                // para la función que se solicitará.
    string algorithmName  // Este parametro es solo para mostrar el nombre.
    ){                    // de la función, pero se debe ingresar manualmente.
    
    // Se inicializa el parametro de inicio con un punto de tiempo presente
    high_resolution_clock::time_point start = high_resolution_clock::now();
    
    sortingAlgorithm(arr, n);
    
    // Se inicializa el parametro de parada con un punto de tiempo presente
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    
    // Mediante la resta de los dos puntos de tiempo anteriores se tiene el 
    // tiempo de duración.

    std::chrono::microseconds duration =\
    std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    cout << "Tiempo de " << algorithmName << ": " << duration.count()
    << " microsegundos" <<endl; 

}

void measuringQuickSortTime(
    void (*sortingAlgorithm)(int [], int, int), // Se agrega un parametro más
                                                // ya que la función tendrá 3
    int arr[],
    int low,            // Acá la función ya recibe el parametro extra
    int hight,
    string algorithmName){
    
    // Se repite lo mismo que la anterior
    high_resolution_clock::time_point start = high_resolution_clock::now();
    sortingAlgorithm(arr, low, hight);
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    std::chrono::microseconds duration =\
    std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    cout << "Tiempo de " << algorithmName << ": " << duration.count()
    << " microsegundos" <<endl; 

}