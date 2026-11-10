#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
       int n;
       cin >> n;

        int tens = n / 10;
        int ones = n % 10;
        int sum = tens + ones;

        cout << sum << endl;
    }
}
