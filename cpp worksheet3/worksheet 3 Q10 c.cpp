#include <iostream>
using namespace std;
int main() // printing shapes question C
{
for(int i = 0; i < 5; i++){
        for(int j = 5; j > i; j--){

            cout<<" ";
                }

        for(int k = 0; k <= i; k++ )
        {
            cout<<"*";
        }

       for(int k = 0; k < i; k++ )
            {
            cout<<"*";
            }

cout<<endl;
}
}

