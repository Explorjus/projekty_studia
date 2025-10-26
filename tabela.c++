#include <iostream>
#include <iomanip>

using namespace std;

const float cal = 39.3701;
const float stopa = 3.28084;
const float jard = 1.09361;
const float mila_ladowa = 0.000621371;

int main()
{
    cout << left << setw(10) << "Metry" << "|" << setw(10) << "Cali" << "|" << setw(10) << "Stopy" << "|" << setw(10) << "Jardy" << "|" << setw(10) << "Mile" << endl;
    cout << string(60, '-') << endl;
    for (int i = 5; i <= 100; i += 5){
        cout << left << setw(10) << i << "|" << setw(10) << fixed << setprecision(2) << i * cal << "|" << setw(10) << i * stopa << "|" << setw(10) << i * jard << "|" << setw(10) << i * mila_ladowa << endl;
    }
    return 0;
}

