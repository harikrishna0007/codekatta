#include <iostream>
using namespace std;

int main() {
  int n,i,a=0,b=1,c;
  cin >> n;
  for(i=1;i<=n;i++){
    cout << b <<' ';
    c=a+b;
    a=b;
    b=c;
  }
  return 0;
}
