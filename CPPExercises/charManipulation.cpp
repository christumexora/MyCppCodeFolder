#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cout << "Please choose any word: ";
    cin >> str;

    char lastChar = str.back();
    vector<char> charVec(str.begin(), str.end());
    charVec.insert(charVec.begin(), lastChar);
    charVec.push_back(lastChar);

    for(char c : charVec){
        cout << c;
    }
   cout << endl;
    return 0;
}
