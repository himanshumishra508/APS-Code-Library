#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


void kthSmallest(int* arr, int n,int k)
{
	vector<int> v;
	int i;
	for(i=0;i<n;i++)
	{
		v.pb(arr[i]);
	}
	sort(v.begin(),v.end());
	cout<<v[k-1]<<endl;
}

int32_t main()
{
     #ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin);
         freopen("output.txt", "w", stdout);
     #endif

     io;
     int t;
     cin>>t;
     while(t--)
     {
         int n,i,q,x,y,k,type;
         cin>>n;
         int arr[n];
		 map<int,int> m;
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         cin>>q;
         while(q--)
         {
             cin>>type;
             if(type==1)
             {
                 cin>>x>>k;
                 arr[x-1]=k;
             }
             else
             {
                 cin>>x>>y>>k;
                 if(y>n || x>y)
                 cout<<0<<endl;
                 else
                 {
                    int *p;
					p=arr;
					p=p+(x-1);
					y=y-x+1;
					kthSmallest(p,y,k);
                 }    
             }
             
         }
     }

    return 0;
}
