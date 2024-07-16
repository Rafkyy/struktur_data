#include <iostream>
using namespace std ;

int main(){
    int value = 15;
    int *ptr1 = &value; //poiter
    int *ptr2 = ptr1;

    cout << "Nilai asli: " << *ptr1 << endl; // menampilkan nilai melalui ptr2

    // mengganti nilai melalui ptr2
    *ptr2 = 20;

    cout << "Nilai setelah diubah melalui ptr2: " << *ptr1 << endl;
    // menampilkan nilai baru
    cout << "Alamat yang ditunjukan ptr1:  " << ptr1 << endl;
    cout << "Alamat yang ditunjukan ptr2:  " << ptr2 << endl;
 return 0;
}