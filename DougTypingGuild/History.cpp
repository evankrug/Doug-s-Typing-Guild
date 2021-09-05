#include "History.h"

void History::doCommand(Command *cmd) 
{
   cmd->execute();
   done_cmds.push(cmd);
   undone_cmds.empty();
};

bool History::undoCommand() 
{
   if (!done_cmds.empty())
   {
      Command *cmd = done_cmds.top();
      done_cmds.pop();
      cmd->unexecute();
      undone_cmds.push(cmd);
      return true;
   }
   return false;
};

bool History::redoCommand()
{
   if (!undone_cmds.empty())
   {
      Command *cmd = undone_cmds.top();
      undone_cmds.pop();
      cmd->execute();
      done_cmds.push(cmd);
      return true;
   }
   return false;
};