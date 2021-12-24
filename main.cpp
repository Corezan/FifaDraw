#include <iostream>
#include <stdlib.h> // niezbêdne dla funkcji srand i rand
#include <time.h> // niezbêdne dla funkcji time
#include <iomanip>
#include <windows.h> // niezbedne do funkcji sleep i ustawienia kursora
#include <cstdio> // do tabel?


using namespace std;

void setCursor(int x, int y)
{
     COORD c;
     c.X = x;
     c.Y = y;
     SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), c);
}


string DM [9];
string DK [9];
int i;
int t= 15; // ustaw wartosc czas miedzy losowaniami w ms.
bool isDevelopment = true;

int main()



{
    {
       srand(time(NULL));
    }
    if (isDevelopment) {
        DM[1] = "Legia";
        DM[2] = "GKS";
        DM[3] = "Polonia";
        DM[4] = "Widzew";
        DM[5] = "Bogdanka";
        DM[6] = "Lks";
        DM[7] = "Szczakowianka";
        DM[8] = "Swit";

        DK[1] = "SPORTING";
        DK[2] = "SLAVIA";
        DK[3] = "BAYERN";
        DK[4] = "BARCELONA";
        DK[5] = "REAL";
        DK[6] = "PSG";
        DK[7] = "JUVENTUS";
        DK[8] = "ROMA";
    } else {
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
/*
printf("|%-3s|%-15s|%-15s|%-15s|%-15s|", "No.", "Grupa A", "Grupa B", "Grupa C", "Grupa D");
cout << endl; Sleep(t);
printf("|%-3s|%-15s|%-15s|%-15s|%-15s|", "---", "---------------", "---------------", "---------------", "---------------");
cout << endl; Sleep(t);
printf("|%-3s|%-15s|%-15s|%-15s|%-15s|", "1.", DM [tablica[0]].data(), DK [tab[2]].data(), DM [tablica[4]].data(), DK [tab[6]].data());
cout << endl; Sleep(t);
printf("|%-3s|%-15s|%-15s|%-15s|%-15s|", "2.", DK [tab[0]].data(), DM [tablica[2]].data(), DK [tab[4]].data(), DM [tablica[6]].data());
cout << endl; Sleep(t);
printf("|%-3s|%-15s|%-15s|%-15s|%-15s|", "3.", DM [tablica[1]].data(), DK [tab[3]].data(), DM [tablica[5]].data(), DK [tab[7]].data());
cout << endl; Sleep(t);
printf("|%-3s|%-15s|%-15s|%-15s|%-15s|", "4.", DK [tab[1]].data(), DM [tablica[3]].data(), DK [tab[5]].data(), DM [tablica[7]].data());
cout << endl;
*/


setCursor( 1,23 );
cout<<"-----------------------------------------------------------------------------------------------------------------------";
setCursor( 1,25 );
cout<< "Grupa A" ;
setCursor( 30,25 );
cout<< "Grupa B" ;
setCursor( 60,25 );
cout<< "Grupa C" ;
setCursor( 90,25 );
cout<< "Grupa D" ;



setCursor( 2,27 );
            cout<<"1."<< DM [tablica[0]];
            Sleep(t);
            setCursor( 30,27 );
            cout<<"1."<< DK [tab[2]] ;
            Sleep (t);
            setCursor( 60,27 );
            cout<<"1." <<DM [tablica[4]];
            Sleep(t);
            setCursor( 90,27 );
            cout<<"1."<< DK [tab[6]] ;
            Sleep (t);

setCursor( 2,28 );

            cout<<"2."<< DK [tab[0]];
            Sleep(t);
            setCursor( 30,28 );
            cout<<"2."<< DM [tablica[2]] ;
            Sleep (t);
            setCursor( 60,28 );
            cout<<"2."<< DK [tab[4]];
            Sleep(t);
            setCursor( 90,28 );
            cout<<"2."<< DM [tablica[6]];
            Sleep (t);

setCursor( 2,29 );

            cout<<"3." <<DM [tablica[1]];
            Sleep(t);
            setCursor( 30,29 );
            cout<<"3."<< DK [tab[3]];
            Sleep (t);
            setCursor( 60,29 );
            cout<<"3."<< DM [tablica[5]];
            Sleep(t);
            setCursor( 90,29 );
            cout<<"3."<< DK [tab[7]];
            Sleep (t);

setCursor( 2,30 );

            cout<<"4."<< DK [tab[1]];
            Sleep(t);
            setCursor( 30,30 );
            cout<<"4."<< DM [tablica[3]];
            Sleep (t);
            setCursor( 60,30 );
            cout<<"4."<< DK [tab[5]];
            Sleep(t);
            setCursor( 90,30 );
            cout<<"4."<< DM [tablica[7]];
            Sleep (t);

cout<<endl<<endl;

cout<<"-----------------------------------------------------------------------------------------------------------------------";

cout<<endl<<endl<<endl;



    return 0;
}

