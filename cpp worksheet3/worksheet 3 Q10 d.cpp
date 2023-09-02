#include <iostream>
using namespace std;
int main() // start pattern question number 10 D
{
    for(int i = 0; i < 3; i++){
        for(int z =3 ; z >i; z--)
        {
            cout<<" ";
        }
    for(int k = 0; k<=i; k++)
    {
        cout<<"*";
    }
    for(int k = 0; k<i; k++)
    {
        cout<<"*";
    }

        cout<<" \n";
        }

   for(int i = 4; i > 0; i--)
    {
    for(int d = 5; d >= i; d--)
        {
            cout<<" ";
        }
    for(int l = 2; l < i; l++)
    {
        cout<<"*";
    }
    for(int l = 3; l < i; l++)
    {
        cout<<"*";
    }
        cout<<endl;
    }
}


