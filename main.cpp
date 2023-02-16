#include "test_sorts.h"
#include "sort_type.h"
#include "statarray.h"

int main() {
    test_BubbleSort();
    test_SelectionSort();
    test_InsertionSort();
    test_CountingSort();
    test_MergeSort();
//    test_SortType();
    test_ArInfo();
    return 0;
}
