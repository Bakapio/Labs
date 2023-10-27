#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a < 0 || b < 0 || a < b) {
        cout << "Unacceptable data" << endl;
        return 0;
    }

    int res = 1;
    for (int i = 1; i <= b; i++) {
        res *= a - i + 1;
        res /= i;
    }

    cout << res << endl;

    return 0;
}
