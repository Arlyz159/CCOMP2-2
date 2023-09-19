#include <iostream>

using namespace std;

int main() 
{
    long long int num1,num2;
    
    cout << "Ingrese un numero: ";
    cin >> num1  ;

    for(long long int i{2}; i<=num1; i++) {
        num2 = num1 % i;

        if(num2 == 0) {
          num1 = num1/i;
          cout << i << " ";
        }
    }
}