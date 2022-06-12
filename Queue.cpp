#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int> que;
	que.push(10);
	que.push(203);
	que.push(30);
	que.push(404);
	
	while(!que.empty()){
		cout<<que.front()<<" ";
		que.pop();
	}
}
