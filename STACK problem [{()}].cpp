#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string ch) {
    stack<char> ans;
    for(char v : ch) 
    {
        if(v == '(' || v == '{' || v == '[') {
            ans.push(v);
        } 
        else if(v == ')' || v == '}' || v == ']') {
            if(ans.empty()) return false;
            char top = ans.top();
            if((v == ')' && top != '(') ||
               (v == '}' && top != '{') ||
               (v == ']' && top != '[')) {
                return false;
            }
            ans.pop();
        }
    }
    return ans.empty();
}

int main() {
    string ch;
    cin >> ch;
    if(isBalanced(ch)) {
        cout << "Balanced\n";
    } else {
        cout << "Not Balanced\n";
    }
    return 0;
}
