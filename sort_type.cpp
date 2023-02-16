#include <iostream>
#include "sort_type.h"
#include "arraywork.h"

int sortType(int* ar, int size) {
    for(int i = 0; i < size; i++) {
        if(ar[i] <= ar[i + 1]) return 1;
        if(ar[i] >= ar[i + 1]) return 2;
    }
    return 0;
}

int test_SortType() {
    { /* test_1 */
        const int SIZE = 10;
        int ar[SIZE] = {1, 2, 4, 5, 5, 10, 15, 15, 15, 20};
        showAr(&ar[0], SIZE);
        return sortType(&ar[0], SIZE);
    }
    std::cout << std::endl;
    { /* test_2 */
        const int SIZE = 10;
        int ar[SIZE] = {1000, 893, 333, 89, 87, 87, 70, 16, 12, 11};
        showAr(&ar[0], SIZE);
        return sortType(&ar[0], SIZE);
    }
    std::cout << std::endl;
    { /* test_3 */
        const int SIZE = 10;
        int ar[SIZE] = {45, 34, 123, 43, 1, 0, 89, 124, 23, 909};
        showAr(&ar[0], SIZE);
        return sortType(&ar[0], SIZE);
    }
    std::cout << std::endl;
}
