#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(2*n);
	    vector<int> cnt(n+1, 0);
	    for(int i = 0; i<2*n; i++){
	        cin>>a[i];
	        cnt[a[i]]++;
	    }
	    bool poss = true;
	    for(int i = 0; i<=n; i++){
	        if(cnt[i]==0){
	            break;
	        }
	        if(cnt[i]==1){
	            poss = false;
	            break;
	        }
	    }
	    if(poss){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
