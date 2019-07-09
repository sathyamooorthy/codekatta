#include <iostream>
using namespace std;
int main()
{
    int i,a=0;
    cin>> i;
    while(i!=0)
    {
        i=i/10;
        a++;
    }
    cout<< a;
    
}
