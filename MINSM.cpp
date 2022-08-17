
/*
Problem
You are given a binary string S = S_1S_2 \ldots S_NS=S 
1
?
 S 
2
?
 …S 
N
?
  of length NN. You are also given an integer KK. You can do the following operation at most N-K+1N-K+1 times:

First, choose a substring S_iS_{i+1} \ldots S_{i+K-1}S 
i
?
 S 
i+1
?
 …S 
i+K-1
?
  of SS of length exactly KK. This substring shouldn't have been chosen in any of the previous operations. That is, the same starting index of the substring can't be chosen twice.
Then, flip all the characters of the chosen substring (i.e. change every 00 to 11 and vice versa).
Find the lexicographically smallest string possible after the operations if you do them in an optimal way.

Note:

A substring is consecutive elements of a string. For eg. in the string "01011", "101" is a substring, but "111" is not a substring.
A string AA is lexicographically smaller than string BB, if A_i \lt B_iA 
i
?
 <B 
i
?
 , where ii is the first index where AA and BB differ.
Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first line of each test case contains two space-separated integers: NN, KK.
The second line of each test case contains the string SS.
Output Format
For each test case, output on a new line the lexicographically smallest string that you can achieve.
*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long 
int main() 
{
    ll T = 0;
    cin >> T;
    while(T--) {
        ll N = 0, ans = 0;
        cin >> N;
        vector<ll> vobj(N);
        for(int i = 0; i < N; i++){
            cin >> vobj[i];
            ans = __gcd(ans, vobj[i]);}
        cout << ans * N << endl;    }
    return 0;
}
