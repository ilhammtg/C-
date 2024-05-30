#include <iostream>

using namespace std;

int main()
{
    char repeat; // Variabel untuk menyimpan pilihan perulangan

    do
    {
        int nilai;
        cout << "Masukkan Nilai: ";
        cin >> nilai;

        // pengkondisian
        if (nilai > 70)
        {
            cout << "lulus" << endl;
        }
        else
        {
            cout << "tidak lulus" << endl;
        }

        // perulangan
        cout << endl;
        cout << "Input Lagi? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y'); // inisialisasi variable repeat || reapeat have two value (character)

    cout << endl;

    return 0;
}

// Copyright (c) 2024 ILHAM
// Tahun: 2024