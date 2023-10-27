#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k;
    cout << "";
    cin >> k;

    if (k >= 0 && k <= 30) {
        double result = pow(2, k);
        cout << result << endl;
    } else {
        cout << "Unacceptable" << endl;
    }

    return 0;
}
