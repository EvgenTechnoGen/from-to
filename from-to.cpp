#include <iostream>

int main (int argc, const char * argv[]) {
    int num;
    std::cout << "Enter a number:" << std::endl;
    std::cin >> num;

    if (num > 10 && num < 20) {
        std::cout << num * num << endl;
    }
    else if (num < 10 || num > 20) {
        cout << num << endl;
    }
    
    
    cin.get();
    return 0;
}

