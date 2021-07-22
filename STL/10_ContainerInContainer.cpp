#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<map>

using namespace std;

int main()
{
    // 1. Vector inside Vector
    cout << "Vector inside Vector "<< endl;
    vector<int> myvec {40,50,20};

    vector<vector<int>> vec1 = {{1,2,3},
                                {4,5,6},    // vector in vector
                                {7,8,9} };

    // push back
    vec1.push_back(myvec);      // push ele at end of vector
    //check
    for (int i = 0; i < vec1.size(); i++)
    {
        for (int j = 0; j < vec1[i].size();j++)
        {
            cout << vec1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // pop back
    vec1[0].pop_back();
    vec1[1].pop_back();
    vec1[2].pop_back();
    vec1[3].pop_back();

    // check
    cout << "After pop_back ";
    for (int i = 0; i < vec1.size(); i++)
    {
        for (int j = 0; j < vec1[i].size();j++)
        {
            cout << vec1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    // 2. List inside List
    cout << "List inside List "<< endl;
    list<int> l = {5,6,7};
    list<list<int>> ll = {{1,2,3},{4,5,6}};

    // push back
    ll.push_back(l);

    // check
    list<list<int>>::iterator i = ll.begin();
    for (i; i!=ll.end();i++)
    {
        list<int> pi = *i;

        // inner iterator
        list<int>::iterator itr = pi.begin();
        //looping over inner list
        for (itr; itr !=pi.end();itr++)
        {
            cout << *itr << " ";
        }
    }
    cout << endl;
    cout << endl;


    // 3. Map inside Map
    cout << "Map inside Map " << endl;
    // map inside map
    map<int, map<int, int> > m;

    // inserting values
    map<int,int> temp;
    //
    temp.insert(make_pair(1,2));
    //
    m.insert(make_pair(0,temp));


    // check
    //oouter loop
    map<int, map<int,int> >::iterator oi;
    // inner loop
    map<int,int>::iterator ii;

    for (oi = m.begin();oi != m.end(); oi++)
    {
        for (ii = oi->second.begin(); ii != oi->second.end(); ii++)
        {
            cout << "Key 1: " << oi->first << endl;
            cout << "Key 2: " << ii->first << endl;
            cout << "Value : " << ii->second << endl;

        }
    }
    cout << endl;

    return 0;
}
