//
//  Parking ticket.hpp
//  Semester project
//
//  Created by MIKAELMIKAEL on 4/28/20.
//  Copyright © 2020 MIKAELMIKAEL. All rights reserved.
//

#ifndef Parking_ticket_hpp
#define Parking_ticket_hpp
#include <string>
using namespace std;

class report
{


        private:
       
        int license_number;
       string model;
       string make;
       string color;
       int minutes_parked;
        int fine;
        int badge;
        string officername;
       
       public:
       
       
       // constructor #1
       report( )
       {
           model = "";
           make = "";
           color = "";
           minutes_parked = 0;
           license_number = 0;
           badge = 0;
           fine = 0;
           officername = "";
       }
       
       //Mutator functions
       void setmodel(string m)
       {model = m;}
       
       void setmake(string ma)
       {make = ma;}
       
       void setcolor(string c)
       {color = c;}
       
       void setlicense_number(int num)
       {license_number = num;}
       
       void setminutesparked(int min)
       {minutes_parked = min;}
       
        void setfine(int f)
        {fine = f;}
        
        void setbadge(int b)
    {badge = b;}
      
    void setofficername(string n)
    {officername = n;}
    
    //Accessor
       
       string getmodel() const
       { return model;}
       
       string getmake() const
       { return make;}
       
       string getcolor() const
       { return color;}
       
       int getlicensenumber() const
       { return license_number;}
       
       int getminutesparked() const
       { return minutes_parked;}
       
        int getfine() const
        { return fine;}
        
        int getbadge() const
        {return badge;}
    
        string getofficername() const
        {return officername;}
};

#endif /* Parking_ticket_hpp */
