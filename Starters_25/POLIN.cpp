#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
  {
	    int n;
	    cin>>n;
	    unordered_set<int> xx, yy;
	    for(int i = 0; i<n; i++)
      {
	        int x, y;
	        cin>>x>>y;
	        xx.insert(y);
	        yy.insert(x);
	    }
	    cout<<xx.size() + yy.size()<<endl;
	}
	return 0;
}
