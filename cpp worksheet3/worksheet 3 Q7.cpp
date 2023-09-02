#include <iostream>
using namespace std;
int main(){  //sum serious of a factorial number;
        cout << "factorial of a number: ";
    double fact = 1, sum = 0;
    double inputNumber;
    cin >> inputNumber;
    if(inputNumber < 0){
        cout<<"invalid input!";
    }

    else{
    for(int i = 1; i <= inputNumber; i++){
        fact = fact * i;
        sum = sum + fact;
          }
     cout<<inputNumber<<"! "<<" = "<<fact<<"\nthe sum of the fatorials is " <<sum;

    }
    }

