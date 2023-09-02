// writing a c++ program that count the numbers greater than 50
#include <iostream>

using namespace std;

int main (){
     // title and separation line
     cout << "Counting the digits greater than 50 and less than 100" << endl;
     
    cout<<"insert 10 integers: " <<"\n";
     cout << "----------------------------------------------------" << endl;
     
    
    int count = 0;
    int numbs[10]; // take 10 elements 
    int i = 0;
    
while(i < 10)
{  cout<<"number "<< i + 1 <<": ";
        cin >> numbs[i];
        if(numbs[i] >= 0 && numbs[i] <= 100  )
        {
            // if the entered number is above 50 count it
            if (numbs[i] > 50)
        {
            count++;
        }
        i++;
        }
        
        
       else
        { cout<<"please insert the right numbers b/n 0 and 100 \n";
        }
}
// display the count
cout<< "numbers that are greater than fifty and less than 100 are " <<count;
return 0;
}
        

