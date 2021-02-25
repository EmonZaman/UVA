#include<bits/stdc++.h>
using namespace std;
int r[100002], p[100005];
void init(int n) {
    for(int i = 0; i <= n; i++)
        r[i] = 1, p[i] = i;
}
int findp(int k) {
    return p[k] == k ? k : (p[k]=findp(p[k]));
}
int joint(int x, int y) {
    x = findp(x), y = findp(y);
    if(x != y) {
        if(r[x] > r[y]) {
            r[x] += r[y], p[y] = x;
            return r[x];
        }
        r[y] += r[x], p[x] = y;
        return r[y];
    }
    return r[x];
}
int main() {
    int t, n, tx, ty;
    char x[30], y[30];
    scanf("%d", &t);
   for(int z=0;z<t;z++){
        scanf("%d", &n);
        init(min(2*n, 100000));
        map<string, int> R;
        int size = 0;
        while(n--) {
            scanf("%s %s", &x, &y);
            tx = R[x];
            if(tx == 0)
                R[x] = ++size, tx = size;
            ty = R[y];
            if(ty == 0)
                R[y] = ++size, ty = size;

            cout<<joint(tx,ty)<<endl;
        }
    }
    return 0;
}
