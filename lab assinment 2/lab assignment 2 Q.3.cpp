// Q. 3 Design the Logic to Find a Missing Number in a Sorted Array. Given an array of n-1 distinct integers in the range of 1 to n, find the missing number in it in a Sorted Array 
//(a) Linear time 
//(b) Using binary search. 

#include <iostream>
using namespace std;

int findMissing(int arr[], int n)
{
    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    return total - sum;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;

    cout << "Missing number = " << findMissing(arr, n);

    return 0;
}

// (b) using binary search

#include <iostream>
using namespace std;

int findMissing(int arr[], int n)
{
    int low = 0;
    int high = n - 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == mid + 1)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low + 1;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;

    cout << "Missing number = " << findMissing(arr, n);

    return 0;
}





