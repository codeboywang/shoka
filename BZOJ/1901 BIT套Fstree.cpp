#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <string>
#include <set>
#include <vector>
#include <map>
using namespace std;
#define N 10005
#define M 20005
int n , m , a[N];
int d[M] , D;
pair<int , int> w[N];
int r[N];

int c[N];

#define Node 2097152
#define MID int mid = l + r >> 1
#define Left l , mid
#define Right mid + 1 , r
int ch[Node][2] , sum[Node] , nodecnt;

int newnode()
{
    ++ nodecnt;
    ch[nodecnt][0] = ch[nodecnt][1] = sum[nodecnt] = 0;
    return nodecnt;
}

void add(int& p , int l , int r , int x , int w)
{
    if (!p) p = newnode();
    if (l == r)
        sum[p] += w;
    else
    {
        MID;
        if (x <= mid)
            add(ch[p][0] , Left , x , w);
        else
            add(ch[p][1] , Right , x , w);
        sum[p] = sum[ch[p][0]] + sum[ch[p][1]];
    }
}

void add(int x , int w , int val)
{
    for (int i = x ; i <= n ; i += i & -i)
        add(c[i] , 1 , D , w , val);
}
int PP[20] , MM[20] , sp , sm;
int query(int l , int r , int K)
{
    if (l == r) return l; MID;
    int cnt = 0;
    for (int i = 0 ; i < sp ; ++ i) cnt += sum[ch[PP[i]][0]];
    for (int i = 0 ; i < sm ; ++ i) cnt -= sum[ch[MM[i]][0]];
    if (cnt >= K)
    {
        for (int i = 0 ; i < sp ; ++ i) PP[i] = ch[PP[i]][0];
        for (int i = 0 ; i < sm ; ++ i) MM[i] = ch[MM[i]][0];
        return query(Left , K);
    }
    else
    {
        for (int i = 0 ; i < sp ; ++ i) PP[i] = ch[PP[i]][1];
        for (int i = 0 ; i < sm ; ++ i) MM[i] = ch[MM[i]][1];
        return query(Right , K - cnt);
    }
}
void work()
{
    int i , j , k , x , y;
    char str[5];
    scanf("%d%d",&n,&m);
    for (i = 1 ; i <= n ; ++ i)
        scanf("%d",&a[i]) , d[D ++] = a[i];
    for (i = 1 ; i <= m ; ++ i)
    {
        scanf("%s%d%d",str,&x,&y);
        if (*str == 'Q')
            scanf("%d",&k);
        else k = 0 , d[D ++] = y;
        w[i] = make_pair(x , y) , r[i] = k;
    }
    sort(d , d + D) , D = unique(d , d + D) - d;
    for (i = 1 ; i <= n ; ++ i)
    {
        a[i] = lower_bound(d , d + D , a[i]) - d + 1;
        add(i , a[i] , 1);
    }
    for (i = 1 ; i <= m ; ++ i)
    {
        x = w[i].first , y = w[i].second;
        if (r[i])
        {
            sp = 0 ; for (j = y ; j ; j -= j & -j) PP[sp ++] = c[j];
            sm = 0 ; for (j = x-1 ; j ; j -= j & -j) MM[sm ++] = c[j];
            printf("%d\n" , d[query(1 , D , r[i]) - 1]);
        }
        else
        {
            y = lower_bound(d , d + D , y) - d + 1;
            add(x , a[x] , -1);
            a[x] = y;
            add(x , a[x] , 1);
        }
    }
}

int main()
{
    freopen("~input.txt" , "r" , stdin);
        work();
    return 0;
}
