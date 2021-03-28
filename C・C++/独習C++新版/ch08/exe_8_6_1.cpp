#include <fstream>
#include <iostream>

int main()
{
    const char message[] = "Hello, block IO";
    std::ofstream out{"block.bin", std::ios::binary};
    out.write(message, sizeof(message));
    out.close();

    std::ifstream in{"block.bin", std::ios::binary};
    char buffer[1024] = {};
    in.read(buffer, sizeof(buffer));
    for (auto remain = in.gcount(); remain--; ) {
        if (message[remain] != buffer[remain]) {
            std::cout << "不一致" << std::endl;
            break;
        }
    }
    std::cout << "終了" << std::endl;
}