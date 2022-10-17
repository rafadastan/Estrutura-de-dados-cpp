#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <stack>
#include <string>

using namespace std;


/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isBalanced(string s) {

    stack<char> stacks;
    int flag = 0;

    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
            case '(':
                stacks.push(s[i]);
                break;

            case '[':
                stacks.push(s[i]);    
                break;

            case '{':
                stacks.push(s[i]);
                break;

            case ')':
                if(stacks.empty() == 0 && stacks.top() == '(')
                {
                    flag++;
                    stacks.pop();
                }                     
                break;

            case ']':
                if(stacks.empty() == 0 && stacks.top() != '[')
                {
                    flag++;
                    stacks.pop();
                }
                break;

            case '}':
                if(stacks.empty() == 0 && stacks.top() == '{') 
                {
                    flag++;
                    stacks.pop();
                }
                break;   
        }
    }

    string ResultYes = "YES";
    string ResultNo = "NO";

    if(flag == s.size()/2 && s.size()%2 == 0)
    {
        return ResultYes;
    }else{
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