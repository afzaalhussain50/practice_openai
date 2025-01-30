#include <iostream>
using namespace std;

// Generate a function to find the maximum number in an array	


int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

// This code implements the Bubble Sort algorithm in C++. 
// It sorts an array of integers in ascending order. 
// The function 'sorting' takes an array 'arr' and its size 'n' as parameters. 
// It repeatedly steps through the list, compares adjacent elements, 
// and swaps them if they are in the wrong order. 
// This process is repeated until the array is sorted.

#include <algorithm> // for std::swap

void sorting(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

#include <iostream>

int divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero is undefined." << std::endl;
        return 0;  // Or another error code
    }
    return a / b;
}


// Fault 1: Memory Leak - No delete after new
int* allocateMemory() {
    int* ptr = new int(10);
    return ptr; // No delete, causing a memory leak
}


// Fault 3: Buffer Overflow - Accessing Out of Bounds
void bufferOverflow() {
    int arr[5] = {1, 2, 3, 4, 5};
    arr[10] = 99; // Out-of-bounds write
}

// Fault 4: Unused Variable
void unusedVariable() {
    int x = 42; // This variable is never used
}

// Fault 5: Null Pointer Dereference
void nullPointer() {
    int* ptr = nullptr;
    *ptr = 100; // Dereferencing a null pointer
}
// Generate a function to find the minimum number in an array
int main()
{

	int* mem = allocateMemory();  // Memory Leak
    bufferOverflow();  // Buffer Overflow
    unusedVariable();  // Unused Variable
    nullPointer();  // Null Pointer Dereference

	subtract(1, 2);
	add(1, 2);
	cout << "changed v1.15" << endl;
	return 0;
}

//Write code to rest server and client communication