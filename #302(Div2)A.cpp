#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int k,i,var=0;
	string s;
	cin>>k>>s;
	int n = s.length();
	vector<int> count(256,0);
	vector<int> start(256,0);
	for(i=0;i<n;i++) count[s[i]]++;
	for(i=0;i<=256;i++) 
		if(count[i]>0) var++;
//	cout<<var<<endl;
	if(k<=0||var<k){
		 cout<<"NO"<<endl;
		 return 0 ;
	}
	int prev=0,j=0;
	i=1;
	start[s[prev]]=1;
	cout<<"YES"<<endl;
	while(j<k-1)
	{
		if(start[s[i]]==0)
		{
			cout<<s.substr(prev,i-prev)<<endl;
			prev = i;
			start[s[prev]]=1;
			j++;
		}
		i++;
	}
	cout<<s.substr(prev,n-prev)<<endl;
	
	return 0;
}
