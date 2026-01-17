/* Lab: Advanced Memory Management (Pointers, References, and Dynamic Allocation) */
#include <iostream>

struct stUser {
    int ID;
    std::string Name;
};

void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // References and Pointers Basics
    int x = 10;
    int &ref = x;
    int *ptr = &x;
    *ptr = 20;

    // Pointer to Structure
    stUser user1 = {101, "Hazem"};
    stUser *userPtr = &user1;

    // Void Pointer
    void *vPtr = &x;

    // Dynamic Memory Allocation (Heap)
    int *dynamicInt = new int(50);
    int *dynamicArray = new int[5];

    for (int i = 0; i < 5; i++) {
        dynamicArray[i] = (i + 1) * 10;
    }

    // Cleaning up memory
    delete dynamicInt;
    delete[] dynamicArray;

    return 0;
}