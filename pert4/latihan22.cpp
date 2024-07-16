#include <iostream>
using namespace std;

int main(){
    system("clear");
    int n,i,cari,arr[50];
    cout << "Masukan Jumlah Angka: \n";
    cin >> n ;
    cout << "Masukan "<<n<<" Angka :\n";
    for (i=0;i<n;i++){
        cin >> arr [i];
    }
    cout << "Masukan Angka Yang Dicari : ";
    cin >> cari;
    for (i=0;i<n;i++){
        if (arr[i]==cari){
            cout<< "Angka "<<cari<<" ditemukan Pada lokasi ke-"<< i+1;
        } else {
            cout << "Tidak Ditemukan \n";
        }
    }    
}
