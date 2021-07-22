#include<iostream>
#include<vector>
#include<algorithm>     // including algorith header file

using namespace std;

int main()
{
    vector<int> myvec = {40,50,20,10,30};

    for (std::vector<int>::iterator i = myvec.begin(); i!= myvec.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // 1.Sort:
    // Sorting the vecotr in ascending order
    sort(myvec.begin(), myvec.end());   // providing range, begin-end
    cout << "Sorted Vector : " ;
    for (std::vector<int>::iterator j = myvec.begin(); j!= myvec.end(); j++)
    {
        cout << *j << " ";
    }
    cout << endl;

    // 2.Reverse
    reverse(myvec.begin(), myvec.end());   // providing range, begin-end
    cout << "Reversed Vector : " ;
    for (std::vector<int>::iterator k = myvec.begin(); k!= myvec.end(); k++)
    {
        cout << *k << " ";
    }
    cout << endl;

    // 3.Max ele
    cout << "Max " << *max_element(myvec.begin(), myvec.end()) << endl;

    // 4.Min ele
    cout << "Min " << *min_element(myvec.begin(), myvec.end()) << endl;

    // 5.Binary Search
    if (binary_search(myvec.begin(), myvec.end(), 99))
        cout << "Element Found " << endl;
    else
        cout << "Element not found " << endl;

    // 6.Count
    cout << "no of 20 : " << count(myvec.begin(),myvec.end(),20) << endl;

    //7.Copy
    //vector<int>vec2;
    //copy(myvec.begin(),myvec.end(), vec2);

    //8.Swap
    //swap(myvec,vec2);

    //Unique - returns unique dataset
    //vector<int>::iterator i;
    //i = unique(myvec.begin(), myvec.end())

    // There are many more if you want to check it out search cplusplus.com

    return 0;
}
