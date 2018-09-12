//TODO: main method goes here

#include <iostream>
#include "range.h"
using namespace std;

int main()
{
    stack<int>  s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    return 0;
}
