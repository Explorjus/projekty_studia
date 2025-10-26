#include <iostream>

using namespace std;

float a, b;

int main()
{
    cout << "Wpisz liczbe a: ";
    cin >> a;

    cout << "Wpisz liczbe b: ";
    cin >> b;



    if(a > b){
        cout << "A jest większe";
        //blok dla prawdy
    }
    if(a < b){
        cout << "B jest większe" << endl;
    }

    cout << endl << endl << "Koniec";
    return 0;
}


