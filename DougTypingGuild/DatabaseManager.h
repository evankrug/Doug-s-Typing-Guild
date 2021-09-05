#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: This is the class maintains and retreives information
//          from the various databases used.
//---------------------------------------------------------------------
class DatabaseManager
{
private:
   string charDatabase, wordDatabase, userDatabase;
public:
	//--------------------------------------------------
	// Database constructor
	//-------------------------------------------------
   DatabaseManager();

   //--------------------------------------------------
   // Returns a vector of chars corresponding to the given level
   //-------------------------------------------------
   vector<char> getCharList(int level);

   //--------------------------------------------------
   // Returns a vector of words corresponding to the given level
   //-------------------------------------------------
   vector<string> getWordList(int level);

   //--------------------------------------------------
   // If the username is new, then a new user will
   // be added to the UsersDatabase and return true.
   // Otherwise false is returned.
   //-------------------------------------------------
   bool addUser(string firstName, string lastName, string username, string password);

   //--------------------------------------------------
   // Returns true if the username and corresponding
   // password matches within the database.
   //-------------------------------------------------
   bool loginUser(string username, string password);

   //--------------------------------------------------
   // Returns the data on the currently logged in user
   //-------------------------------------------------
   vector<string> getUserData(string username);

   //--------------------------------------------------
   // Sets the data of the user
   //-------------------------------------------------
   void setData(string username, string newLine);
};