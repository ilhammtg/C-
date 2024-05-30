#include <iostream>

using namespace std;

int main () 
{
    float radius, phi, luas;
    phi = 3.14;
    cout << "masukkan nilai radius : ";
    cin >> radius;
    luas = phi*radius*radius;
    cout << "luas adalah : "<< luas <<endl;
    return 0;
}