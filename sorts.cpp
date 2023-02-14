#include "sorts.h"

void bubbleSort(int* ar, int size) {
    for(int i = 0; i < size - 1; i++) {
        int currentIndex = i;
        for(int j = i + 1; j < size; j++) {
            int temp;
            int nextIndex = j;
            while(ar[currentIndex] > ar[nextIndex]) {
                temp = ar[currentIndex];
                ar[currentIndex] = ar[nextIndex];
                ar[nextIndex] = temp;
                if(ar[currentIndex] < ar[nextIndex]) continue;
            }
        }
    }
}

void selectionSort(int* ar, int size) {
    for(int i = 0; i < size; i++) {
        int minIndex = i;
        for(int j = i; j < size; j++) {
            if(ar[minIndex] > ar[j]) {
                minIndex = j;
            }
        }
        int temp;
        if(ar[minIndex] != ar[i]) {
            temp = ar[minIndex];
            ar[minIndex] = ar[i];
            ar[i] = temp;
        }
    }
}

void insertionSort(int* ar, int size) {
    for(int i = 1; i < size; i++) {
        int currentElement = ar[i];
        int j = i - 1;
        while(j >= 0 && ar[j] > currentElement) {
            ar[j + 1] = ar[j];
            ar[j] = currentElement;
            j--;
        }
    }
}

void _putZerosToAr(int* counter, int maxElement) {
    for(int i = 0; i < maxElement; i++) {
       counter[i] = 0;
    }
}

void countingSort(int* ar, int size, int* counter, int maxElement) {
    for(int i = 0; i < size; i++) {
        counter[ar[i]]++;
    }
    int pos = 0;
    for(int i = 0; i < maxElement; i++) {
        for(int j = 0; j < counter[i]; j++) {
            ar[pos++] = i;
        }
    }
}
