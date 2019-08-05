#include <iostream>
using namespace std;

int main() {
 int a,b,n;
 cin>>a>>b;
 for(int i=a;i<b-1;i++)
 {
   n=i+1;
   if(n%2!=0){
     cout<<n<<' ';
   }
 }
 return 0;
}
