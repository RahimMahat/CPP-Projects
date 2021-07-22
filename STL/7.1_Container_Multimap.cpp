#include<iostream>
#include<string>
#include<map>           // sorted,allow duplicate keys, key_value pair
// (Associative container)

using namespace std;

int main()
{
    // declaration
    multimap<int,string>mm1;

    // Init.
    multimap<int,string> mm2 = { {101,"Bran"},{201,"john"},{201,"Danaeris"} };

    multimap<int,string>::iterator i = mm2.begin();
    // check
    for (i; i!= mm2.end(); i++)
    {
        cout << i->first << " ";
        cout << i->second << endl;
    }
    cout << endl;

    // can't alter

    // insert
    mm2.insert(pair<int,string>(301,"Tyrion"));
    mm2.insert(make_pair(302,"Jaimee"));
    // check
    for (multimap<int,string>::iterator i = mm2.begin(); i!= mm2.end(); i++)
    {
        cout << i->first << " ";
        cout << i->second << endl;
    }
    cout << endl;


    // erase()
    multimap<int,string>::iterator del = mm2.begin();
    mm2.erase(del);
    //check
    for (multimap<int,string>::iterator j = mm2.begin(); j!= mm2.end(); j++)
    {
        cout << j->first << " ";
        cout << j->second << endl;
    }
    cout << endl;


    // count
    cout << "Count no of 2012 : " << mm2.count(201) << endl;

    // size
    cout << "No of elements : " << mm2.size() << endl;

    return 0;
}
