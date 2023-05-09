#include <iostream>
using namespace std;

int main()
{
    int input, hasil = 0;
    int array[] = {1,2,2,3,3,3,5};
    int n = sizeof(array) / sizeof(array[0]); //panjang array
    cout<<"Frekuensi angka yang mau dicari: ";
    cin>>input;

    for (int i = 0; i < n; i++)
    {
        if(array[i] == input)
        {
            hasil++;
            continue;
        }
            
    }

    if (hasil == 0) //untuk mengecek frekuensi di array
    {
        cout<<"Angka " << input << " tidak ada"; 
    }
    else
    {
        cout<<"Frekuensi angka "<< input << " di dalam array adalah "<< hasil;
    }
    
}