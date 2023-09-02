#include <iostream>
#include <cmath>

using namespace std;

// swap values without third variable

int main(){
int a, b ;
cout<<"insert one number a = ";
cin>>a;
cout<<"insert other number b = ";
cin>>b;
a = a + b;
b = a - b;
a = a - b;
cout<<"a = "<<a<<" "<<"b = "<<b;
}

