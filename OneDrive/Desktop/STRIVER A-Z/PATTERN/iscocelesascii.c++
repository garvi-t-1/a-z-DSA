#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char ch = 'A';

        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print letters in incremental order
        for (int j = 0; j <= i; j++) {
            cout << ch;
            ch++;
        }

        // Print letters in decremental order
        ch--;
        for (int j = 0; j < i; j++) {
            ch--;
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}
