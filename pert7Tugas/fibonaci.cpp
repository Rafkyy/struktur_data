#include <iostream>

using namespace std;

int fibonacci(int n) {
    // Basis kasus: Fibonacci dari 0 adalah 0, dan Fibonacci dari 1 adalah 1
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    // Rekursi: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Masukkan bilangan untuk menghitung Fibonacci: ";
    cin >> n;
    cout << "Deret Fibonacci: \n";
    for (int i = 0; i < n; i++) {
        cout <<"f"<<(i)<<": "<<fibonacci(i)<<endl;
    }
    cout << endl;
    return 0;
}

