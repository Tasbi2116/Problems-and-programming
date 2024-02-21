#include <bits/stdc++.h>
using namespace std;
int main()	{
	string s;
	cin>>s;
	int arr[30];
	for(int i=0;i<26;i++)	{
		arr[i]=0;
	}
	for(int i=0;i<s.length();i++)	{
		arr[s[i]-'a']++;
	}
	int odd=0;
	for(int i=0;i<26;i++)	{
		if(arr[i]&1)	{
			odd++;
		}
	}
	if(odd==0 || (odd&1))	{
		cout<<"Shukla 1 wins"<<endl;
	}
	else	{
		cout<<"Shukla 2 wins"<<endl;
	}
	return 0;
}
