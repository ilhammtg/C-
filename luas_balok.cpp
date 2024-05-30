#include <iostream>

using namespace std;

int main()
{
    float panjang, lebar, tinggi, volum;
    cout << "Input Nilai Panjang :";
    cin >> panjang;
    cout << "Input Nilai Lebar :";
    cin >> lebar;
    cout << "Input Nilai Tinggi :";
    cin >> tinggi;
    volum = panjang * lebar * tinggi;
    cout << "volum balok adalah :" << volum;
    cout << endl;

    return 0;
}

