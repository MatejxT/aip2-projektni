#include<string.h>
#include<string>
#include<time.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


void stvaranjemina(); //stvara mine na početku igre
void igra();  //početak igre
void ispisp();  //ispisuje polje

struct podacIgre
{
    int ploca[7][7];
    char imeIgrac[50];
    double vrijeme;
};
int main()
{
    while(1)
    {
        cout << "1. Pokreni igru" << endl;
        cout << "2. Pravila igre" << endl;
        cout << "3. Leaderboard" << endl;
        cout << "4. Ucitaj igru" << endl;
        cout << "5. "
    }
    return 0;
}

void stvaranjemina()
{
    srand(time(NULL));
    int brojac=0;


    int i rand()%10;
    int j rand()%10;
