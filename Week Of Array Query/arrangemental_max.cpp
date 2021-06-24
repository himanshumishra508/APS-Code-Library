#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int ROW, COL;


int kadane(int* arr, int* start, int* finish, int n)
{

	int sum = 0, maxSum = INT_MIN, i;

	*finish = -1;

	int local_start = 0;

	for (i = 0; i < n; ++i)
	{
		sum += arr[i];
		if (sum < 0)
		{
			sum = 0;
			local_start = i + 1;
		}
		else if (sum > maxSum)
		{
			maxSum = sum;
			*start = local_start;
			*finish = i;
		}
	}

	if (*finish != -1)
		return maxSum;

	maxSum = arr[0];
	*start = *finish = 0;

	for (i = 1; i < n; i++)
	{
		if (arr[i] > maxSum)
		{
			maxSum = arr[i];
			*start = *finish = i;
		}
	}
	return maxSum;
}


void findMaxSum(int M[1000][1000])
{

	int maxSum = INT_MIN,
				finalLeft,
				finalRight,
				finalTop,
				finalBottom;

	int left, right, i,j;
	int temp[ROW], sum, start, finish;

	for (left = 0; left < COL; ++left) {

		memset(temp, 0, sizeof(temp));


		for (right = left; right < COL; ++right) {


			for (i = 0; i < ROW; ++i)
				temp[i] += M[i][right];


			sum = kadane(temp, &start, &finish, ROW);

			if (sum > maxSum) {
				maxSum = sum;
				finalLeft = left;
				finalRight = right;
				finalTop = start;
				finalBottom = finish;
			}
		}
	}


    cout<<maxSum<<endl;
    int finalSum=0;
    int tSum=0;
    for(i=finalTop;i<=finalBottom;i++)
    {
        for(j=finalLeft;j<=finalRight;j++)
        {
            if(M[i][j]<0)
            {
                tSum+=abs(M[i][j]);
                finalSum+=abs(M[i][j]);
            }
            else
            finalSum+=M[i][j];
        }
    }
    cout<<finalSum-tSum<<endl;
}


int32_t main()
{
    int n,m,i,j;
    cin>>n>>m;
    int M[1000][1000];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>M[i][j];
        }
    }
    ROW=n;
    COL=m;

	findMaxSum(M);

	return 0;
}

