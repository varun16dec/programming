#include<bits/stdc++.h>

using namespace std;

void merge(vector<int> &a,int l,int m,int r){

      int n1=m-l+1;
      int n2=r-m;
      
      vector<int> l1(n1);
      vector<int> l2(n2);
      int i,j,k;
      for(i=0;i<n1;i++)
            l1[i]=a[i+l];
      for(j=0;j<n2;j++)
            l2[j]=a[m+1+j];
      i=j=0;
      k=l;
      while(i<n1 && j<n2){
            if(l1[i]<l2[j])
                  a[k++] = l1[i++];
            else if(l2[j]<l1[i])
                  a[k++] = l2[j++];
      }
      while(i<n1){
            a[k++] = l1[i++];
      }
      while(j<n2){
            a[k++] = l2[j++];
      }
}

void mergesort(vector<int> &a, int l, int r){
     
      if(l<r){
      
           int m= l+(r-l)/2;
           mergesort(a,l,m);
           mergesort(a,m+1,r);
           merge(a,l,m,r);
           
      }

}

int main(){

      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int n;
      scanf("%d",&n);
      vector<int> a(n);
      int i;
      for(i=0;i<n;i++)
            scanf("%d",&a[i]);
      
      int l=0;
      int r=n-1;
      
      mergesort(a,l,r);
      
      for(i=0;i<n;i++)
            printf("%d ",a[i]);
                  
}
