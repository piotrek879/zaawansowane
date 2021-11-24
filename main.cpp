#include <iostream>

using namespace std;

void wypisanie( int ilosc_liczb, int tab[], int rozmiar_tablicy )

{
    cout << "Liczby podane przez Ciebie do tablicy, ale wypisane odwrotnie: ";
    for( int i = ilosc_liczb - 1; i >= 0; --i )
         cout << tab[ i ] << ", ";
   
    cout << endl << "Rozmiar tablicy wynosi:" << rozmiar_tablicy << endl;
}


int main()
{
    int liczba = 0;
    int indeks = 0;
    int rozmiar_tablicy = 1;
    int ilosc_liczb = 0;
    int * tab = nullptr;
    cout << "Podaj liczby, ktore chcesz wczytac."<<endl<<"Jezeli podasz 0, nastapi koniec wczytywania\n";
   
    while( true )
    {
       
        int liczba = 0;
        cin >> liczba;
       
        if( liczba == 0 )
             break;
        else
             ilosc_liczb++;
       
        if( ilosc_liczb >= rozmiar_tablicy )
        {
            rozmiar_tablicy = rozmiar_tablicy * 2;
           
            int * nowa = new int[ rozmiar_tablicy ]; //tutaj tworzymy nasza nowa tablice
           
            for( int i = 0; i < indeks; ++i ) //kopiujemy dane
                 nowa[ i ] = tab[ i ];
           
           
            delete[] tab;
            tab = nowa;
        }
        tab[ indeks ] = liczba;
        indeks++;
       
    }
   
    wypisanie( ilosc_liczb, tab, rozmiar_tablicy );
   
    return 0;
}
