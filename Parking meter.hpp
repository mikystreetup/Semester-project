//
//  Parking meter.hpp
//  Semester project
//
//  Created by MIKAELMIKAEL on 4/28/20.
//  Copyright © 2020 MIKAELMIKAEL. All rights reserved.
//

#ifndef Parking_meter_hpp
#define Parking_meter_hpp
#include <string>
using namespace std;

class parking_meter
{

private:
    int minutes_bought;
    
public:
    void setminutesbought(int m)
    { minutes_bought = m;}
    
    int getminutesbought() const
    { return minutes_bought;}
    
// constructor 1
    parking_meter()
    {
        minutes_bought = 0;
    }
};

#endif /* Parking_meter_hpp */
