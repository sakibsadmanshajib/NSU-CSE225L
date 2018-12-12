#include "StackType.cpp"

int main()
{
    StackType <char> infix;
    StackType <char> postfix;

    char temp;

    while (cin.peek() != '\n') {
        cin >> temp;
        infix.Push(temp);
    }

    

}