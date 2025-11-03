#include <bits/stdc++.h>
using namespace std;

int precedence(char p) {
    if (p == '^') return 3;
    if (p == '*' || p == '/') return 2;
    if (p == '+' || p == '-') return 1;
    return -1;
}

string intopos(string infix) {
    stack<char> st;
    string postfix;
    st.push('(');

    for (char v : infix) 
    {
        if (isalnum(v)) 
        {
            postfix += v;
        }
        else if (v == '(')
        {
            st.push(v);
        } 
        else if (v == ')') 
        {
            while (!st.empty() && st.top() != '(') 
            {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && precedence(st.top()) >= precedence(v)) 
            {
                postfix += st.top();
                st.pop();
            }
            st.push(v);
        }
    }

    return postfix;
}

int main()
{
    string infix;
    getline(cin, infix);
    infix.push_back(')');
    cout << intopos(infix) << endl;
    return 0;
}
