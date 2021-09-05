#pragma once
#include <stack> 
#include "Command.h"

using namespace std;

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: This class contains maintain actions performed and undone.
//---------------------------------------------------------------------
class History
{
protected:
	stack<Command*> done_cmds, undone_cmds;
public:
   //---------------------------------------------------------------------
   // History constructor
   //--------------------------------------------------------------------
   History() {};

   //---------------------------------------------------------------------
   // Calls execute for the given command and pushes to done stack
   //--------------------------------------------------------------------
   void doCommand(Command *cmd);

   //---------------------------------------------------------------------
   // Pops command from done stack, calls its unexecute method, and pushes 
   //  onto undone stack
   //--------------------------------------------------------------------
   bool undoCommand();

   //---------------------------------------------------------------------
   // Pops command from undone stack, calls execute method, and pushes 
   //  the command onto the done stack
   //--------------------------------------------------------------------
   bool redoCommand();
};