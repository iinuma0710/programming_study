#include <iostream>

int main()
{
    char buffer[1024];

    while (true)
    {
        std::cout << "> ";
        std::cin.getline(buffer, sizeof(buffer));
        
        if (buffer[0] == '\0') {
            break;
        }

        std::cout << "入力された行： " << buffer << std::endl;
    }
    
    std::cout << "終了" << std::endl;
}