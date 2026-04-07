#include <iostream>
using namespace std;

int arr[20], B[20];
int n;
void input()
{
      while (true)
   {
      cout<< "Enter the number of elements in the array:";
      cin>>n;

      if (n<=20)
      {
          break;
      }
      else
      {
          cout<< "\n :";
      }
   }
}
int main()
{
    return 0;
}
