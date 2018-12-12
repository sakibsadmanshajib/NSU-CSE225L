#include <iostream>
#include <string>
#include "StackType.cpp"

using namespace std;

int main()
{
    StackType <int> st;

    if( st.IsEmpty())
        cout << "Stack is Empty." << endl;
    else
        cout << "Stack is not Empty." << endl;

    cout << "Enter four items: " << endl;

    int temp;
    for(int i=0; i<4; i++)
    {
        cin >> temp;
        st.Push(temp);
    }

    if( st.IsEmpty())
        cout << "Stack is Empty." << endl;
    else
        cout << "Stack is not Empty." << endl;

    if( st.IsFull())
        cout << "Stack is Full." << endl;
    else
        cout << "Stack is not Full." << endl;

    StackType <int> st2;

    while (!(st.IsEmpty()))
    {
        st2.Push(st.Top());
        st.Pop();
    }

    while (!(st2.IsEmpty()))
    {
        temp = st2.Top();
        cout << temp << " ";
        st.Push(temp);
        st2.Pop();
    }

    cout << endl << "Enter a new item: " << endl;

    cin >> temp;
    st.Push(temp);

    while (!(st.IsEmpty()))
    {
        st2.Push(st.Top());
        st.Pop();
    }

    while (!(st2.IsEmpty()))
    {
        temp = st2.Top();
        cout << temp << " ";
        st.Push(temp);
        st2.Pop();
    }

    cout << endl;

    if( st.IsFull())
        cout << "Stack is Full." << endl;
    else
        cout << "Stack is not Full." << endl;

    st.Pop();
    st.Pop();
    temp = st.Top();
    cout << temp << endl;

    cout << "Enter a few parentheses '(' or ')' to check if it is balanced or not: " << endl;

    StackType <char> par;
    string str;
    cin >> str;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '(')
            par.Push(str[i]);
        else if(str[i] == ')')
        {
            if(par.IsEmpty())
            {
                cout << "Not Balanced" << endl;
                return 0;
            }
            else
                par.Pop();
        }
        else
            cout << "Invalid Input" <<endl;
    }
    if(par.IsEmpty())
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;


}
