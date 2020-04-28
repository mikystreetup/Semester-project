//
//  Officer.hpp
//  Semester project
//
//  Created by MIKAELMIKAEL on 4/28/20.
//  Copyright © 2020 MIKAELMIKAEL. All rights reserved.
//

#ifndef Officer_hpp
#define Officer_hpp
#include <string>
using namespace std;

class officer
{
    
    private:
     int badge;
    string officername;
    

    public:
    
    officer()
    {
        badge = 0;
        officername = "";
    }
    
      void setbadge(int b)
      {badge = b;}
        
      void setofficername(string n)
      {officername = n;}
    
      int getbadge() const
          {return badge;}
      
    string getofficername() const
          {return officername;}
};



#endif /* Officer_hpp */
