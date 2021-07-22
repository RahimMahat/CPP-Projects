#include<iostream>
#include<string>
#include<map>       // key-value pair, sorted
// (Associative container)

using namespace std;

int main()
{
    // declaration
    std::map<int,string> m1;

    // initialization
    std::map<int, string> m2 = { {101,"Harvey"},{201,"Louis"},{301,"Jessica"} };

    // methods

    // insert
    m2[201] = "Donna";
    // check
    for ( map<int,string>::iterator i = m2.begin(); i!=m2.end(); i++)
    {
        cout << i->first << " ";     // for printing map key

        cout << i->second << endl;  // for printing value
    }
    cout << endl;

    // at
    cout << "Value at 101 " << m2.at(101) << endl;      // safe with out of bound

    // []
    cout << "Value at 201 " << m2[201] << endl;         // unsafe

    // change with at
    m2.at(201) = "Spector";
    cout << "Value at 201 after changing " << m2.at(201) << endl;
    cout << endl;

    // insert - two ways:
    m2.insert(pair<int,string>(300,"Mark"));
    m2.insert(make_pair(400, "Rachel"));

    // check
    for (map<int,string>::iterator i=m2.begin();i!=m2.end();i++)
    {
        cout << i->first << " ";         // key
        cout << i->second << endl;      // value
    }
    cout << endl;

    // erase
    map<int,string>::iterator i = m2.begin();
    m2.erase(i);
    // check
    for (map<int,string>::iterator i=m2.begin();i!=m2.end();i++)
    {
        cout << i->first << " ";         // key
        cout << i->second << endl;      // value
    }

    return 0;
}
