#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0)
	{
	    int smoke=0;
	    int n,x,y;
	    cin>>n>>x>>y;
	    while(n>=100)
	    {
	        int bussmoke=x;
	        int carsmoke=25*y;
	        smoke+=min(bussmoke,carsmoke);
	        n-=100;
	    }
	    if(n>0)
	    {
	        int cars=ceil(n/4.0);
	        int carsmoke=cars*y;
	        int bussmoke=x;
	        smoke+=min(bussmoke,carsmoke);
	    }
	    cout<<smoke<<endl;
	    t--;
	}
	return 0;
}
