#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	
	map<char,int> dupli;
	for(int i=0;i<s.length();i++){
		dupli[s[i]]++;
	}
	for (auto it : dupli) {
		if(it.second>1){
			cout<<"Duplicates are : "<<it.first<<" Count is "<<it.second<<endl;
		}
	}
}
