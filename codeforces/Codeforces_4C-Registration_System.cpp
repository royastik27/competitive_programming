/**
 * Codeforces Beta Round #4 (Div. 2 Only)
 * Problem C - Registration system
 * Time: 998 ms
 * AUTHOR: Astik Roy
**/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    string str;
    map <string, int> m;

    cin >> n;

    while(n--) {
        cin >> str;

        if(m[str]) {
            ++m[str];
            str += to_string(m[str]-1);
            cout << str << '\n';
        }
        else {
            m[str] = 1;
            cout << "OK\n";
        }
    }

    m.clear();

    return 0;
}
