#include<iostream>
#include<queue>               // FIFO     (max_heap, min_heap)
// (Adaptor container)

using namespace std;

int main()
{
    // Declaration
    priority_queue<int>pq1;

    // create a (min_heap)
    //priority_queue <int, vector<int> , greater<int> > pq1;


    // push value
    pq1.push(20);
    pq1.push(40);
    pq1.push(30);
    //20,40,30   - normal queue
    // 40,30,20  - will be arranged in descending order
    // 20,30,40  - min_heap will arrange in ascending order

    // top
    cout << "Top element : " << pq1.top() << endl;

    // pop
    pq1.pop();
    cout << "New top after pop : " << pq1.top() << endl;

    // size
    cout << "Size : " << pq1.size() << endl;

    // swap
    // pq1.swap(pq2);

    return 0;
}
