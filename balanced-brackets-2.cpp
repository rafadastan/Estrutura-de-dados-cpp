#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

string isBalanced(string s) {

    stack<char> stacks;
    int flag = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if((s[i]=='(') || (s[i]=='{') || (s[i]=='['))
        {
            stacks.push(s[i]);
        }
           
        if(stacks.empty() == 0)
        {
            if(s[i]==')' && stacks.top()=='(')
            {
                flag++;
                stacks.pop();
            }

            if(s[i]=='}' && stacks.top()=='{')
            {
                flag++;
                stacks.pop();
            }
            if(s[i]==']' && stacks.top()=='[')
            {
                flag++;
                stacks.pop();
            }
        }
    }

    string ResultYes = "YES";
    string ResultNo = "NO";

    if(flag== s.size()/2 && s.size()%2==0)
    {
        return ResultYes;
    }
    else
    {
        return ResultNo;
    }
}

int main()
{
    int values = 0;
    cin >> values;

    while(values) {
        string s;
        
        cin >> s;

        string result = isBalanced(s);

        cout << result << "\n";

        values --;
    }

    return 0;
}