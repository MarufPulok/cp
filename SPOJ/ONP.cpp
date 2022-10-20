#include<bits/stdc++.h>
using namespace std;

int top = -1;
int endQueue = -1;

char stk[510];
char que[510];

int pref(char a) {
    switch (a) {
        case '+':
        case '-': return 1;
        break;
        case '*':
        case '/': return 2;
        break;
        case '^': return 3;
        break;

        default: return 0;
    }
}

void push(char a) {
    if (top < 0)
        top = 0;
    stk[++top] = a;
}

char pop() {
    char temp = stk[top];
    top--;
    return temp;
}

void enqueue(char a) {
    if (endQueue < 0)
        endQueue = 0;
    que[++endQueue] = a;
}

char topElement() {
    if (top > -1)
    return stk[top];
    else
    return '0';
}

void clear() {
    top = -1;
    endQueue = -1;
}

int main() {
    int t;
    char temp;
    char exp[500];
    cin>>t;
    while (t--) {
        cin>>exp;
        for (int i=0; exp[i]!='\0'; i++) {
            if (exp[i]>='a'&&exp[i]<='z') {
                enqueue(exp[i]);
            } else {
                if (exp[i] == ')') {
                    while (top >-1) {
                        temp = pop();
                        if (temp == '(')
                        break;
                        else
                        enqueue(temp);
                    }
                } else {
                    while (exp[i] != '(' && top > -1 && pref(topElement())>pref(exp[i])) {
                        char popped = pop();
                        enqueue(popped);
                    } 
                    push(exp[i]);
                }
            }
        }

        while (top >-1) {
            enqueue(pop());
        }
        for (int j=0; j<=endQueue; j++) {
            cout<<que[j];
        }
        cout<<endl;
        clear();
    }

    return 0;
}
