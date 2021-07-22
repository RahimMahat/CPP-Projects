#include<iostream>
#include<stack>     // (LIFO)
// (Adaptor container)

using namespace std;

int main()
{
    // declaration
    stack<int> stk1;

    // push value
    stk1.push(10);
    stk1.push(20);
    stk1.push(30);

    // top
    cout << "top element : " << stk1.top() << endl;

    // pop
    stk1.pop();
    cout << "new top : " << stk1.top() << endl;

    // size
    cout << "No of element : " << stk1.size() << endl;

    return 0;
}
