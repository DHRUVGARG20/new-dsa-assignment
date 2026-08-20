//		Q. 4 Implement the logic to 
//		        a. Reverse the elements of an array 
//				b. Find the matrix multiplication 
//				c. Find the Transpose of a Matrix 

#include <iostream>
using namespace std;

int main() 
{
    //a) to reverse the elements of the array
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Reversed Array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // b) Matrix Multiplication
    int r1, c1, r2, c2;
    cout << "\nEnter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) 
	{
        cout << "Matrix multiplication not possible (c1 != r2).\n";
    } else 
	{
        int A[10][10], B[10][10], C[10][10] = {0};

        cout << "Enter elements of first matrix:\n";
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c1; j++)
                cin >> A[i][j];

        cout << "Enter elements of second matrix:\n";
        for (int i = 0; i < r2; i++)
            for (int j = 0; j < c2; j++)
                cin >> B[i][j];
        for (int i = 0; i < r1; i++) 
		{
            for (int j = 0; j < c2; j++) 
			{
                C[i][j] = 0;
                for (int k = 0; k < c1; k++) 
				{
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        cout << "Resultant Matrix after Multiplication:\n";
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }

    // c) Transpose of a Matrix
    int r, c;
    cout << "\nEnter rows and columns of matrix for transpose: ";
    cin >> r >> c;
    int M[10][10], T[10][10];
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> M[i][j];
            
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            T[j][i] = M[i][j];

    cout << "Transpose of Matrix:\n";
    for (int i = 0; i < c; i++) 
	{
        for (int j = 0; j < r; j++) 
		{
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


