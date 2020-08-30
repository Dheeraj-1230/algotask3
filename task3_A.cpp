#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	if(s.size()==1)
	cout<<0<<endl;
	else{
    	       int n=0;
		for(int i=0;i<s.size();i++)
		n+=(int)(s[i]-'0');
	
		int count=1;
		while(n/10>=1)
		{
			int sum=0;
			int t=n;
			while(t>0)
			{
				sum+=t%10;
				t/=10;
			}
			count++;
			n=sum;
		}
		cout<<count<<endl;
	}	
	return 0;
}
