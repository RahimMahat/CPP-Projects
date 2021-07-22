#include<iostream>
#include<vector>                        // including header
// (Sequence container)

using namespace std;

int main()
{
    // Declaration
    std::vector<int> vec1;              // vector will assign address dynamically

    cout << "size " << vec1.size() << endl;

    // Initialization
    std::vector<int> vec2 = {12,23,34}; // so we can assign as many values as we can dynamically

    // methods

    cout << "at " << vec2.at(2) << endl;                        // out of bound safe

    cout << "[] " << vec2[2] << endl;                            // unsafe

    vec2.push_back(40);                 // inserting element at the end of the vector
    vec2.push_back(48);
    vec2.push_back(77);

    // Iterator is pointer to container

    for (vector<int>::iterator i = vec2.begin(); i!=vec2.end(); i++)
    {
        cout << *i << " ";      // for printing the vector
    }

    cout << endl;

    // pop out last element
    vec2.pop_back();

    // now lets check
    for (vector<int>::iterator i = vec2.begin(); i!= vec2.end();i++)
    {
        cout << *i << " ";
    }

    // insert- insert the element in vector before the position pointed
    // by iterator
    vector<int>::iterator i = vec2.begin();
    vec2.insert(i, 0);

    // erase- removes the element pointed by the iterator
    //vector<int>::iterator i = vec2.begin();
    vec2.erase(i);

    // erase all ele except last ele
    vec2.erase(vec2.begin(), vec2.end() - 1);

    // swap- interchange value of two vectors
    vec2.swap(vec1);

    // capacity- number of ele that can be inserted
    // in the vector based on the memory allocated to the vector
    cout << endl << "Capacity " << vec2.capacity() << endl;

    return 0;
}
