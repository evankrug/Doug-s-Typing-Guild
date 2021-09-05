#pragma once
#include "DatabaseManager.h"
#include "Command.h"

using namespace std;

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: This is a derived class to load user data into the database
//          or restores database back to its previous version
//---------------------------------------------------------------------
class LoadUserStatsCommand : public Command
{
public:
   
   //---------------------------------------------------------------------
   // Given a username and a statistical value, this method
   //  searches for the user in the data base and updates the appropriate
   //  statistics for that user
   //--------------------------------------------------------------------
   enum class STAT { ACC, WPM };

   //---------------------------------------------------------------------
   // Constructor
   //---------------------------------------------------------------------
   LoadUserStatsCommand(string username, float newValue, STAT myStatType) : Command() 
   {
      this->username = username;
      this->myStatType = myStatType;

      ifstream inFile;
      inFile.open("UsersDatabase.txt");

      string line;
      stringstream ss;

	  // Search for given username in the database
      while (!inFile.eof())
      {
         getline(inFile, line);
         ss = stringstream(line);

         string uName;
         ss >> uName;

         if (uName == username)
         {
            string pWord, fName, lName;
            float oldACC, oldWPM;
            ss >> pWord >> fName >> lName >> oldACC >> oldWPM; //read in user info

            ostringstream a, w;
            
			//update user statistics
            switch (myStatType)
            {
               case STAT::ACC:
                  if (oldACC == 0)
                     a << newValue;
                  else
                     a << (oldACC + newValue) / 2;
                  w << oldWPM;
                  break;
               case STAT::WPM:
                  a << oldACC;
                  if (oldWPM == 0)
                     w << newValue;
                  else
                     w << (oldWPM + newValue) / 2;
                  break;
            }

            newData = uName + " " + pWord + " " + fName + " " + lName + " " + a.str() + " " + w.str();

            ostringstream oldA, oldW;
            oldA << oldACC;
            oldW << oldWPM;
            oldData = uName + " " + pWord + " " + fName + " " + lName + " " + oldA.str() + " " + oldW.str();
         }
      }

      inFile.close();
   };

   //---------------------------------------------------------------------
   // Updates user data
   //--------------------------------------------------------------------
   void execute() override;

   //---------------------------------------------------------------------
   // Undoes the update of user data
   //--------------------------------------------------------------------
   void unexecute() override;
private:
   string username, newData, oldData;
   STAT myStatType;

};