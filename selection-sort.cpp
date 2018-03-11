#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	    int n;
	    scanf("%d",&n);
	    vector<int>a(n);
	    int i;
	    for(i=0;i<n;i++)
	        scanf("%d",&a[i]);
	    //sorting
	    for(i=0;i<n-1;i++){
	        int min=a[i];
	        int ind=i;
	        bool swap=false;
	        for(int j=i+1;j<n;j++){
	            if(a[j]<min){
	                min=a[j];
	                ind=j;
	                swap=true;
	            }
	       
	        }
	    
	        if(swap){
	            int tmp=a[ind] ;
	            a[ind]=a[i];
	            a[i]=tmp;
	        }
	        
	    }
	    
	    for(i=0;i<n;i++){
	        printf("%d ",a[i]);    
	    }
	    printf("\n");
	    
	    
	
	
	return 0;
}

