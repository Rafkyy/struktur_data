#include <stdio.h>

using namespace std;

typedef struct{
char elemen[30];
int jml_kata;
} Kata;

Kata kata;
Kata *p_kata=&kata;

int main(){
    char kalimat[30];
    p_kata->jml_kata=0;
    char *p = p_kata->elemen;
    printf("Masukkan kata : ");
    fflush(stdin);
    printf("Kalimat : %s\n",kalimat);
    for(int i=0;i<kalimat[i];i++){
        *p=kalimat[i];
        p_kata->jml_kata++;
        p++;
    }
        p=p_kata->elemen;
        //tampilkan kembali kalimat tersebut
        for(int i=0;i<=p_kata->jml_kata;i++){
        printf("%c ",*p);
        p++;
        }
}