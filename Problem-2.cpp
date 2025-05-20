#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    for (int i = 0; i < a; i++) {
        if (i !=0) 
        cout << ", ";
        cout << (2 * i + 1);
        
    }
    return 0;
}
