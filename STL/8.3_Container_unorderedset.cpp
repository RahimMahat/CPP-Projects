#include<iostream>
#include<unordered_set> // unsorted, unique objects
// (unordered associative container)
using namespace std;

int main()
{
    //declaration
    unordered_set<int>us1 = {100,10,20,30,10,40,50};

    // check
    for (unordered_set<int>::iterator i = us1.begin(); i!= us1.end() ; i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // insert
    us1.insert(7);
    us1.insert(86);
    us1.insert(19);
    //chekc
    for (unordered_set<int>::iterator i = us1.begin(); i!= us1.end() ; i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // erase  3 ways
    unordered_set<int>::iterator k = us1.begin();
    us1.erase(k);   //iterator
    us1.erase(19);   // value
    //ms1.erase(ms1.begin, ms1.find(2)); // range,   till_find_value_2

    //chekc
    for (unordered_set<int>::iterator j = us1.begin(); j!= us1.end() ; j++)
    {
        cout << *j << " ";
    }
    cout << endl;

    // size
    cout << "Size " << us1.size() << endl;

}
