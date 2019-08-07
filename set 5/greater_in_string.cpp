#include <iostream>
#include <string>

using namespace std;

int main()
{
  string input1, input2;
  cin >> input1 >> input2;
  
  (input1.length() > input2.length()) ? cout << input1 : cout << input2;
  return 0;
}
