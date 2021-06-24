using System;

public class Test
{
    static void solve()
    {
        var data = Console.ReadLine().Split(' ');
		    long n = Convert.ToInt64(data[0]);
		    long m = Convert.ToInt64(data[1]);
		    long answer = 0L;
		    long[] arr = new long[n+1];
		    for(long i=0L;i<=n;i++)
		    {
		        arr[i]=1;
		    }

		    for(long i=2L;i<=n;i++)
		    {
		        long temp = m%i;
		        answer+=arr[temp];
		        for(long j=temp;j<=n;j+=i)
		        {
		            arr[j]++;
		        }
		    }
		    Console.WriteLine(answer);
    }
	public static void Main()
	{
		long t = Convert.ToInt64(Console.ReadLine());
		while(t>0)
		{
		    t=t-1;
		    solve();
		}
	}
}
