# include <bits/stdc++.h>
using namespace std;

vector<int> v = {1, 2, 3, 4, 5};

void printV(vector<int> v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << "\n";
}

void makePermutation(int n, int r, int depth) {
    if (r == depth) {
        printV(v);
        return;
    }
    for (int i = depth; i < n; i++) {
        swap(v[depth], v[i]);
        makePermutation(n, r, depth + 1);
        swap(v[depth], v[i]);
    }
    return;
}

int main() {
    makePermutation(v.size(), 3, 0);
    return 0;
}
