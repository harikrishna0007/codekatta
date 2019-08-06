#include <iostream>
using namespace std;

int main() {
  int arr[10],n,i,j,max,min;
  cin >>n;
for(i=0;i<n;i++)
  cin >>arr[i];
  max = arr[0];
  min = arr[j];
  for(i=0;i<n;i++)
  {
    if(max < arr[i])
       max = arr[i];
  }
  for(j=0;j<n;j++)
  {
    if(min > arr[j])
       min = arr[j];
  }
  cout << max<<' '<<min;
  return 0;
}
