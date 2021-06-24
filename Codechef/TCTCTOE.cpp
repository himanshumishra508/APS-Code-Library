#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


void solve()
{
  int i,j,xc=0,oc=0;
  char board[3][3];
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++) 
    {
      cin>>board[i][j];
      if(board[i][j]=='X')
      xc++;
      else if(board[i][j]=='O')
      oc++;
    }     
  }
  int chance = (((xc+oc)/2) + ((xc+oc)%2!=0));
  // cout<<chance<<endl;
  // cout<<xc+oc-chance<<endl;
  if(xc!=chance || (xc+oc-chance)!=oc)
  cout<<"3\n";
  else
  {
    bool xwin=false,owin=false;
    int cntx=0,cnto=0;
    if(board[0][0]!='_')
    {
      
      if(board[0][1]==board[0][0] && board[0][2]==board[0][0])
      {
        if(board[0][0]=='X')
        {
          xwin=true;
          cntx++;
        }
        
        else
        {
          owin=true;
          cnto++;
        }
        
      }
      else if(board[1][1]==board[0][0] && board[2][2]==board[0][0])
      {
        if(board[0][0]=='X')
         {
          xwin=true;
          cntx++;
        }
        else
        {
          owin=true;
          cnto++;
        }
      }
      else if(board[1][0]==board[0][0] && board[2][0]==board[0][0])
      {
        if(board[0][0]=='X')
         {
          xwin=true;
          cntx++;
        }
        else
         {
          owin=true;
          cnto++;
        }
      }
      //cout<<xwin<<" "<<owin<<endl;
    }
    
    if(board[1][0]!='_')
    {
      
      if(board[1][1]==board[1][0] && board[1][2]==board[1][0])
      {
        if(board[1][0]=='X')
        {
          xwin=true;
          cntx++;
        }
        else
        {
          owin=true;
          cnto++;
        }
      }     
      //cout<<xwin<<" "<<owin<<endl; 
    }
    
    if(board[2][0]!='_')
    {
      
      if(board[2][1]==board[2][0] && board[2][2]==board[2][0])
      {
        if(board[2][0]=='X')
        {
          xwin=true;
          cntx++;
        }
        else
        {
          owin=true;
          cnto++;
        }
      }    
      if(board[1][1]==board[2][0] && board[0][2]==board[2][0])
      {
        if(board[2][0]=='X')
        {
          xwin=true;
          cntx++;
        }
        else
        {
          owin=true;
          cnto++;
        }
      }  
      //cout<<xwin<<" "<<owin<<endl;
    }
    if(board[0][1]!='_')
    {
      if(board[1][1]==board[0][1] && board[2][1]==board[0][1])
      {
        if(board[0][1]=='X')
        {
          xwin=true;
          cntx++;
        }
        else
        {
          owin=true;
          cnto++;
        }
      } 
    }
    if(board[0][2]!='_')
    {
      if(board[1][2]==board[0][2] && board[2][2]==board[0][2])
      {
        if(board[0][2]=='X')
        {
          xwin=true;
          cntx++;
        }
        else
        {
          owin=true;
          cnto++;
        }
      } 
    }
    //cout<<xwin<<" "<<owin<<endl;
    if(xwin && owin)
    cout<<"3\n";
    else if((oc+xc)==9 && (!xwin && !owin))
    cout<<"1\n";
    else if(xwin ^ owin)
    {
      if(xwin)
      {
        if((xc+oc)%2!=0)
        cout<<"1\n";
        else
        cout<<"3\n";
      }
      else
      {
        if((xc+oc)%2==0)
        cout<<"1\n";
        else
        cout<<"3\n";
      }
      
    }
    
    else
    cout<<"2\n";
  }
  

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
  
  return 0;
}