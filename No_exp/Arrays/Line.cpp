#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int arr[num];
    
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    int h;
    cin >> h;

    int m = 1;
    for (int i = 0; i < num; i++) {
        if (arr[i] > h) {
            m = i + 2;
            break;
        }
    }

    cout << m << endl;
    return 0;
}
