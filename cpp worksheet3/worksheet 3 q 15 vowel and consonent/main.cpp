#include <iostream>

using namespace std;

int main()
{
    char charact;
    cout << "Consonant or vowel letter" << endl;
    cout << "-------------------------" << endl;
    cout << "Enter an english letter: ";
    cin >> charact;
    // for vowel letter both for upper and lower case
    if(charact == 'A' || charact == 'E' || charact == ' I ' || charact == 'O' || charact == 'U')
    {
    cout << "The letter you entered is: " << charact;
    }
    else if(charact == 'a' || charact == 'e' || charact == 'i' || charact == 'o' || charact == 'u')
    {
    cout << "The letter you entered is vowel";
    }
    // for consonent letter both for upper case and lower case
    else if(charact == 'B' || charact == 'C' || charact == 'D' || charact == 'F' || charact == 'G' || charact == 'H' || charact == 'J' || charact == 'K' || charact == 'L' || charact == 'M' || charact == 'N'|| charact == 'P' || charact == 'Q' || charact == 'R' || charact == 'S' || charact == 'T' || charact == 'V' || charact == 'W' || charact == 'X' || charact == 'Y' || charact == 'Z')
    {
    cout << "The letter you entered is consonent";
    }
    else if(charact == 'b' || charact == 'c' || charact == 'd' || charact == 'f' || charact == 'g' || charact == 'h' || charact == 'j' || charact == 'k' || charact == 'l' || charact == 'm' || charact == 'n'|| charact == 'p' || charact == 'q' || charact == 'r' || charact == 's' || charact == 't' || charact == 'v' || charact == 'w' || charact == 'x' || charact == 'y' || charact == 'z')
    {
    cout << "The letter you entered is consonent"; // display the letter you enntered is consone
    }
    else
    {
    cout << charact << " is not an english letter";
    }
    return 0;
}
