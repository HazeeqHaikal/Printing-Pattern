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

    return 0;
}