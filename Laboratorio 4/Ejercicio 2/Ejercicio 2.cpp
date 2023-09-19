#include <iostream>

using namespace std;

int main() 
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    
    for (int i{1}; i<=num; i++) {
        if (i==1) return 0;
        if (i==2) return 1;
        return (i-1)+ (i-2);
    }
    cout << num << " "; 

}