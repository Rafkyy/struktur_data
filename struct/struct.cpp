#include <iostream>
#include <string>
using namespace std;

struct  Mahasiswa {
    string name;
    int age;
    string address;
};

int main(){

    Mahasiswa mhs;
    mhs.name = "Rafki Amirul A";
    mhs.age = 20;
    mhs.address = "Kota Tangerang";

    cout << "Name : " << mhs.name << endl;
    cout << "Umur : " << mhs.age << endl;
    cout << "Alamat : " << mhs.address << endl;

    return 0;
}