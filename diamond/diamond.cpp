#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            cout << "  ";
        }
        for (int a = 1; a < i; a++) {
            cout << "* ";
        }
        for (int b = 1; b <= i; b++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "  ";
        }
        for (int a = i; a < n; a++) {
            cout << "* ";
        }
        for (int b = i; b <= n; b++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}