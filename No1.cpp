#include <iostream>
#include <stdio.h>
using namespace std;

void urutan(int input[5])
{
    for (int j = 0; j<5; j++)
    {
        for (int i = 0; i<4; i++)
        {
            if (input[i]>=input[i+1])
            {
                int temp = input[i];
                input[i] = input[i+1];
                input[i+1] = temp;
            }
        }
    }
}

void noduplikat(int input[5])
{
    bool skip;
    for (int a = 0; a < 5; a++)
    {
        for (int b = (a + 1); b < 5; b++)
        {
            if (input[a] == input[b])
                skip = true;
        }
        if (skip)
            skip = false;
        else
            cout << input[a];
    };
}

int main()
{
    int input[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan angka ke-" << i+1 << " : ";
        cin >> input[i];
    }

    urutan(input);

    cout << "\nsebelum hapus duplikat  : ";
    for (int i = 0; i < 5; i++)
    {
        cout << input[i] << " ";
    };

    cout << "\nsetelah hapus duplikat : ";
    noduplikat(input);

    return 0;
}