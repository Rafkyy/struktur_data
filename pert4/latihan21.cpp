#include <iostream>

using namespace std;

int main(){
    system("clear");
    int n,i,cari,arr[50];
    cout << "Masukan Jumlah Angka: ";
    cin >> n ;
    cout << "Masukan "<<n<<" Angka :\n";
    for (i=0;i<n;i++){
        cin >> arr [i];
    }
    cout << "Angkanya Adalah ";
    for (i=0;i<n;i++){
            cout<< " " << i+1;
    }
    
}
