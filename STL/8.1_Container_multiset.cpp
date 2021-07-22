#include<iostream>
#include<set>       // ordered_set, allow_dupllicate
// (Associative container)

using namespace std;

int main()
{
    // declaration
    multiset<int>ms1 = {10,20,30,10,40,50,30};

    // check
    for (multiset<int>::iterator i = ms1.begin(); i!= ms1.end() ; i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // insert
    ms1.insert(72);
    ms1.insert(20);
    ms1.insert(95);
    //chekc
    for (multiset<int>::iterator i = ms1.begin(); i!= ms1.end() ; i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // erase  3 ways
    multiset<int>::iterator k = ms1.begin();
    ms1.erase(k);   //iterator
    ms1.erase(72);   // value
    //ms1.erase(ms1.begin, ms1.end()); // range,   delet all

    //chekc
    for (multiset<int>::iterator j = ms1.begin(); j!= ms1.end() ; j++)
    {
        cout << *j << " ";
    }
    cout << endl;

    // size
    cout << "size of set " << ms1.size() << endl;

    return 0;
}
