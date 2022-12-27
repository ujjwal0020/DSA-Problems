/*
	Insertion Sort Algorithm
	**Time Complexity: Worst case:O(n^2)
					   Best case: O(n)
					   Average case: O(nlogn)
	**Space Complexity: O(1) //no additional space is required
*/
#include <bits/stdc++.h>
using namespace std;

//a function that will print the vector passed to it, elements seprated by space
void printVector(vector<int>A)
{
	//traverse all the element and print them
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}

//the vector A will be sorted inplace and that's why passed with refrence
void sort(vector<int>&A)
{
	//write the code for insertion sort
		//iterate through all the elements of the array
	for(int i=1;i<A.size();i++)
	{
		//store the current element being processed in a variable called key
		int key = A[i];
		
		//j will be used to compare the key with the elements on its left
		int j = i-1;
		
		//while the key is smaller than the element on its left and j is greater than or equal to 0, keep shifting the element to the right
		while(j >= 0 && A[j] > key)
		{
			A[j+1] = A[j];
			j--;
		}
		
		//insert the key at the appropriate position
		A[j+1] = key;
	}
}

int main() {
	vector<int>A= {6,1,2,3,4,6,1};
	// your code goes here
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
	
	return 0;
}
