#include <iostream>

using namespace std;

// determine the largest numbers
int main(){
double numb1;
cout << "insert the first number : ";
cin >> numb1;
double numb2;
cout << "insert the second number : ";
cin >> numb2;
double Max = max(numb1, numb2);

if (numb1 > numb2){
    cout << numb1 << " is larger than " << numb2;
    }
if (numb2 > numb1){
        cout << numb2 << " is larger than " << numb1;
}
if (numb1 == numb2){
    cout << " the numbers are equal";
}

}

