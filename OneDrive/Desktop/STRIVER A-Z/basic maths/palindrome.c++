#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int revnum = 0;
    int dup = n;
    while (n != 0) {
        int lastdigit = n % 10;
        n = n / 10;
        revnum = (revnum * 10) + lastdigit;
    }

    cout << revnum;

    if (revnum == dup) {
        cout << " true";
    } else {
        cout << " false";
    }

    return 0;
}
