#include <iostream>
using namespace std;
int main()
{
  int num, rev = 0;
  int flag = 0;
    cin >> num;
    while(num != 0)
  {
    rev = (rev*10) + (num%10);
    num /= 10;
  }
    while(rev != 0)
  {
    if(flag == 1)
      cout << " ";
    cout << rev % 10 ;
    rev /= 10;
    flag = 1;
  }
  return 0;
}
