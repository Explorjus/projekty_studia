#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba, cel, i = 0;

int main()
{

        srand(time(NULL));   //pobiera czas w sekundach od 1970 roku
        liczba = rand()%5+1;
        
        while(cel != liczba)
        {
            i++;
            cout << "Podaj liczbe do odgadnięcia: ";
            cin >> cel;

            if(liczba == cel)
                cout << "dobrze twoja ilość prb wynosi: " << i << endl;
            

            else if(liczba < cel)
                cout << "za duza" << endl;

            else if(liczba > cel)
                cout << "za mala" << endl;
            
        }
        
        return 0;
    }
