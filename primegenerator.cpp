    #include <bits/stdc++.h>
    using namespace std;
    bool prime(int n)
    {
        if(n==1)
            return false;
        if(n==2)
            return true;
        if(n%2==0)
            return false;

    	for(int x=3;x<=sqrt(n);x+=2)
        {
            if(n%x==0)
                return false;
        }
        return true;
    }
    int main()
    {
    	int t;
    	cin >> t;
    	while(t--)
    	{
    		int m,n;
    		cin >> m >> n;
    		for(int i=m;i<=n;i++)
    			if(prime(i)) cout << i << endl;
    		cout << endl;
    	}
    	return 0;
    }
