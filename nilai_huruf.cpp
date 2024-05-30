#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama, npm;
    float nilai;
    
    cout<<"masukkan nama :";
    getline(cin, nama);
    cout<<"masukkan npm :";
    getline(cin, npm);
    cout<<"masukkan nilai angkanya :";
    cin>>nilai;
    cout<<endl;

    if (nilai >= 85)
    {
        cout<<"nama :"<<nama<<endl;
        cout<<"npm :"<<npm<<endl;
        cout<<"nilai huruf : A"<<endl;
    }
    else if (nilai >= 70)
        {
            cout<<"nama :"<<nama<<endl;
            cout<<"npm :"<<npm<<endl;
            cout<<"nilai huruf : B"<<endl;
        }
    else if (nilai >= 60)
        {
            cout<<"nama :"<<nama<<endl;
            cout<<"npm :"<<npm<<endl;
            cout<<"nilai huruf : C"<<endl;
        }

    else
    {
      cout<<nama;  cout<<", saudara ini bodoh sekali"<<endl;
    }
    return 0;
}