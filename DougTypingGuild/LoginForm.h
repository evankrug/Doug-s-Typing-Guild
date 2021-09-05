#pragma once

#include "GameSelectForm.h"

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: This form allows user to login into the system.
//---------------------------------------------------------------------
namespace DougTypingGuild {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		Form ^ Main;
      History *history;

		LoginForm(Form ^ MainForm, History *myHistory)
		{
			InitializeComponent();
			this->Location = System::Drawing::Point(0, 0);
			Main = MainForm;
         history = myHistory;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}

			Main->Close();
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtPassword;

	private: System::Windows::Forms::TextBox^  txtUser;

	private: System::Windows::Forms::Button^  btnLogin;
	private: System::Windows::Forms::Button^  btnBack;



	private:
		bool closed = false;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(380, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(380, 258);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password:";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(493, 257);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(162, 20);
			this->txtPassword->TabIndex = 1;
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(493, 190);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(162, 20);
			this->txtUser->TabIndex = 0;
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(661, 360);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(166, 83);
			this->btnLogin->TabIndex = 3;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(191, 360);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(164, 83);
			this->btnBack->TabIndex = 4;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click_1);
			// 
			// LoginForm
			// 
			this->AcceptButton = this->btnLogin;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 561);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login Screen";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &LoginForm::LoginForm_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		DatabaseManager *db = new DatabaseManager();

      string uName, pWord;
      String ^ username;
      String ^ password;

      MarshalString(txtUser->Text->ToString(), uName);
      MarshalString(txtPassword->Text->ToString(), pWord);

      username = txtUser->Text;
      password = txtPassword->Text;

      if (db->loginUser(uName, pWord))
      {
         GameSelectForm ^ gs = gcnew GameSelectForm(Main, username, history);
         gs->Show();
         this->Hide();
      }
	}

#pragma endregion
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
   Main->Show();
   this->Hide();
}
private: System::Void LoginForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	this->Close();
}
private: System::Void LoginForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
{
	if (!closed)
	{
		closed = true;
		this->Close();
	}
}

private:  void MarshalString(String ^ s, string& os)
{
   using namespace Runtime::InteropServices;
   const char* chars =
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}

};
}
