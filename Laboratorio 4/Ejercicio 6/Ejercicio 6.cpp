#include <iostream>

using namespace std;

int main() 
{
    long int x{((100*(100+1))/2)}, suma_cuadrados{0}; 

    for(int i{1}; i <= 100; i++){
        suma_cuadrados += (i*i);
    }
    cout << x << " - " << suma_cuadrados << " = " <<  x * x - suma_cuadrados << endl;
}