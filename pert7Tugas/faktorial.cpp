#include <iostream>

using namespace std;

// Fungsi rekursif untuk menghitung nilai faktorial dari n
int faktorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah bilangan faktorial yang ingin ditampilkan: ";
    cin >> n;

    cout << "Deret faktorial: \n";
    for (int i = 0; i < n; i++) {
        cout <<"f"<<(i)<<": "<<faktorial(i)<<endl;
    }
    cout << endl;

    return 0;
}
