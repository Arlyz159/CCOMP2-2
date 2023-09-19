#include <iostream>

using namespace std;

int main() 
{
    int n1;

    cout << "Ingrese un numero: ";
    cin >> n1  ;

    for(int i{2}; i<=n1; i++) {
        if (n1%i == 0) return 0;
        return 1;
        cout << i << " ";
    }
}
