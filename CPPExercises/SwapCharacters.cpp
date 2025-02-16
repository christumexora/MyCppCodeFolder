#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


// Swap first and Last Characters.

string test(string str)
{
if (str.length() > 1) {
        return str.substr(str.length() - 1) + str.substr(1, str.length() - 2) + str.substr(0, 1);
    } else {
        return str;
    }
}

int main(){
    cout << test("abcd") << endl;  // Output the result of test function with string "abcd"
    cout << test("a") << endl;     // Output the result of test function with string "a"
    cout << test("xy") << endl;
return 0;
}

