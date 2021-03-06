//
//  parkedcar.hpp
//  Semester project
//
//  Created by MIKAELMIKAEL on 4/28/20.
//  Copyright © 2020 MIKAELMIKAEL. All rights reserved.
//

#ifndef parkedcar_hpp
#define parkedcar_hpp
#include <string>
using namespace std;

class parkedcar
{
    private:
    int license_number;
    string model;
    string make;
    string color;
    int minutes_parked;
    
    public:
    
    
    // constructor #1
    parkedcar( )
    {
        model = "";
        make = "";
        color = "";
        minutes_parked = 0;
        license_number = 0;
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
    
    
    
};


#endif /* parkedcar_hpp */
