#include <iostream>

int main()
{
    int array[] = {4, 2, 1, 9, 5};
    
    for (int i = 5; i > 0; i--) {
        std::cout << array[i - 1] << std::endl;
    }
}