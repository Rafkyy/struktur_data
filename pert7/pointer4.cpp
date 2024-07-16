#include <iostream>
using namespace std ;

int main(){
    int x ;
    int *a;
    x-7;
    a=&x;

    cout << "Alamat x adalah " << &x << endl;
    cout << "nilai x adalah " << x << endl;
    cout << "Alamat a adalah " << &a << endl;
    cout << "nilai a adalah " << a << endl;
    cout << "nilai *a adalah " << *a << endl;
 return 0;
}