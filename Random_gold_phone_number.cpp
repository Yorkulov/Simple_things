// Temurbek Yorkulov

// 04.02.2022

/* Random orqali gold raqamlarni chiqarish */

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    cout << (time(NULL));
    system("cls");

    int n;
    cout << "Nechta raqam olishni hohlaysiz: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {

    int num_k[8] = {33, 88, 90, 91, 93, 94, 97, 99};
    int num_o[11] = {111, 222, 333, 444, 555, 666, 777, 888, 999, 404, 707};
    //int num_t = 0;
    //int num_t2 = 0;
    // int num_t = rand() % 88 + 12;
    int num_th[9] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    cout << "+998" << " " << num_k[rand() % 8] << " " << num_o[rand() % 11] << " " << "00" << num_th[rand() % 9] << " " << endl;

    }

    return 0;

}
