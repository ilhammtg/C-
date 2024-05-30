// Copyright (c) 2024 ILHAM
// Tahun: 2024
#include <iostream>

using namespace std;

// funtion
float hitungluassegitiga(float alas, float tinggi)
{
    return 0.5 * alas * tinggi;
}

int main()
{
    cout << endl;
    cout << "## Menghitung Luas Segitiga ##" << endl;
    cout << "==============================" << endl;
    cout << endl;

    float a, t;

    cout << "Input alas segitiga : ";
    cin >> a;
    cout << "Input tinggi segitiga : ";
    cin >> t;
    cout << endl;

    // pemanggilan fungtion
    cout << "Luas Segitigas = " << hitungluassegitiga(a, t) << endl;

    cout << endl;
    cout << endl;
    cout << "Code By ILHAM" << endl;

    return 0;
}