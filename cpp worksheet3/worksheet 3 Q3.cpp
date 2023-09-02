#include<iostream>

using namespace std;
// prime numbers from 1 to 100
int main(){

    for(int i=1;  i<100;  i++){
         for(int j=2;  j <= i;  j++){
              if (j==i){
     
     cout<<i<<" ";
     
              } 
              
            else if(i%j==0){
             break;
           }
         }    
    }
    
    cout<<" ";
    
    return  0;
    
}

