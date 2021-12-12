#include <iostream>
#include <stdlib.h> // niezbêdne dla funkcji srand i rand
#include <time.h> // niezbêdne dla funkcji time
#include <iomanip>
#include <windows.h> // niezbedne do funkcji sleep


using namespace std;

string DM [9];
string DK [9];
int i;
int t= 1500; // ustaw wartosc czas miedzy losowaniami w ms.

int main()



{
    {
       srand(time(NULL));
    }

    cout << "Wypisz 8 druzyn Michala" << endl;
    cout << endl;


    for (i=1; i<=8; i++)

    {
            cin>> DM [i];
    }
cout << endl;
    cout << endl;
    cout << "Wypisz 8 druzyny Kamila" << endl;

    cout << endl;

    for (i=1; i<=8; i++)

    {
        cin>> DK [i];
    }
// wpisalismy nazwy zespolow do 2 tablic

   int tablica[ 8 ];
    int x;
    for( int i = 0; i < 8; i++ )
    {
        do
        {
            x =( rand() % 8 ) + 1;
        }
        while(( tablica[ 0 ] == x ) ||( tablica[ 1 ] == x ) ||( tablica[ 2 ] == x ) ||( tablica[ 3 ] == x )||( tablica[ 4 ] == x ) ||( tablica[ 5 ] == x )||( tablica[ 6 ] == x ) ||( tablica[ 7 ] == x ));

        tablica[ i ] = x;



    }


int tab[ 8 ];

    for( int i = 0; i < 8; i++ )
    {
        do
        {
            x =( rand() % 8 ) + 1;
        }
        while(( tab[ 0 ] == x ) ||( tab[ 1 ] == x ) ||( tab[ 2 ] == x ) ||( tab[ 3 ] == x )||( tab[ 4 ] == x ) ||( tab[ 5 ] == x )||( tab[ 6 ] == x ) ||( tab[ 7 ] == x ));

        tab[ i ] = x;



    }

    cout<< endl;
Sleep (t);



cout<< "Grupa A" <<endl<< endl;

            cout<<"1."<< DM [tablica[0]]<<endl;
            Sleep(t);
            cout<<"2."<< DK [tab[0]]<<endl;
            Sleep(t);
               cout<<"3." <<DM [tablica[1]]<<endl;
               Sleep(t);
                  cout<<"4."<< DK [tab[1]] <<endl<< endl;
                  Sleep(t);


cout<< "Grupa B" <<endl<< endl;

         cout<<"1."<< DK [tab[2]] <<endl;
         Sleep (t);
            cout<<"2."<< DM [tablica[2]] <<endl;
            Sleep (t);
               cout<<"3."<< DK [tab[3]] <<endl;
               Sleep (t);
                  cout<<"4."<< DM [tablica[3]] <<endl<< endl;
                  Sleep (t);

                  cout<< "Grupa C" <<endl<< endl;

         cout<<"1." <<DM [tablica[4]] <<endl;
         Sleep(t);
            cout<<"2."<< DK [tab[4]] <<endl;
            Sleep(t);
               cout<<"3."<< DM [tablica[5]] <<endl;
               Sleep(t);
                  cout<<"4."<< DK [tab[5]] <<endl<< endl;
                  Sleep(t);


                  cout<< "Grupa E" <<endl<< endl;

         cout<<"1."<< DK [tab[6]] <<endl;
         Sleep (t);
            cout<<"2."<< DM [tablica[6]] <<endl;
            Sleep (t);
               cout<<"3."<< DK [tab[7]] <<endl;
               Sleep (t);
                  cout<<"4."<< DM [tablica[7]] <<endl<< endl;
                  Sleep (t);





    return 0;
}

