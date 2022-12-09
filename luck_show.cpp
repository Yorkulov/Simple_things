#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#define _DEFAULT_SOURCE

using namespace std;

int code_func(){
    return rand() % 10;
}

void fracSleep(float sec) {
    struct timespec ts;
    ts.tv_sec = (int) sec;
    ts.tv_nsec = (sec - ((int) sec)) * 1000000000;
    nanosleep(&ts,NULL);
}

string phone_number()
{
        int a = 0;
        string phone = "", code = "";
        char phone_number[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
        string code_number[10] = {"33", "88", "90", "91", "93", "94", "95", "97", "98", "99"};
        code = code_number[code_func()];
        phone += code;
        for(int i = 1; i <= 7; i++)
        {
            a = rand() % 10;
            phone += phone_number[a];
        }
        return phone;
}

float phone_time(float time, float s)
{
    float k = 0;
    if(time > s - 3) k = 0.5;
    else if(time > s - 4) k = 0.3;
    else if(time > s - 5) k = 0.1;
    else if(time > s - 6) k = 0.09;
    else if(time > s - 7) k = 0.08;

    return k;
}

void simple_user()
{
    float answer = 0;
    while(true)
    {
        answer += 0.05 + phone_time(answer, 10);

        if(int(answer) == 10)
        {
            cout << phone_number() << endl;
            break;
        }
        else
        {
            cout << phone_number() << endl;
            fracSleep(0.05 + phone_time(answer, 10));
            system("cls");
        }
    }
}

void admin_user()
{
    string number;
    cout << "Telefon raqamni kiriting: ";
    cin >> number;
    int s;
    cout << "Davomiylikni kiriting: ";
    cin >> s;
    float answer = 0, k = 0.04;
    while (true)
    {
        answer += 0.04 + phone_time(answer, s);

        if(answer >= s)
        {
            cout << number << endl;
            break;
        }
        else
        {
            cout << phone_number() << endl;
            fracSleep(k + phone_time(answer, s));
            system("cls");
        }
    }
}

void tests()
{
    string admin_login, admin_password;
     cout << "Login: "; cin >> admin_login;
     cout << "Password: "; cin >> admin_password;
     if(admin_login == "Temur" && admin_password == "1904122017020410")
     {
            admin_user();
     }
     else
        cout << "Login yoki Parol noto'g'ri\nQaytadan o'rinib ko'ring!\n";
}

int main(){
    r:
    int key = 1;
    //cout << "Omad Shouga Xush kelibsiz!!!" << endl;
    cout << "Random dasturini ishga tushirish!" << endl;
    while(true)
    {
        cout << "Foydalanuvchi turini tanlang(foydalanuvchi - admin): ";
        string user;
        cin >> user;
        if(user.length() == 5)
        {
            if(key == 1)
            {
                tests();
                key += 6;
            }
            else
            {
                admin_user();
            }
        }
        else if(user.length() == 13)
        {
            cout << "Dasturni ishga tushirish uchun istalgan tugmani bosing! ";
            cin.get();
            cin.get();  
            simple_user();
            break;
        }
        else
            cout << "Iltimos qaytadan kiriting!" << endl;
    }
    system("pause");
    goto r;
    return 0;
}
