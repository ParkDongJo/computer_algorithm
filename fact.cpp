#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}
int fact1(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}
int fibo(int n) {
    if (n <= 1) return n;
    return fibo(n - 1) + fibo(n - 2);
}
int n = 5;

int main() {
    cout << fact(n) << "\n";
    cout << fibo(n) << "\n";
    return 0;
}
