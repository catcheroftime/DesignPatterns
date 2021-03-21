#include "abstractexpression.h"

int main()
{
    TerminalExpression a;
    string context = "1 1 | 3 1/8 | 4 1/2";

    list<string> split_result = split(context, "|");
    for ( auto text : split_result)
        cout << a.Interpret(text) << " ";

    return 0;
}
