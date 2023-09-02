#include <iostream>
#include <cmath>

using namespace std;

//(quest-1)determine whether its odd or even
int main()
{
    int numb;
    cout << "insert a number " << endl;
    cin >> numb;

    if (numb % 2 == 0){
        cout << numb << " is even";
    }
    else{
        cout << numb << " is odd";
    }
    return  0;
}

