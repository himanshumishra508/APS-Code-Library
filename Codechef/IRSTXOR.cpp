#include<bits/stdc++.h>
using namespace std;
#define int long long int


//help taken from https://www.geeksforgeeks.org/program-decimal-binary-conversion/
//help taken from https://www.geeksforgeeks.org/program-binary-decimal-conversion/


string decimalToBinary(int n)
{

    string s = bitset<64> (n).to_string();


    const auto loc1 = s.find('1');

    if(loc1 != string::npos)
        return s.substr(loc1);

    return "0";
}

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;


    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

int32_t main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int c,i;
    cin>>c;
    string num = decimalToBinary(c);
    int n = num.size();
    string a="",b="";
    for(i=0;i<n;i++)
    {
      if(i==0 && num[i]=='1')
      {
        a+="1";
        b+="0";
      }

      else if(num[i]=='0')
      {
        a+="1";
        b+="1";
      }
      else if(num[i]=='1')
      {
        a+="0";
        b+="1";
      }

    }
    // cout<<a<<endl;
    // cout<<b<<endl;
    int num1 = binaryToDecimal(a);
    int num2 = binaryToDecimal(b);
    cout<<num1*num2<<endl;
  }
  return 0;
}
