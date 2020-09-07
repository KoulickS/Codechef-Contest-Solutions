    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long int
    #define mod 1000000007
    #define pb push_back
    #define fr first
    #define sc second
    int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0},dxx[8]={0,0,1,1,1,-1,-1,-1},dyy[8]={1,-1,0,1,-1,0,1,-1};
    //914836017997511610
    int main()
    { ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     
    int q;
    cin>>q;
    ll t,ans,x,mark;
    int i,a[3]={2,8,16};
    while(q--)
    {	cin>>t;
    	bool flag=false;
    	x=0;mark=0;
    	while(t>0)
    	{	//cout<<"tt"<<t<<endl;
    		for(i=0;i<3;++i)
    		{	mark=i;
    			if(t-a[i]<=0)
    				{flag=true;break;}
    			t-=a[i];
    		}
    		if(flag)
    			break;
    		++x;
    	}
    	ans=1LL<<x;
    	for(i=0;i<3;++i)
    	{
    		if(i==mark)
    			{cout<<ans<<" ";continue;}
    		else
    			cout<<0<<" ";
    	}
    	cout<<"\n";
    }
    return 0;
    } 