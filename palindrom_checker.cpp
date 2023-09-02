#include <iostream>
#include <string.h>
using namespace std;


// palindrom checker 

int main() {
     char myName[40];
     cout<<"insert a word to check if its palindrom ";
     cin.getline(myName,40);

   int length = strlen(myName);
int i = 0, j = (length-1)  , count = 0;
   
   
while(i < length && j >= 0){
    if(myName[i] == myName[j]){
        count++;
    }
   
    i++;
    j--;
}

if(count == length ){
cout<<" the word is palindrom";
}
else{
    cout<<"the word is not palindrom ";
}






}