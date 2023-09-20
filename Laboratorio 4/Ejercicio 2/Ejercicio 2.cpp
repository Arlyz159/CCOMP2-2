#include <iostream>

using namespace std;

int main() {
  int cont, a{0}, b{1}; 
  long long int suma{0}; 

  for(int i{1}; suma < 4000000; i++){
    if(a%2==0){
        suma += a; 
    }
    cont = a;
    a = b;
    b = a + cont;
  }
  cout << suma;
}