#include <iostream>
using namespace std;
int main()
{
    int number = 5 ;
    long long factorial = 1 ;
    
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
  
  int expectedoutput = 120 ;
  if (factorial == expectedoutput)
  {
      cout << "succesfull" << endl;
  }
  else
  cout << "failed" << endl;
}
