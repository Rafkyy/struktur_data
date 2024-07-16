#include <iostream>
using namespace std ;

int main(){
    double number = 3.14159; // deklarasi variabel double
    double *ptr; // deklarasi pointer ke double

    ptr = &number;

    cout << "Nilai dari number: " << number << endl;
    cout << "Alamat dari number: " << &number << endl;
    cout << "Nilai yang disimpan di alamat ptr: " << *ptr << endl;

    // *ptr = 6.28318;
    cout << "Nilai baru dari number: " << number << endl;

 return 0;
}