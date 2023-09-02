#include <iostream.h>

int main(){  // question 9 ascii values
    char charcter = 97;
    for(int i = 0; i < 6; i++ )
    {
        for(int z = 0; z <= i; z++)
        {

            cout<<charcter;
            charcter++;
        }
        cout<<endl;
    }

}

