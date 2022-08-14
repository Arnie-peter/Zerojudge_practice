//zerojudge_a694
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int n,m;
	while(cin >> n >> m){
		int w[n][n]={};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> w[i][j]; 
		}
	}
	for(int p=0;p<m;p++){
		int x1,y1,x2,y2,sum=0;
		cin >> x1 >> y1 >> x2 >> y2;
		for(int i=x1;i<=x2;i++){
			for(int j=y1;j<=y2;j++){
				sum=w[i-1][j-1]+sum;
			}
		}
		cout << sum << endl;
	}
	}
	
	return 0;
}

