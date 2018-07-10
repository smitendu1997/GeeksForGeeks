#include<bits/stdc++.h>
using namespace std;
int main()
 { int n,T,sum=0;cin>>T;
     for (int i=0;i<T;i++){
         cin>>n;
         int arr[n];
         for(int w=0;w<n;w++){cin>>arr[w];}
         sum=0;
         int max=INT_MIN;
         for(int j=0;j<n;j++){
             sum=sum+arr[j];
              
             if(sum>max) max= sum;
            if(sum<0) sum=0;
             
             
         }
         
         cout<<max<<endl;
     }
	//code
	return 0;
}
