#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int count;
    if (a % 2 == 0) {
        count = a - 1;
    } else {
        count = a;
    }

    for (int i = 0; i < count; i++) {
        cout << (2 * i + 1);
        if (i < count - 1) {
            cout << ", ";
        }
    }

    cout << endl;
    return 0;
}
