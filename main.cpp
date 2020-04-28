

#include <iostream>
#include <string>
#include <iomanip>
#include "parkedcar.hpp"
#include "Parking meter.hpp"
#include "Parking ticket.hpp"
#include "Officer.hpp"

int badgenum;

string fname;

void carparked();

int main()
{
   
    //Parked car class
    parkedcar item1;
    item1.setmodel("LX"); // set the cars model
    item1.setmake("Honda"); // set the cars maker
    item1.setcolor("White"); // set cars color
    item1.setminutesparked(180); // minutes parked
    
    
    cout << " The parked car info " << endl;
    cout << " --------------------" << endl;
    cout << setprecision(2) << fixed << showpoint;
    cout << " Model: " << item1.getmodel() << endl;
    cout << " Make: " << item1.getmake() << endl;
    cout << " Color: " << item1.getcolor() << endl;
    cout << " Minutes parked: " << item1.getminutesparked() << endl;
    
    cout << endl;
    cout << endl;
    cout << endl;
    
    //Parking meter class
    parking_meter item2;
    item2.setminutesbought(120); // minutes bought
    cout << "The Parking Meter" << endl;
    cout << "-----------------" << endl;
    cout << setprecision(2) << fixed << showpoint;
    cout << "The owner has purchased " << item2.getminutesbought() << " minutes" << endl;
    
    
    

       
        report item3;
        item3.setlicense_number(123456);
        item3.setbadge(54321);
        item3.setofficername("Donut");
        item3.setfine(25);
    cout << endl;
    cout << endl;
    cout << endl;
    
        cout << "   Ticket issued " << endl;
        cout << " --------------------" << endl;
        cout << setprecision(2) << fixed << showpoint;
        cout << " Model: " << item1.getmodel() << endl;
        cout << " Make: " << item1.getmake() << endl;
        cout << " Color: " << item1.getcolor() << endl;
        cout << " License #" << item3.getlicensenumber() << endl;
        cout << " Minutes parked: " << item1.getminutesparked() << endl;
        
            // time bought
        cout << " Fine ammount: $" << item3.getfine() << endl;
        cout << endl;
        cout << " Officer: " << item3.getofficername() << endl;
        cout << " Badge #" << item3.getbadge() << endl;
    
    cout << endl;
    cout << endl;
    cout << endl;
    
    
    
    officer item4;
    item4.setofficername("Donut");
    item4.setbadge(54321);
    cout << "          INFO" << endl;
    cout << "--------------------------" << endl;
    cout << "Officer: " << item4.getofficername() << endl;
    cout << "Badge #" << item4.getbadge() << endl;
    cout << "Time bought: " << item2.getminutesbought() << endl;
    cout << "Time stayed: " << item3.getminutesparked() << endl;
    cout << "Fine ammount: $" << item3.getfine() << endl;
    cout << "Overstayed 1 hour $25 fine." << endl;
    
    
    
        
    
    
    
    
}

