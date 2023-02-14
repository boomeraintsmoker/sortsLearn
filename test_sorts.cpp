#include <iostream>
#include "sorts.h"
#include "test_sorts.h"
#include "often_used_functions.h"

void test_BubbleSort() {
    std::cout << "---- Bubble sort ----" << std::endl;
    { /* test_1 */
        std::cout << "------ Test №1 ------" << std::endl;
    // -------------------------
        const int SIZE = 10;
        int ar[SIZE];
        int minElement = 340;
        int maxElement = 13200;
    // -------------------------
        randomAr(&ar[0], SIZE, minElement, maxElement);
        showAr(&ar[0], SIZE);
        bubbleSort(&ar[0], SIZE);
        showAr(&ar[0], SIZE);
    }
    { /* test_2 */
        std::cout << "------ Test №2 ------" << std::endl;
    // -------------------------
        const int SIZE = 10;
        int ar[SIZE];
        int minElement = 590;
        int maxElement = 40200;
    // -------------------------
        randomAr(&ar[0], SIZE, minElement, maxElement);
        showAr(&ar[0], SIZE);
        bubbleSort(&ar[0], SIZE);
        showAr(&ar[0], SIZE);
    }
}

void test_SelectionSort() {
    std::cout << "--- Selection sort ---" << std::endl;
    { /* test_1 */
        std::cout << "------ Test №1 ------" << std::endl;
    // -------------------------
        const int SIZE = 10;
        int ar[SIZE];
        int minElement = 1340;
        int maxElement = 2200;
    // -------------------------
        randomAr(&ar[0], SIZE, minElement, maxElement);
        showAr(&ar[0], SIZE);
        selectionSort(&ar[0], SIZE);
        showAr(&ar[0], SIZE);
    }
    { /* test_2 */
        std::cout << "------ Test №2 ------" << std::endl;
    // -------------------------
        const int SIZE = 10;
        int ar[SIZE];
        int minElement = 12;
        int maxElement = 230;
    // -------------------------
        randomAr(&ar[0], SIZE, minElement, maxElement);
        showAr(&ar[0], SIZE);
        selectionSort(&ar[0], SIZE);
        showAr(&ar[0], SIZE);
    }
}

void test_InsertionSort() {
    std::cout << "-- Insertiontion sort --" << std::endl;
    { /* test_1 */
        std::cout << "------- Test №1 -------" << std::endl;
    // -------------------------
        const int SIZE = 10;
        int ar[SIZE];
        int minElement = 14440;
        int maxElement = 24440;
    // -------------------------
        randomAr(&ar[0], SIZE, minElement, maxElement);
        showAr(&ar[0], SIZE);
        insertionSort(&ar[0], SIZE);
        showAr(&ar[0], SIZE);
    }
    { /* test_2 */
        std::cout << "------- Test №2 -------" << std::endl;
    // -------------------------
        const int SIZE = 10;
        int ar[SIZE];
        int minElement = 140;
        int maxElement = 50040;
    // -------------------------
        randomAr(&ar[0], SIZE, minElement, maxElement);
        showAr(&ar[0], SIZE);
        insertionSort(&ar[0], SIZE);
        showAr(&ar[0], SIZE);
    }
}

void test_CountingSort() {
    std::cout << "--- Counting sort ---" << std::endl;
    { /* test_1 */
        std::cout << "------ Test №1 ------" << std::endl;
    // -------------------------
        const int SIZE = 10;
        int ar[SIZE];
        int minElement = 1440;
        int maxElement = 4440;
    // -------------------------
        randomAr(&ar[0], SIZE, minElement, maxElement);
        showAr(&ar[0], SIZE);
        insertionSort(&ar[0], SIZE);
        showAr(&ar[0], SIZE);
    }
    { /* test_2 */
        std::cout << "------ Test №2 ------" << std::endl;
    // -------------------------
        const int SIZE = 10;
        int ar[SIZE];
        int minElement = 1560;
        int maxElement = 8940;
    // -------------------------
        randomAr(&ar[0], SIZE, minElement, maxElement);
        showAr(&ar[0], SIZE);
        insertionSort(&ar[0], SIZE);
        showAr(&ar[0], SIZE);
    }
}
