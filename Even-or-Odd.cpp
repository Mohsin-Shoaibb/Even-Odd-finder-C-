#include<iostream>
using namespace std;
int main()
{
    int number;         // Declaring integer number to take input. 
    cout<<"Enter a number : ";          //Prompted user to input the number.
    cin>>number;

    //every number divisble by 2 is even;

    if(number % 2 == 0)
    {
        cout<<number<<" is even."<<endl;
    }
    else
    {
        cout<<number<<" is odd."<<endl;
    }
  return 0;
}
