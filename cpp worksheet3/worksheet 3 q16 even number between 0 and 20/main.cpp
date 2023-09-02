// c++ program that display even number between 0 and 20
#include <iostream>

using namespace std;

int main()
{
    cout << "The even number between 0 and 20 is: " << endl;
    cout << "------------------------------------" << endl;
    for(int i = 0; i <= 20; i +=2) // increase i by 2 untill it is less than or equal to 20
    {
    cout << i << ", "; // display the numbers
    }
    return 0;
}
