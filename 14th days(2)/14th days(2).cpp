#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int const ROW = 25;
    int const COS = 30;

    int arr[ROW][COS];
    bool alreadyThere;

    for (int i = 0; i < ROW; i++)
    {
        alreadyThere = false;
        for (int j = 0; j < COS;)
        {
            int number = rand() % 100;
            for (int h = 0; h < j; h++)
            {
                
                if (arr[i][j] == number)
                {
                    alreadyThere = true;
                    break;
                }
            }
            if (alreadyThere == false)
            {
                arr[i][j] = number;
                j++;
            }
        }
    }
    for (int h = 0; h < ROW; h++)
    {
        for (int i = 0; i < COS; i++)
        {
            cout << arr[h][i] << " ";
        }
        cout << endl;
    }
}