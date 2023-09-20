#include <iostream>

using namespace std;

int main() 
{
    int num{1};
    bool cond{true}; 

    while(cond){
        for(int i{1}; i <= 20; i++){
            if(num%i!=0) break;
            if(i==20){
                cond = false;
                cout << num;
                break;
            }
        }
        num++;
    }
}