#include<iostream>
using namespace std;
int main()
{
	int n;
    cin>>n;
	int arr[n+1]={0};
	for(int i=2;i*i<n+1;i++)
	{
		for(int j=i*i;j<n+1;j+=i)
		{
			if(arr[j]==0)
			arr[j]=-1;
		}
	}
	int count=0;
int j=1;
	for(int i=2;i<n+1;i++){
	if(arr[i]==0)
	{
		count+=j;
		j++;
	   arr[i]=count;
    }
    else
    arr[i]=count;
}

cout<<arr[n]<<endl;
	return 0;
}
