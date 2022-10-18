#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i=0;
	int j=s.size()-1;
	bool f=true;
	while(i<j)
	{
		if(s[i]!=s[j])
		{
			f=false;
			break;
			
		}
		i++;
		j--;
	}
	if(f==true)cout<<"YES\n";
	else cout<<"NO\n";
}
