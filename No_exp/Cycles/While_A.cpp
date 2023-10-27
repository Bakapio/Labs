#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "";
    cin >> k;

    int sum = 0;
    
    while (k > 0) {
        sum += k % 10; 
        k = k/ 10;     
    }

    cout << sum << endl;
    return 0;
}
