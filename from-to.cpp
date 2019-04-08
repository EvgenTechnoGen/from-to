#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "Enter a number:" << endl;
    cin >> num;

    if (num > 10 && num < 20) {
        cout << num * num << endl;
    }
    else if (num < 10 || num > 20) {
        cout << num << endl;
    }
    
    
    cin.get();
    return 0;
}

