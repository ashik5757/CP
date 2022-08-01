// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// arr: Store input array
// i: Stores current index of arr
// N: Stores length of arr
// K: Stores count of subsets
// nos: Stores count of feasible subsets formed
// v: Store K subsets of the given array

// Utility function to find all possible
// ways to split array into K subsets
void PartitionSub(int arr[], int i,
				int N, int K, int nos,
				vector<vector<int> >& v)
{

	// If count of elements in K subsets
	// are greater than or equal to N
	if (i >= N) {

		// If count of subsets
		// formed is equal to K
		if (nos == K) {

			// Print K subsets by splitting
			// array into K subsets
			for (int x = 0; x < v.size(); x++) {

				cout << "{ ";

				// Print current subset
				for (int y = 0; y < v[x].size(); y++) {
					cout << v[x][y];

					// If current element is the last
					// element of the subset
					if (y == v[x].size() - 1) {

						cout << " ";
					}

					// Otherwise
					else {

						cout << ", ";
					}
				}

				if (x == v.size() - 1) {

					cout << "}";
				}
				else {

					cout << "}, ";
				}
			}
			cout << endl;
		}

		return;
	}

	for (int j = 0; j < K; j++) {

		// If any subset is occupied,
		// then push the element
		// in that first
		if (v[j].size() > 0) {
			v[j].push_back(arr[i]);

			// Recursively do the same
			// for remaining elements
			PartitionSub(arr, i + 1, N, K, nos, v);

			// Backtrack
			v[j].pop_back();
		}

		// Otherwise, push it in an empty
		// subset and increase the
		// subset count by 1
		else {

			v[j].push_back(arr[i]);
			PartitionSub(arr, i + 1, N, K, nos + 1, v);
			v[j].pop_back();

			// Break to avoid the case of going in
			// other empty subsets, if available,
			// and forming the same combination
			break;
		}
	}
}

// Function to to find all possible ways to
// split array into K subsets
void partKSubsets(int arr[], int N, int K)
{

	// Stores K subset by splitting array
	// into K subsets
	vector<vector<int> > v(K);

	// Size of each subset must
	// be less than the number of elements
	if (K == 0 || K > N) {

		cout << "Not Possible" << endl;
	}
	else {

		cout << "The Subset Combinations are: " << endl;
		PartitionSub(arr, 0, N, K, 0, v);
	}
}

// Driver Code
int main()
{

	// Given array
	int arr[] = { 1, 2, 3, 4, 5};

	// Given K
	int K = 2;

	// Size of the array
	int N = sizeof(arr) / sizeof(arr[0]);

	// Prints all possible
	// splits into subsets
	partKSubsets(arr, N, K);

    system("pause");
}
