// Matrix Multiplication

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the rows of 1st Matrix: ";
    cin >> n;
    int m;
    cout << "Enter the columns of 1st Matrix: ";
    cin >> m;

    int p;
    cout << "Enter the rows for 2nd Matrix: ";
    cin >> p;
    int q;
    cout << "Enter the columns of 2nd Matrix: ";
    cin >> q;

    if (m == p)
    {
        int matrix1[n][m];
        cout << "Enter elements of Matrix1 : " << endl;
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                cin>>matrix1[i][j];
            }
        }

        int matrix2[p][q];
        cout << "Enter elements of Matrix2 : " << endl;
        for (int i = 0; i < p; i++){
            for (int j = 0; j < q; j++){
                cin >> matrix2[i][j];
            }
        }

        // 3rd Matrix
        int matrix3[n][q];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < q; j++){
                matrix3[i][j] = 0;
                for (int k = 0; k < m; k++){
                    matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        cout << endl;

        cout << "Matrix Multiplication is :" << endl;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < q; j++){
                cout << matrix3[i][j] << " ";
            }
            cout << endl;
        }
    } else{
        cout << "the Matrices cannot be multiplied :(";
    }
}