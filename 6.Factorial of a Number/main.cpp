#include <iostream>
using namespace std;
int main()
{
    int number ;
    long long factorial = 1 ;
    
    cout << "Enter a Number: " ;
    cin >> number ;
    
    if(number < 0)
    {
        cout << "can not be a negative number" ;
    }
    else
    {
        for(int i=1;i<=number;i++)
        {
            factorial = i * factorial ;
        }
    }
    cout << "the factorial number of " << number << " is: " << factorial ;
}
