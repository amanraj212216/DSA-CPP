#include <bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	cout<<"enter the number of element in array "<<endl;
	cin>>n;
	
	int arr[n];
	cout<<"enter the elements "<<endl;
	for(int i =0 ;i<n;i++)
	{
	    cin>>arr[i];
	}
	
	int x=0 , y=0;
	for(int i =0 ;i<n;i++)
    {
        if(arr[i]%2==0) x++;
        if(arr[i]%2!=0) y++;
    }
    
    if(x>y)
    cout<<"even";
    else if(x<y)
    cout<<"odd";
    else cout<<"tie";
}