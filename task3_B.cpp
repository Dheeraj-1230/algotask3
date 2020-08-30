#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int *arr=new int[m];
	for(int i=0;i<m;i++)
	cin>>arr[i];
	if(n==2){
	int a=arr[m-2];
	int b=arr[m-1];
	for(int i=0;i<m-2;i++)
	{
		if(a>b)
		b+=arr[i];
		else
		a+=arr[i];
	}
	cout<<min(a,b);
    }
    else if(n==1)
    {
    	int s=0;
    	for(int i=0;i<m;i++)
    	s+=arr[i];
    	cout<<s<<endl;
	}
	return 0;
}
