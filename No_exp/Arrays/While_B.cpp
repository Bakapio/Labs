#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "";
    cin >> num;

    int zero = 0;
    while (num > 0) {
        int k = num % 10;
        if (k == 0) {
            zero++;
        }
        num = num/10; 
    }

    cout << zero << endl;

    return 0;
}
