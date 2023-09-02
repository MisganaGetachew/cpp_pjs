// writing a c++ program that computes and displays the result of a single requested operation
#include <iostream>

using namespace std;

int main()
{
   double num1, num2; // declaring variables
   char op;
   cout << "Simple calculator "<< endl; // what is this program?
   cout << "-----------------" << endl;  // separation line
   cout << "Enter the first number: ";
   cin >> num1; // receiving the first number
   cout << "Enter the operator(+, -, x or *, /): ";
   cin >> op;;// receiving the operator
   cout << "Enter the second number: ";
   cin >> num2; // receiving the send number


   switch(op)
   {
   case '+':
   cout << num1 << " + " << num2 << " = " << num1 + num2;
   break;
   case '-':
   cout << num1 << " - " << num2 << " = " << num1 - num2;
   break;
   case 'x':
   case '*':
   cout << num1 << " * " << num2 << " = " << num1 * num2;
   break;
   case '/':
   cout << num1 << " / " << num2 << " = " << num1 / num2;
   break;
   default:
   cout << " \n" << op << " is unrecognize operator" << endl;// in case the user enter unknown operator

   }
   if(op == '/' && num2 == 0)
   {
   cout << "\n" << num1 << " / " << num2 << " can't be computed: the denominator is 0"; // if the user enter a denominator of zero
   }

    return 0;
}
