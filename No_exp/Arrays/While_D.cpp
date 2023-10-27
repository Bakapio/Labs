#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "";
    cin >> num;

    if (num == 0) {
        cout << "0" << endl;
        return 0;
    }

    while (num > 0) {
        int k = num % 2; 
        cout << k;
        num = num/2; 
    }

    cout << endl;
    return 0;
}
