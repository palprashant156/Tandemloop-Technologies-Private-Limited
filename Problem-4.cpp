#include <iostream>
using namespace std;

int main() {
    cout<<"enter the number";
    int n;
    cin>>n;
    int numbers[n];
    int count[10] = {0};
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j < n; j++) {
            if (numbers[j] % i == 0) {
                count[i]++;
            }
        }
    }
    cout << "Output:\n";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << count[i];
        if (i < 9) cout << ", ";
    }
    cout << endl;

    return 0;
}
