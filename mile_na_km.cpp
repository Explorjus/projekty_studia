#include <cstdlib>
#include <iostream>

using namespace std; //uzywa zawsze std przed wyrazami

int main()
{
    float mile;

    cout << "Przeliczam odleglosc km na mile\n";
    cin >> mile;
    
    if(mile >= 0)  
        cout << "W kilometrach to: " << mile * 1.6;
    else 
        cout << "Odleglosc powinna byc nie ujemna";
        

    return EXIT_SUCCESS;
}
