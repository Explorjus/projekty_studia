#include <iostream>

using namespace std;

char klawisz; //zmienna słuzy do zapmietywania pojecynczych znakow 

int main()
{
    do
    {
        cout << "\nFormatowanie dysku, wybierz opcje:\n. Format:";
        cout << "\n2. Szybki format\n3. Diagnostyka\n4. Koniec\n>" << flush; //flush powoduje opoznienie bufora strumienia cout nie jest to konieczne 

        cin >> klawisz;
        switch(klawisz) //wczytanie znaku i jego identyfikacja 
        {
            case '1' : cout << "\nWybrales formatowanie\n";
                break;
            case '2' : cout << "\nWybrales szybki format\n";
                break;
            case '3' : cout << "\nWybrales diagnostyke\n";// '1', '2' powornanie wartosci zmiennej klawisz z przypadkami 
                break;
        }
    }
    while(klawisz != '4');
    return 0;
}
