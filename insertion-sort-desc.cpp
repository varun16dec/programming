#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	scanf("%d",&n);
	int i,j;
	vector<int>a(n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for (j=1;j<n;j++){
	      int key=a[j];
	      i=j-1;
	      while(i>=0 && a[i]<key){
	            a[i+1] = a[i];
	            i--;
	      }
		a[i+1]=key;
	}
	
	for(i=0;i<n;i++){
	      printf("%d ",a[i]);
	}
}
