#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i = 0; i<n; i++)
	    {
	        cin>>v[i];
	    }
	    for(int i = 0; i<n/2; i++)
	    {
	        int temp = v[i];
	        v[i] = v[n - i - 1];
	        v[n - i - 1] = temp;
	    }
	    for(int i = 0; i<n; i++)
	    cout<<v[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
