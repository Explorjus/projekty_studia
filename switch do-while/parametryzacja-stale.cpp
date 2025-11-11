#include <iostream>

using namespace std;

const char OPCJA_1 = '1';
const char OPCJA_2 = '2';
const char OPCJA_3 = '3';
const char KONIEC = '4';

char klawisz;

int main()
{
    cout << "\nFormatowanie dysku, wybierz opcje:\n1. Format";
    cout << "\n2. Szybki format\n3. Diagnostyka\n4. Koniec\n>" << flush;
    cin >> klawisz;  // jesli byly by uzyte litery zamiast cyfr mozna skozystac z toupper i tolower dla kolejno samych duzych i malych zankow
    switch(klawisz)  // klasiwsz = toupper/tolower(klawisz)
    {
        case OPCJA_1:
            cout << "\nWybrales formatowanie\n";
            break;
        case OPCJA_2:
            cout << "\nWybrales szybki format\n";
            break;
        case OPCJA_3:
            cout << "\nWybrales diagnostyke\n";
            break;
    }
    while(klawisz != KONIEC);
    return 0;
    
}