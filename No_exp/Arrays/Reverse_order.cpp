#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int array[N];
    
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    
    for (int i = 0; i < N / 2; i++) {
        int temp = array[i];
        array[i] = array[N - 1 - i];
        array[N - 1 - i] = temp;
    }
    
    for (int i = 0; i < N; i++) {
        cout << array[i] << ' ';
    }
    
    return 0;
}
