#include "Function.h"
#include <math.h>

template <class T>
void ReverseArray(T* arr, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

bool IsPrime(int number) {
    if (number < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int SumOfPrimes(int* arr, int size) {
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        if (IsPrime(arr[i])) {
            sum += arr[i];
        }
    }

    return sum;
}

template <class T>
int FindElement(T* arr, int size, int element) {
    int position = -1;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            position = i;
        }
    }

    return position;
}