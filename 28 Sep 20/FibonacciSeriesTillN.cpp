#include<iostream>
#include <stdio.h>
using namespace std;
int main() {
    int i, n, a = 0, b = 1, nt;
    cout<<"enter the n th term"<<endl;
    cin>>n;
    for (i = 1; i <= n; ++i) {
        printf("%d, ", a);
        nt = a + b;
        a = b;
        b = nt;
    }

    return 0;
}
