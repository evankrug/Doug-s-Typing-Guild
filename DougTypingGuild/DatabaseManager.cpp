#include "DatabaseManager.h"

DatabaseManager::DatabaseManager()
{
   charDatabase = "CharactersDatabase.txt";
   wordDatabase = "WordsDatabase.txt";
   userDatabase = "UsersDatabase.txt";
}

vector<char> DatabaseManager::getCharList(int level)
{
   ifstream inFile;
   inFile.open(charDatabase);

   string line;
   stringstream ss;

   vector<char> cList;

   while (!inFile.eof())
   {
      getline(inFile, line);
      ss = stringstream(line);

      int curLevel;
      ss >> curLevel;
      if (curLevel <= level)
      {
         while (!ss.eof())
         {
            char c;
            ss >> c;
            cList.push_back(c);
         }
      }
   }
   inFile.close();

   return cList;
}

vector<string> DatabaseManager::getWordList(int level)
{
   ifstream inFile;
   inFile.open(wordDatabase);

   string word;

   vector<string> wList;

   while (!inFile.eof())
   {
      inFile >> word;

      if (word.length() <= level + 2)
         wList.push_back(word);
   }
   inFile.close();

   return wList;
}

bool DatabaseManager::addUser(string firstName, string lastName, string username, string password)
{
   ifstream inFile;
   inFile.open(userDatabase);

   string line;
   stringstream ss;

   while (!inFile.eof())
   {
      getline(inFile, line);
      ss = stringstream(line);

      string uName;
      ss >> uName;

      if (uName == username)
      {
         inFile.close();
         return false;
      }
   }
   inFile.close();


   ofstream outFile;
   outFile.open(userDatabase, std::ios_base::app);

   outFile << username + " " + password + " " + firstName + " " + lastName + " 0 0\n";
   outFile.close();

   return true;
}

bool DatabaseManager::loginUser(string username, string password)
{
   ifstream inFile;
   inFile.open(userDatabase);

   string line;
   stringstream ss;

   while (!inFile.eof())
   {
      getline(inFile, line);
      ss = stringstream(line);

      string uName, pWord;
      ss >> uName >> pWord;

      if (uName == username && pWord == password)
         return true;
   }
   inFile.close();

   return false;
}

vector<string> DatabaseManager::getUserData(string username)
{
   ifstream inFile;
   inFile.open(userDatabase);

   string line;
   stringstream ss;

   while (!inFile.eof())
   {
      getline(inFile, line);
      ss = stringstream(line);

      string uName;
      ss >> uName;

      if (uName == username)
      {
         string pWord, fName, lName, acc, wpm;
         ss >> pWord >> fName >> lName >> acc >> wpm;
         inFile.close();
         return vector<string> {acc, wpm};
      }
   }
   inFile.close();
   return vector<string> {};
}


void DatabaseManager::setData(string username, string newLine)
{
   ifstream inFile, inTemp;
   inFile.open(userDatabase);

   ofstream outFile, outTemp;
   outTemp.open("temp.txt");

   string line, content = "";
   stringstream ss;

   while (!inFile.eof())
   {
      getline(inFile, line);
      ss = stringstream(line);

      string uName;
      ss >> uName;

      if (uName == username)
         line = newLine;

      content += line;
      if(line != "")
        content += "\n";
   }
   outTemp << content;
   inFile.close();
   outTemp.close();

   inTemp.open("temp.txt");
   outFile.open(userDatabase);

   content = "";

   while (!inTemp.eof())
   {
      getline(inTemp, line);
      content += line;
      if (line != "")
         content += "\n";
   }

   outFile << content;
   inTemp.close();
   outFile.close();
}