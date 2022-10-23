//Project 2
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string str;
    stack<char> myStack;
    string temp;
    char ch;
    
    cout << "Enter a word or sentence: ";
    getline(cin,str);
    
    for(string::iterator it = str.begin(); it!=str.end(); ++it)
    {
        ch = *it;
        myStack.push(ch);
        cout << *it << " ";
    }
    
    cout << endl;
    for(string::iterator it = str.begin(); it!=str.end(); ++it)
    {
        ch = *it;
        temp = str.length();
        cout << myStack.top() << " ";
        myStack.pop();
        
}
for (int i = 0; i < str.length() / 2; i++) 
    {
        if (str[i] != str[str.length() - i - 1]) 
        {
            cout << "\nis not a palindrome";
            return false;
        }
    }
    cout << "\nis a palindrome";
    return true;
}
