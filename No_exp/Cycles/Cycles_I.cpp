#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "";
    cin >> m;

    double sum = 1.0;
    double k = 1.0;

    for (int i = 1; i <= m; i++) {
        k *= i;
        sum += 1.0 / k;
    }

    cout << sum << endl;

    return 0;
}
