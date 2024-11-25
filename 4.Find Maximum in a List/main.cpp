#include <iostream>
using namespace std;
int main()
{
    int array[] = { 12,2,4,5,6,7,90,23,10} ;
    int length = 10 ;
    int maximum ;
    
    for(int i=0;i<length;i++)
    {
        if (maximum<array[i])
        {
            maximum = array[i] ;
        }
    }
    cout << "the maximum number for this list is: " << maximum ;
}
