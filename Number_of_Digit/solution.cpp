#include <bits/stdc++.h> 
int countDigit(long long x) {
    // Write your code here.

    // 1st Way
    // if (x==0) return 1;

    // int counts = 0;

    // while(x>0)
    // {
    //     x = x/10;
    //     counts++;
    // }

    // 2nd Way
    int cnt = (int)(log10(x) + 1);

    return cnt;
}