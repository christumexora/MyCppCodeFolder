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

/*
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
} */


//  MERGE 2 ARRAYS AND SORT THEM

int main(){
    std::vector<int> arr1 = {1, 3, 5};
    std::vector<int> arr2 = {2, 4, 6};

    // Merge the two vectors
    vector<int> mergedArr = arr1;
    mergedArr.insert(mergedArr.end(), arr2.begin(), arr2.end());

    // Sort the merged vector
    sort(mergedArr.begin(), mergedArr.end());

    // Print the sorted merged array
    for(int c : mergedArr){
        cout << c;
    }
    return 0;
}