      #include<iostream>
#include <string>
using namespace std;
int main ()
{
   string s;
   string k;
   int count1=0,count2=0;
   cin>>s>>k;
   for(int i=0;i<s.length();i++){
   	count1++;
   }
   for(int j=0;j<k.length();j++){
   	count2++;
   }
   if(count1>count2){
   	cout<<s;
   }
   else if (count1==count2){
   	cout<<k;
   }
   else{
     cout <<k;
   }
}
