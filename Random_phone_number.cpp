// Temurbek Yorkulov

// 04.02.2022

/* Random orqali Telefon raqamlarni chiqarish */

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int n;

int asab_two(int n)
{
      srand(time(0));
      cout << time(0);
      system("cls");
      for (int f = 1; f <= n; f++)
      {
      {

     {
      int t;
      for(int i = 1; i < 2 ; i++)
      {
      t = (rand() % 10);
      int a=998;
      cout << a;
      switch(t)
      {
            case 1: cout << t + 87 ; break;
            case 2: cout << t + 88 ; break;
            case 3: cout << t + 88 ; break;
            case 4: cout << t + 89 ; break;
            case 5: cout << t + 89 ; break;
            case 6: cout << t + 93 ; break;
            case 7: cout << t + 91 ; break;
            case 8: cout << t + 86 ; break;
            case 9: cout << t + 90 ; break;
            default: cout << t + 91 ; break;
      }

      }
}

     {

      for(int i = 1; i < 2 ; i++)
      {

      int b;
  for(int i = 1; i <= 7; i++)
      {
            b = (rand() % 10);
            cout << b;
      }
      }
      cout << endl;
}}}}

int asab_three()
{
    cout << "Gold raqamlarni olishni hohlaysizmi?" << endl;
    cout << "// Javoblar Ha uchun 1:  Yo'q uchun 2:" << endl;
    int Answer;
    cin >> Answer;
    if (Answer == 1)
    {
    srand(time(NULL));

    int n;
    cout << "Nechta raqam olishni hohlaysiz: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {

    int d_k = 998;
    int num_k[8] = {33, 88, 90, 91, 93, 94, 97, 99};
    int num_o[11] = {111, 222, 333, 444, 555, 666, 777, 888, 999, 404, 707};
    //int num_t = 0;
    //int num_t2 = 0;
    // int num_t = rand() % 88 + 12;
    int num_th[9] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    cout << d_k << num_k[rand() % 8] << num_o[rand() % 11]  << "00" << num_th[rand() % 9] << endl;

    }

    return 0;
    }
    else
        system("cls");

    return 0;
}



int main (){{
      int n;
      cout << "Telefon raqamni random orqali chiqarish: " << endl;
      cout << "Nechta telefon raqam olishni istaysiz kiriting: ";
      cin >> n;
      cout << asab_two(n) << endl;
            }
      asab_three();

      return 0;
}
