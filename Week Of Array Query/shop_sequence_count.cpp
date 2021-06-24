#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int getSum(int BITree[], int index)
{
	int sum = 0; 

	while (index > 0) {

		sum += BITree[index];

		index -= index & (-index);
	}
	return sum;
}

void updateBIT(int BITree[], int n, int index, int val)
{

	while (index <= n) {

		BITree[index] += val;

		index += index & (-index);
	}
}

void convert(int arr[], int n)
{

	int temp[n];
	for (int i = 0; i < n; i++)
		temp[i] = arr[i];
	sort(temp, temp + n);

	for (int i = 0; i < n; i++) {

		arr[i] = lower_bound(temp, temp + n, arr[i]) - temp + 1;
	}
}

int findElements(int arr[], int n)
{

	convert(arr, n);

	int BIT[n + 1];
	for (int i = 1; i <= n; i++)
		BIT[i] = 0;

	int smaller_right[n], greater_left[n];

	for (int i = n - 1; i >= 0; i--) {

		smaller_right[i] = getSum(BIT, arr[i] - 1);

		updateBIT(BIT, n, arr[i], 1);
	}

    int sum=0;
	for (int i = 0; i < n; i++)
    {
        sum+=smaller_right[i];
    }


	for (int i = 1; i <= n; i++)
		BIT[i] = 0;

	return sum;
}

void solve()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = findElements(arr, n);
    cout<<ans<<endl;
    ans>=n ? cout<<"YES\n" : cout<<"NO\n";

}

int32_t main()
{

     #ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin);
         freopen("output.txt", "w", stdout);
     #endif

    io;
    int t;
    t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
  
	//findElements(arr, n);

	return 0;
}
