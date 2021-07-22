#include<iostream>
#include<list>                      // including header
// (Sequence container)

using namespace std;

int main()
{
    // declaration
    std::list<int>lst1;

    // Initialization
    std::list<int>lst2 = {1,2,3};

    // methods

    list<int>::iterator i = lst2.begin();

    // insert
    lst2.insert(i, 0);

    for (i = lst2.begin(); i != lst2.end(); i++)
    {
        cout << *i << " ";      // for printing the list
    }

    // push back
    lst2.push_back(58);     // insert ele at end

    // push front
    lst2.push_front(38);    // insert ele at end

    // pop back
    lst2.pop_back();         // remove ele at end

    // pop front
    lst2.pop_front();       // remove ele at front

    // reverse
    lst2.reverse();         // reverse the list

    // swap
    lst2.swap(lst1);

    // size - no of ele in the list
    lst2.size();

    // sort
    lst2.sort();

    // merge - it'll merge two lists
    lst1.merge(lst2);

    return 0;
}
