//Matrix transposition.

#include <iostream>

using namespace std;

void ganerate_Arr(int** Mas, int &size_m);
void transposition_Arr(int** Mas, int** Trans_Mas, int &size_m);
void show_Arr(int** Mas, int** TransMas, int &size_m);

int main()
{
    int size_m = 3;
    int** Mas = new int* [size_m];
    int** TransMas = new int* [size_m];

    ganerate_Arr(Mas, size_m);
    transposition_Arr(Mas, TransMas, size_m);
    show_Arr(Mas, TransMas, size_m);
}

void ganerate_Arr(int** Mas, int &size_m)//Genereate Array
{
    int cont = 1;
    for (int i = 0; i < size_m; i++)
    {
        Mas[i] = new int[size_m];
    }

    for (int i = 0; i < size_m; i++)
    {
        for (int j = 0; j < size_m; j++)
        {

            Mas[i][j] = cont++;
        }
    }
}

void transposition_Arr(int** Mas, int** TransMas, int &size_m)//Transposition Array
{
    for (int i = 0; i < size_m; i++)
    {
        TransMas[i] = new int[size_m];
    }

    for (int i = 0; i < size_m; i++)
    {
        for (int j = 0; j < size_m; j++)
        {
            TransMas[i][j] = Mas[j][i];
        }
    }
}

void show_Arr(int** Mas, int** TransMas, int &size_m)//Show Array
{
    for (int i = 0; i < size_m; i++)
    {
        for (int j = 0; j < size_m; j++)
        {
            cout << Mas[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    for (int i = 0; i < size_m; i++)
    {
        for (int j = 0; j < size_m; j++)
        {
            cout << TransMas[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}