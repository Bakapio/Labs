#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int array[N];
    
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    int t = array[N - 1]; // saving the last elem

    for (int i = N - 1; i > 0; i--) {
        array[i] = array[i - 1]; // shifting elems right
    }

    array[0] = t; // placing saved elem on id=0

    for (int i = 0; i < N; i++) {
        cout << array[i] << ' ';
    }
    
    return 0;
}
