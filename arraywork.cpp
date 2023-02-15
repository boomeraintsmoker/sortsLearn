#include <iostream>
#include "arraywork.h"

void randomAr(int* ar, int size, int minElement,int maxElement) {
    srand(time(nullptr));
    for(int i = 0; i < size; i++) {
        ar[i] = minElement + rand() % (maxElement - minElement);
    }
}

void showAr(int* ar, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << ar[i] << ' ';
    }
    std::cout << std::endl;
}
