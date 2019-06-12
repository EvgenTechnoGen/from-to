#include <iostream>

int main (int argc, const char * argv[]) {
    int num;
    std::cout << "Enter a number:" << std::endl;
    std::cin >> num;

    if (num > 10 && num < 20) {
        std::cout << num * num << std::endl;
    }
    else if (num < 10 || num > 20) {
        std::cout << num << std::endl;
    }
    
    
    std::cin.get();
    system("pause");
    return 0;
}

