#include <iostream>
using namespace std;

// create main array & temporary
int arr[20], B[20];
// n is array input size
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan Panjang elemen array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal Panjang array adalah 20";
        }
    }
}