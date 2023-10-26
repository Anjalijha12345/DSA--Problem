#include <iostream>
using namespace std;

bool orthogonal_array(float arr[][3])
{
    float transpose[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            transpose[i][j] = arr[j][i];
    }
    float product[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            float sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum = sum + (arr[i][k] * arr[j][k]);
            }

            product[i][j] = sum;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i != j && product[i][j] != 0)
                return false;
            if (i == j && product[i][j] != 1)
                return false;
        }
    }

    return true;
}

int main()
{
    float arr[3][3];
    float numerator, denominator;

    cout << "\nEnter the numerator and denominator of multiplier : ";
    cin >> numerator >> denominator;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the value for element (" << i + 1 << " , " << j + 1 << ") : ";
            cin >> arr[i][j];
            arr[i][j] = (numerator/denominator)*arr[i][j];
        }
    }
    if (orthogonal_array(arr) == 1)
    {
        cout << "Yes ,The given matrix is orthogonal " << endl;
    }

    else
    {
        cout << "No ,The given matrix is not orthogonal " << endl;
    }

    return 0;
}
