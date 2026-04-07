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
          cout<< "\nMaximum array length is 20 :";
      }
   }
cout<< "\n------------"<<endl;
cout<< "\nEnter array elements:"<<endl;
cout<< "\n-------------"<<endl;
    for (int i=0; i<n; i++)
{
    cout<< "Array Index"<<i<< ";";
    cin>>arr[i];
}
}
void mergesort(int low, int high)
{
    if (low >=high)
{
    return;
}
   int mid = (low + high)/2;

mergesort(low,mid);
mergesort(mid+1,high);

    int i = low;
    int j = mid + 1;
    int k = low;
    
    while (i<=mid && j<=high)
{
    if (arr[1]<=arr[j])
    {
        B[k] = arr [i];
        i++;
    }
    k++;
}
{
    while (j<=high)
{
    B[k] = arr[j];
    j++;
    k++;
}
for (int x = low; x<= high;x++)
{
    arr[x] = B[x];
}
}
    void output()
{
    cout << "\nData after sorting (Merge Sort): " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
}
int main()
{
    return 0;
}
