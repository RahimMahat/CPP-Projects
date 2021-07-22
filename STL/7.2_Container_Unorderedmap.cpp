#include<iostream>

#include<unordered_map> // unsorted,key_value,no duplicate
// (unordered associative container)

using namespace std;

int main()
{
    // declaration
    unordered_map<int,float>um1;

    // init.
    unordered_map<int,float>um2 = { {101,10.1f},{201,20.1f},{301,30.1f} };

    // check
    unordered_map<int,float>::iterator i = um2.begin();
    for (i;i !=um2.end();i++)
    {
        cout << i->first << " ";
        cout << i->second << endl;
    }
    cout << endl;

    // alter
    um2[301] = 30.0f;

    cout << "Value at [201] " << um2.at(301) << endl;
    cout << "Value at [201] " << um2[301] << endl << endl;

    // insert
    um2.insert(pair<int,float>(401,40.1));
    um2.insert(make_pair(404,40.4));
    // check
    unordered_map<int,float>::iterator j = um2.begin();
    for (j;j !=um2.end();j++)
    {
        cout << j->first << " ";
        cout << j->second << endl;
    }
    cout << endl;

    // erase
     unordered_map<int,float>::iterator del = um2.begin();
     um2.erase(del);
     // check
    unordered_map<int,float>::iterator k = um2.begin();
    for (k;k !=um2.end();k++)
    {
        cout << k->first << " ";
        cout << k->second << endl;
    }
    cout << endl;

    // clear() will clear the map
    // count will return 1
    // size() will give you size of map
    return 0;
}
