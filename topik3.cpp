#include <iostream>
using namespace std;

int main() {
    int i, n;

    cout << "Masukkan batas awal: ";
    cin >> i;
    cout << "Masukkan batas akhir: ";
    cin >> n;

    if (i % 2 != 0) {
        i++;
    }

    for (i; i <= n; i += 2) {
        cout << i << endl;
    }

    return 0;
}
