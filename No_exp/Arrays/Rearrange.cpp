#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int array[N];
    
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    
    for (int i = 0; i < N - 1; i += 2) {
        int t = array[i];
        array[i] = array[i + 1];
        array[i + 1] = t;
    }
    
    for (int i = 0; i < N; i++) {
        cout << array[i] << ' ';
    }
    
    return 0;
}
