#include <iostream>

using namespace std;


const int miejsca=10;
int l_zwierzat=10;

bool WolneMiejsce(int miejsca, int l_zwierzat)
{
    if (miejsca-l_zwierzat==0) return false;
    else return true;
}

class Zwierze
{
public:
    string rodzaj;
    string imie;
    int wiek;

    Zwierze(string r="BRAK", string i="BRAK", int w=0)
    {
        rodzaj = r;
        imie = i;
        wiek = w;
    }
    void DodajZwierze()
    {
        if (WolneMiejsce(miejsca,l_zwierzat))
        {
            cout << "Podaj rodzaj zwierzecia: ";
            cin >> rodzaj;
            cout << "Podaj imie zwierzecia: ";
            cin >> imie;
            cout << "Podaj wiek zwierzecia: ";
            cin >> wiek;
            l_zwierzat++;
            cout << "Zwierze zosta³o pomyœlnie dodane do bazy!";
        }
        else
        {
            cout << "Nie ma miejsca w schronisku! :( ";
        }
    }
};


int main()
{
setlocale(LC_ALL,"");
    return 0;
}
