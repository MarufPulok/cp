#include<bits/stdc++.h>
using namespace std;

string infixToPostfix (stack<char> stack, string infix)
{
    string postfix;
    for (int i = 0; i < infix.length(); i++)
    {
        if (infix[i] >= 'a' && infix[i] <= 'z')
        {
            postfix += infix[i];
        }
        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/')
        {
            while (!stack.empty() && stack.top() != '(' && (infix[i] == '*' || infix[i] == '/'))
            {
                postfix += stack.top();
                stack.pop();
            }
            stack.push(infix[i]);
        }
        else if (infix[i] == '(')
        {
            stack.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (!stack.empty() && stack.top() != '(')
            {
                postfix += stack.top();
                stack.pop();
            }
            stack.pop();
        }
    }
    return postfix;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string infix_exp;
        cin>>infix_exp;
        stack<char>s;
        
        cout<<infixToPostfix(s, infix_exp)<<endl;
    }
}