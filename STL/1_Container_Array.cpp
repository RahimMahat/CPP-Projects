#include<iostream>
#include<array>                 // including array header
// (Sequence Container)

using namespace std;

int main()
{
    // array declaration
    std::array<int, 5> arr1;

    // array initialization
    std::array<int, 7> arr2 = {10,20,30,40,50};

    // methods
    cout << "At " << arr2.at(2) << endl;            // out of bound safe

    cout << "[] " << arr2[2] << endl;               // out of bound unsafe

    cout << "front() " << arr2.front() << endl;     // return 1st element

    cout << "back() " << arr2.back() << endl;       // return last element

    arr2.fill(0);                                   // fill array with 0

    //arr1.swap(arr2);                                // swap arrays

    arr1.empty();                                   // empty the array

    cout << "size() " << arr2.size() << endl;       // size of array filled

    cout << "max_size() " << arr2.max_size() << endl; // max size of array

    return 0;
}
