#include<iostream>
#include<set>               // sorted, unique objects
// (Associative container)  // R_B tree removes duplicates

using namespace std;

int main()
{
    //declaration
    set<int>s1 = {10,20,30,10,40,50,30};

    // check
    for (set<int>::iterator i = s1.begin(); i!= s1.end() ; i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // insert
    s1.insert(70);
    s1.insert(80);
    s1.insert(90);
    //chekc
    for (set<int>::iterator i = s1.begin(); i!= s1.end() ; i++)
    {
        cout << *i << " ";
    }
    cout << endl;




    return 0;
}
