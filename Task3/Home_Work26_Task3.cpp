//Phone_Contact.

#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

void CreateArr(string** Phone, int& rows, int& cols);
void LinSear(string** Phone, int& rows, int& cols);
void ShowArr(string** Phone, int& rows, int& cols);

int main()
{
    int rows = 2;
    int cols = 2;
    string** Phone = new string* [rows];

    CreateArr(Phone, rows, cols);
    LinSear(Phone, rows, cols);
    ShowArr(Phone, rows, cols);
}

void CreateArr(string** Phone, int& rows, int& cols)
{
    for (int i = 0; i < rows; i++)
    {
        Phone[i] = new string[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter name: " << endl;
            cin >> Phone[i][j];
            j++;
            cout << "Enter phone number: " << endl;
            cin >> Phone[i][j];
        }
    }
}

void LinSear(string** Phone, int& rows, int& cols)
{
    string sear;
    cout << "Enter search name: ";
    cin >> sear;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (sear == Phone[i][j])
            {
                cout << endl << "Yes" << endl;
            }
        }
    }
}

void ShowArr(string **Phone, int &rows, int &cols)
{
    cout << endl << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << Phone[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}
