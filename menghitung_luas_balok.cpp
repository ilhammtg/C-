// Copyright (c) 2024 ILHAM
// Tahun: 2024
#include <iostream>

using namespace std;

// funtion
float hitungvolumebalok(float panjang, float lebar, float tinggi)
{
    return panjang * lebar * tinggi;
}

int main()
{
    cout << endl;
    cout << "## Menghitung Volume Balok ##" << endl;
    cout << "==============================" << endl;
    cout << endl;

    float p, l, t;

    cout << "Input panjang balok : ";
    cin >> p;
    cout << "Input lebar balok : ";
    cin >> l;
    cout << "Input inggi balok : ";
    cin >> t;
    cout << endl;

    // pemanggilan fungtion
    cout << "Volume balok = " << hitungvolumebalok(p, l, t) << endl;

    cout << endl;
    cout << endl;
    cout << "Code By ILHAM" << endl;

    return 0;
}