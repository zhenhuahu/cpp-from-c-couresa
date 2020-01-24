// C++ program for suming numbers
// using inline function, vector, cout

#include<iostream>
#include<vector>

using namespace std;
const int N = 40;

inline void sum(int &p, int n, vector<int> d)
{
    p = 0;

    // sum all values in vector
    for (int x : d)
        p = p + x;
}

int main()
{
    int i;
    int accum = 0;
    vector<int> data;

    // initialize vector
    for (i = 0; i < N; i++)
		// Adds a new element at the end of the vector, after its current last element
        data.push_back(i);
	
    sum(accum, N, data);
    cout << "sum is " << accum << endl;

    return 0;
}
