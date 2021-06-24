#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int S,E;

int maxSubArraySum(vector<int> a, int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0,
	start =0, end = 0, s=0;

	for (int i=0; i< size; i++ )
	{
		max_ending_here += a[i];

		if (max_so_far < max_ending_here)
		{
			max_so_far = max_ending_here;
			start = s;
			end = i;
		}

		if (max_ending_here < 0)
		{
			max_ending_here = 0;
			s = i + 1;
		}
	}

	S = start;
	E = end;
    return max_so_far;
}


int32_t main()
{
     #ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin);
         freopen("output.txt", "w", stdout);
     #endif
    int n,i,a;
    vector<int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.pb(a);
    }
	cout<<maxSubArraySum(v, n)<<endl;;
    auto it1 = v.begin();
    auto it2 = v.begin();
    n-=E-S+1;
    E-=S;
    while (S--)
    {
        it1++;
        it2++;
    }
    while(E--)
    it2++;

    it2++;
    v.erase(it1,it2);

    if(n==0)
    cout<<0<<endl;
    else
    cout<<maxSubArraySum(v,n)<<endl;
    

	return 0;
}
