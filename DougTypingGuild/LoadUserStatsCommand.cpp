#include "LoadUserStatsCommand.h"

void LoadUserStatsCommand::execute()
{
   DatabaseManager *manager = new DatabaseManager();
   manager->setData(username, newData);
}

void LoadUserStatsCommand::unexecute()
{
   DatabaseManager *manager = new DatabaseManager();
   manager->setData(username, oldData);
}

