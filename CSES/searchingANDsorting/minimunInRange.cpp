#include <bits/stdc++.h>
using namespace std;

#define ll long long

void build(ll arr[], ll tree[], ll l, ll r, ll node) {
    if (l == r) {
        tree[node] = arr[l];
        return;
    }

    ll mid = (l + r) / 2;
    ll left = 2 * node;
    ll right = 2 * node + 1;
    build(arr, tree, l, mid, left);
    build(arr, tree, mid + 1, r, right);
    tree[node] = min(tree[left], tree[right]);
}

void update(ll arr[], ll tree[], ll l, ll r, ll node, ll ind, ll val) {
    if (l == r) {
        arr[ind] = val;
        tree[node] = val;
        return;
    }

    ll mid = (l + r) / 2;
    ll left = 2 * node;
    ll right = 2 * node + 1;
    if (ind > mid) {
        update(arr, tree, mid + 1, r, right, ind, val);
    } else {
        update(arr, tree, l, mid, left, ind, val);
    }

    tree[node] = min(tree[left], tree[right]);
}

ll query(ll arr[], ll tree[], ll l, ll r, ll node, ll a, ll b) {
    if (a > r || b < l) {
        return LLONG_MAX;
    }
    if (l >= a && r <= b) {
        return tree[node];
    }

    ll mid = (l + r) / 2;
    ll left = 2 * node;
    ll right = 2 * node + 1;
    ll q1 = query(arr, tree, l, mid, left, a, b);
    ll q2 = query(arr, tree, mid + 1, r, right, a, b);

    return min(q1, q2);
}

int main() {
    int n, q;
    cin >> n >> q;
    ll *tree = new ll[4 * n];
    ll *arr = new ll[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    build(arr, tree, 1, n, 1);

    for (int i = 0; i < q; i++) {
        int c, a, b;
        cin >>c>> a >> b;
        if(c==1)
        update(arr,tree,1,n,1,a,b);
        else
        cout << query(arr, tree, 1, n, 1, a, b) << endl;
    }

    delete[] tree;
    delete[] arr;

    return 0;
}
