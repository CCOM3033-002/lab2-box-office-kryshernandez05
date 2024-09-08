//Krystal E. Hernandez Ayala kryshernandez05 801-23-8929
//referencias: Powerpoint capitulo 3, https://cplusplus.com/forum/beginner/60551/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){

    //proposito
    cout << "This program calculates the gross box office profit, the net box office profit, \nand the distributor's profit for a movie showing" << endl;

    //nombre de pelicula y tickets vendidos input
    int adultTicket, childTicket;
    string movieName;

    cout << "\nMovie name: ";
    getline(cin, movieName);

    cout << "Adult tickets sold: ";
    cin >> adultTicket;

    cout << "Child tickets sold: ";
    cin >> childTicket;

    //calculos (gross, net profit, payed)
    double gross, net, distributor, adultPrice = 10.00, childPrice = 6.00;

    gross = (adultTicket * adultPrice) + (childTicket * childPrice);
    net = gross * 0.20;
    distributor = gross - net;

    //display 
    cout << "\n\t\t<<<< Results >>>>" << endl;
    cout << setprecision(2) << fixed << endl;
    cout << "\nMovie name: \t\t\"" << movieName << "\"" << endl;
    cout << "Gross profi: \t\t" << "$ " << fixed << gross << endl;
    cout << "Net profit: \t\t" << "$ " << fixed << net << endl;
    cout << "Distributor's profit: \t\t" << "$ " << distributor << endl; 

    return 0;

}
