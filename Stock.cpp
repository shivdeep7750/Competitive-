//https://practice.geeksforgeeks.org/problems/stock-buy-and-sell/0

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int N,M;
	    cin>>N;
	  //  cout<<N<<endl;
	    M=0;
	    int arr[N]={0},LP[N+1]={0};int cnt=0;
	    for(;M<N;M++){
	        cin>>arr[M];
	        if(M>0 && arr[M-1]<arr[M]){LP[M]++;
	            cnt++;
	        }
	    }
	    	    int i=0;
	    int GF=0;
//cout<<cnt<<endl;
	    if(cnt==0)
	    {goto end;}
	    while(1){
	        if(i>=N)break;
	        int flag=0;
	    for(;i<N;i++)
	    {
	        if(LP[i]==0 && LP[i+1]==1)
	        {
	            cout<<"("<<i<<" ";
	            flag=1;
	            GF=1;
	            break;
	        }
	    }
	    if(flag==0)break;
	     for(i=i+1;i<=N;i++)
	    {
	        if(LP[i-1]==1 && LP[i]==0  )
	        {
	            cout<<i-1<<") ";
	            break;
	        }
	    }
	    }
	    end:
	    if(GF==0)
	    {cout<<"No Profit"<<endl;}
	    else cout<<endl;
	}
}
