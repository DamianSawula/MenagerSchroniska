#include <iostream>
#include <vector>
#include <string>

using namespace std;


const int miejsca=10;
int l_zwierzat=3;

bool WolneMiejsce(int miejsca, int l_zwierzat)
{
    if (miejsca<l_zwierzat) return false;
    else return true;
}

class Zwierze
{
public:
    string rodzaj;
    string imie;
    int wiek;
    Zwierze( string xrodzaj="BRAK", string ximie="BRAK", int xwiek=0)
    {
        rodzaj=xrodzaj;
        imie=ximie;
        wiek=xwiek;
    }
    void DodajZwierze()
    {
        if (WolneMiejsce(miejsca,l_zwierzat))
        {
            cout << "Type of animal: ";
            cin >> rodzaj;
            cout << "Name: ";
            cin >> imie;
            cout << "Age: ";
            cin >> wiek;
            l_zwierzat++;
            cout << "Animal has been added to data base successfully" << endl;
        }
        else
        {
            cout << "There's no place for your animal! :( " << endl;
        }
    }
};

vector < Zwierze > zwierzak;
int main()
{

    cout << "1. Add an animal/s" << endl;
    cout << "2. Remove an animal/s" << endl;
    cout << "3. Show list of animals" << endl;
    cout << "4. Show free places for new animal/s" << endl;
    cout << "Waiting for action... " << endl;
    int choose;
    do
    {

        cin >> choose;
        switch(choose)
        {
        case 1:
            cout << "\n\n\nAdding new animal\n";
            cout << "How many animals do you want to add?: ";
            int number_of_animals;
            cin >> number_of_animals;
            int x;
            x=l_zwierzat+number_of_animals;
            if (WolneMiejsce(miejsca,x))
            {
                for (int i = 1; i<=number_of_animals; i++)
                {
                Zwierze z;
                z.DodajZwierze();
                zwierzak.push_back(z);
                }
            }
            else
            {
                cout << "There's no place for your animal! :( " << endl;
            }
            l_zwierzat+=number_of_animals;

            break;
        case 2:
            cout << "Which animal would you like to delete? ";
            int n;
            cin >> n;
n-=1;
            zwierzak.erase (zwierzak.begin() + n);

            cout << "Zwierze zostalo usuniete z bazy !";



            break;
        case 3:
            cout << "Animals in your shelter: \n";
            for (int i=0; i<zwierzak.size(); i++)
            {
            cout << "Type: "<< zwierzak[ i ].rodzaj << endl;
            cout << "Name: "<< zwierzak[ i ].imie << endl;
            cout << "Age: "<< zwierzak[ i ].wiek << endl;

            }
            break;
        case 4:
            cout << "Free places: " << miejsca-l_zwierzat<< endl;
            break;
        }
    }
    while(choose!=4);




    return 0;
}
