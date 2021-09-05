#pragma once
#include <string>

using namespace std;

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: Abstract class for the command pattern
//---------------------------------------------------------------------
class Command
{
public:
	//--------------------------------------------------
	// Command constructor
	//-------------------------------------------------
   Command();

   //--------------------------------------------------
   // Execute command
   //-------------------------------------------------
   void virtual execute();

   //--------------------------------------------------
   // Undo command execution
   //-------------------------------------------------
   void virtual unexecute();
};