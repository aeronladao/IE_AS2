#include <iostream>

using namespace std;
int main()
{
int stepnum;
cout << "Steps in cleaning utensils";
cin>> stepnum;

switch(stepnum)
{
  
  case 1:
  cout<<"Step 1. Washing";
  break;
  case 2:
  cout<<"Step 2. Sanitizing";
  break;
  case 3:
  cout<<"Step 3. Drying";
  break;
}
  return 0;
}