#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ch;
    getline(cin, ch);
    stringstream ss(ch);
    string word;
    vector<string> ans;
    stack<int> st; 
    while (ss >> word)
    {
        ans.push_back(word);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        if (isdigit(ans[i][0]) || (ans[i].size() > 1 && isdigit(ans[i][1])))
        {
            st.push(stoi(ans[i])); // convert string to int
        }
        else if (ans[i] == "+" || ans[i] == "-" || ans[i] == "*" || ans[i] == "/")
        {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            int result = 0;

            if (ans[i] == "+") result = a + b;
            else if (ans[i] == "-") result = a - b;
            else if (ans[i] == "*") result = a * b;
            else if (ans[i] == "/") result = a / b;

            st.push(result);
        }
    }

    cout << st.top() << endl;
    return 0;
}
