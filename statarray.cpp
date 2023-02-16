#include <iostream>
#include <limits>
#include "statarray.h"
#include "sorts.h"
#include "arraywork.h"

int getMinElement(int* ar, int size) {
    static int i = 0;
    static int depth = 0;
    depth++;
    static int minElem = ar[0];
    if(i < size) {
        if(ar[i] < minElem) {
            minElem = ar[i];
        }
        i++;
        return getMinElement(ar, size);
    }
    std::cout << "Minimum - " << minElem << std::endl;
    i = 0;
    depth = 0;
    minElem = std::numeric_limits<int>::max();
    return 1;
}

int getMaxElement(int* ar, int size) {
    static int i = 0;
    static int depth = 0;
    depth++;
    static int maxElem = ar[0];
    if(i < size) {
        if(ar[i] > maxElem) {
            maxElem = ar[i];
        }
        i++;
        return getMaxElement(ar, size);
    }
    std::cout << "Maximum - " << maxElem << std::endl;
    i = 0;
    depth = 0;
    maxElem = std::numeric_limits<int>::min();
    return 1;
}

int binarySearch(int* ar, int size, int key)
{
    int center = size/2;
    if(ar[center] == key)
        std::cout << "Key found - " << key << std::endl;
    if(ar[center] > key) {
        return binarySearch(&ar[0], center, key);
    }
    if(ar[center] < key) {
        return binarySearch(&ar[center], size - 1, key);
    }
    return 0;
}

void test_ArInfo() {
    std::cout << "-- Array information --" << std::endl;
    { /* test_1 */
        std::cout << "------ Test №1 ------" << std::endl;
        const int SIZE = 10;
        int ar[SIZE] = {234, 782, 5645, 34, 12, 532, 3452, 32, 98, 4};
        showAr(&ar[0], SIZE);
        insertionSort(&ar[0], SIZE);
        showAr(&ar[0], SIZE);
        getMinElement(&ar[0], SIZE);
        getMaxElement(&ar[0], SIZE);
        binarySearch(&ar[0], SIZE, 98);
    }
    { /* test_2 */
        std::cout << "------ Test №2 ------" << std::endl;
        const int SIZE = 10;
        int ar[SIZE] = {45, 236, 2423, 645, 3, 6765, 34, 9845, 45, 897};
        showAr(&ar[0], SIZE);
        insertionSort(&ar[0], SIZE);
        showAr(&ar[0], SIZE);
        getMinElement(&ar[0], SIZE);
        getMaxElement(&ar[0], SIZE);
        binarySearch(&ar[0], SIZE, 3);
    }
}
