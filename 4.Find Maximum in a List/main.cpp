#include <iostream>
using namespace std;
int main()
{
    int number[] = { 12,2,4,5,6,7,90,23,10} ;
    int length = 10 ;
    int maximum ;
    
    for(int i=0;i<length;i++)
    {
        if (maximum<number[i])
        {
            maximum = number[i] ;
        }
    }
    cout << "the maximum number in this list is: " << maximum ;
}
