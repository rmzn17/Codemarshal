#include <iostream>
#include<stdlib.h>
#include <cstdio>
#include<sstream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define vc vector<int>
#define pb push_back
#define pf printf
#define mxpq priority_queue<int>
#define mnpq priority_queue<int,vector<int>,compare>
#define ms(a) memset(a,0,sizeof(a));
#define input(s) getline(cin,s);
#define mpii map<int,int>
#define mpsi map<string,int>
#define str string s;
#define sz size();
#define ln strlen(s);
#define gcd(x,y)  __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define mn2(a, b) (a<b?a:b)
#define mn3(a, b, c) mn2(a, mn2(b, c))
#define mn4(a, b, c, d) mn2(a, mn2(b, mn2(c, d)))
#define mx2(a, b) (a>b?a:b)
#define mx3(a, b, c) mx2(a, mx2(b, c))
#define mx4(a, b, c, d) mx2(a, mx2(b, mx2(c, d)))
#define max 1000001
#define Pinf 99999999999
#define Ninf -99999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;


struct valsort
{
public:
    int key;
    int value;

};


bool compare(const valsort&a,const valsort&b)
{
    return a.value>b.value;
}

int main()
{
    int tc,cs=1;
    cin>>tc;

    while(tc--)
    {
        int n;

        cin>>n;


        int x;
        mpii mp;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            mp[x]++;
        }

        if(n==1)
        {
            printf("Case %d: %d 1\n",cs++,x);
            continue;

        }


        vector<valsort>v;
        map<int,int>::iterator mit;
        vector<valsort>::iterator vit;

        valsort obj;


        for(mit=mp.begin(); mit!=mp.end(); mit++)
        {
            obj.key=mit->first;
            obj.value=mit->second;
            v.push_back(obj);
        }

        int k,val;

        sort(v.begin(),v.end(),compare);

        vit=v.begin();

        k=(*vit).key;
        val=(*vit).value;
        vit++;
        for(; vit!=v.end(); vit++)
        {

            if((*vit).value==val)
            {
                if((*vit).key>k)
                {
                    k=(*vit).key;
                }


            }
            else
                break;

        }

        printf("Case %d: %d %d\n",cs++,k,val);

    }
    return 0;
}





