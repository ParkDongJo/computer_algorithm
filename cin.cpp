#include <bits/stdc++.h>
using namespace std;

// alias 를 사용하여 int 를 i 로 대체
typedef int i;

string input1;
string input2;
string input3;

void input_1() {
    cin >> input1;
    cout << input1 << "\n";
}
void input_2() {
    scanf("%c", &input2);
    cout << input2 << "\n";
}

void input_3() {
    getline(cin, input3, '!');
     cout << input3 << "\n";
}

int main() {
    i a = 1;
    input_1();
    input_2();
    input_3();
    return 0;
}
