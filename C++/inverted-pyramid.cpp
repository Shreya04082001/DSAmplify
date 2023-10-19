#include <iostream>
using namespace std;

int main() {

    int r;

    cout << "Enter number of rows: ";
    cin >> r;

    for(int i = r; i >= 1; --i) {
        for(int blank = 0; blank < r-i; ++blank)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        for(int j = 0; j < i-1; ++j)
            cout << "* ";

        cout << endl;
    }

    return 0;
}
