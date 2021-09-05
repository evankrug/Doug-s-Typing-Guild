#include "MainForm.h"
#include <array>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(cli::array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	DougTypingGuild::MyForm form;
	Application::Run(%form);
}


