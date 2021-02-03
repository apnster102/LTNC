#include <iostream>
using namespace std;

const int N = 5;

int main()
{
	//int a[N+1];
	bool seen[N];
	for (int i=1;i<=N;i++){
		seen[i]=0;
	}
	for(int i=1;i<=N;i++){
		int n;
		cin>>n;
		if(seen[n]==0){
			seen[n]=1;
		}
		else{
			cout<<"yes";
			return;
		}
	}
	
	cout << "no";
	return 0;
}