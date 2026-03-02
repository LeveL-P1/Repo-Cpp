#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
    int temp;
    temp = a;
    a=b;
    b = temp;
}

int main()
{
    int x =5 ,y= 9;
    swapNumbers(x,y);
    cout<< "swapped to:\n "<<"x="<<x<<" & "<<"y= "<<y;
 
    return 0;
}