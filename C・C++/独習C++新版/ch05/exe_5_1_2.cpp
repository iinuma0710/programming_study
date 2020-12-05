#include <iostream>


void reverse(int* array, int size)
{
    for (int i = 0; i < size / 2; ++i) {
        int tmp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = tmp;
    }
}

int main()
{
    int array[] = {0, 1, 2, 3, 4};
    reverse(array, 5);

    for (int* ptr = array; ptr != (array + 5); ++ptr) {
        std::cout << *ptr << std::endl;
    }
}