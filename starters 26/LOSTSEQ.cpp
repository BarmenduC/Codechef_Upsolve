#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t)
	{
	    int n;
	    int x=0;
	    int sum=0;
	    cin>>n;
	    for(int i=0;i<2*n;i++)
	    {
	        cin>>x;
	        sum+=x;
	    }
	    if(sum%2==0)
	     cout<<"YES"<<endl;
	    else
	     cout<<"NO"<<endl;
	     t--;
	}
	return 0;
}
