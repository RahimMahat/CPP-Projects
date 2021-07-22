#include<iostream>
#include<queue>     // (FIFO)
// (Adaptor container)

using namespace std;

int main()
{
    // Declaration
    queue<int> Q1;

    //push value
    Q1.push(10);
    Q1.push(20);
    Q1.push(30);

    // front
    cout << "front element : " << Q1.front() << endl;

    // back
    cout << "back element : " << Q1.back() << endl;

    // pop
    Q1.pop();
    cout << "new front element after pop : " << Q1.front() << endl;

    // size
    cout << "size : " << Q1.size() << endl;

    return 0;
}
