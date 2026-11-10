#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x[1000];

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (x[j] > x[j + 1]) {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
    return  0;
}
