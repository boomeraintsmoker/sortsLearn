#include <iostream>
#include "statarray.h"

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
        return minSearch(ar, size);
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
        return maxSearch(ar, size);
    }
    std::cout << "Maximum - " << maxElem << std::endl;
    i = 0;
    depth = 0;
    maxElem = std::numeric_limits<int>::min();
    return 1;
}

int binarySearch() {

}
