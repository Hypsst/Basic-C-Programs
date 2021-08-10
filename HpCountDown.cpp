#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int hp = 100;

    while (true)
    {
        hp -= 1;
        cout << hp << " \n";
        Sleep(3000);
    }//Done

}