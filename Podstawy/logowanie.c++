#include <iostream>

using namespace std;

string login, haslo;

int main() {
    while(true)
    {
        cout << "Podaj login: ";
        cin >> login;

        cout << "Podaj hasło: ";
        cin >> haslo;

        if ((login=="admin")&&(haslo=="1234"))
        {
            cout << "Zalogowano!";
            break;
        }
        else
        {
            cout << "Błędne dane sprobuj ponownie" << endl;
        }
}
    return 0;
}


