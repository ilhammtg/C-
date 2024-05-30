#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    string nama_roti, nama_seles;
    int harga_beli, harga_jual, laba;
    float komisi;

    cout<<"masukkan nama selesmen :";
    getline(cin, nama_seles);
    cout<<"masukkan nama roti :";
    getline(cin, nama_roti);
    cout<<"masukkan harga beli :";
    cin>> harga_beli;
    cout<<"masukkan harga jual :";
    cin>> harga_jual;

    laba = harga_jual-harga_beli;
    komisi = laba * 0.04;

    system("cls");

    cout<<"nama selesmen \t\t:"<<nama_seles<<endl;
    cout<<"roti yang dijual\t:"<<nama_roti<<endl;
    cout<<"laba\t\t\t:"<<laba<<endl;
    cout<<"komisi\t\t\t:"<<komisi<<endl;
    return 0;
}