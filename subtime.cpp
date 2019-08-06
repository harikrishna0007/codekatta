int main() {
	int a,m1,b,m2;
	cin>>a>>m1;
	cin>>b>>m2;
	int x=a-b;
	int y=m1-m2;
	if(x<0 ||y<0){
	x=-x;y=-y;
cout<<x<<' '<<y;	
	}
	else
{
	cout<<x<<' '<<y;
}	
	return 0;
}
