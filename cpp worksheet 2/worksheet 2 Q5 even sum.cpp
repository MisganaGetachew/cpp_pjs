#include <iostream>
// display sum of even numbers upto the input number
using namespace std;

int main()
{
    cout << "add the even numbers" << endl;
    int input_one, sum = 0;
    cin>> input_one;
    for(int i = 0; i <= input_one; i = i + 2){
        sum = sum + i;

    }
    cout<<sum;
    return 0;
}

