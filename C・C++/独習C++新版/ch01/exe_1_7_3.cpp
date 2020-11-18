#include <iostream>

int main()
{
    int array[] = {4, 2, 1, 9, 5};
    
    int i = 5;
    do {
        std::cout << array[i - 1] << std::endl;
        i--;
    } while (i > 0);
}