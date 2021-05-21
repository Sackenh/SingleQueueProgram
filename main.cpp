#include <iostream>
#include <math.h>
#include <fstream>

std::ofstream myfile;
using namespace std;

int main() {
    double lambda = 3;
    double mu =6;
    double Po = (1-(lambda/mu));
    double PW = (lambda/mu);
    double Lq = (mu*mu/(mu*(mu - lambda)));
    double L = (Lq+(lambda/mu));
    double Wq = (Lq/mu);
    double W = (Wq + (1/mu));
    double Pn;

    myfile.open("newSpreadsheet.csv");


    for(int i = 0; i <= 3; i++){
        Pn = pow((lambda/mu), i)*(Po);
        myfile << Pn << "\n";
        cout << "\nProbability of " << i << " units in the system: " << Pn;
    }

    myfile.close();

    cout << "\nProbability of no units in the system: " << Po;
    cout << "\n Probability an arriving unit must wait for server: " << PW;
    cout << "\nAverage number of units in the queue awaiting service: " << Lq;
    cout << "\nAverage number of units in the system: " << L;
    cout << "\nAverage time a unit spends in the queue awaiting service: " << Wq;
    cout << "\nAverage time a unit spends in the system: " << W;

}
