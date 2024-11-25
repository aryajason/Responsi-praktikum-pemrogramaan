#include <iostream>
using namespace std;
int main()
{
    int number[] = { 12,2,4,5,6,7,90,23,10} ;
    int length = 10 ;
    int maximum = 0 ;
    
    for(int i=0;i<length;i++)
    {
        if (maximum<number[i])
        {
            maximum = number[i] ;
        }
    }
   int expectedoutput = 90;
   
   if (maximum == expectedoutput)
  {
      cout << "succesfull" << endl;
  }
  else
  cout << "failed" << endl;

}
