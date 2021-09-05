#pragma once
#include <string>
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

#include "DatabaseManager.h"

using namespace std;

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: This form allows users to create new accounts based off
//          the username entered.
//---------------------------------------------------------------------
namespace DougTypingGuild {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignUpForm
	/// </summary>
	public ref class SignUpForm : public System::Windows::Forms::Form
	{
	public:
		Form ^ Main;

		SignUpForm(Form ^ MainForm)
		{
			InitializeComponent();
			this->Location = System::Drawing::Point(0, 0);
			Main = MainForm;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignUpForm()
		{
			if (components)
			{
				delete components;
			}

			Main->Close();
		}
	private: System::Windows::Forms::Button^  btnCreate;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^  txtRePass;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::TextBox^  txtUsername;




	private:
		bool closed = false;


   private: System::Windows::Forms::TextBox^  txtFirst;
   private: System::Windows::Forms::TextBox^  txtLast;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::Label^  lblSuccess;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SignUpForm::typeid));
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->txtRePass = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtFirst = (gcnew System::Windows::Forms::TextBox());
			this->txtLast = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->lblSuccess = (gcnew System::Windows::Forms::Label());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnCreate
			// 
			this->btnCreate->Location = System::Drawing::Point(644, 378);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(100, 39);
			this->btnCreate->TabIndex = 5;
			this->btnCreate->Text = L"Accept";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &SignUpForm::btnCreate_Click);
			// 
			// txtRePass
			// 
			this->txtRePass->Location = System::Drawing::Point(412, 320);
			this->txtRePass->Name = L"txtRePass";
			this->txtRePass->Size = System::Drawing::Size(163, 20);
			this->txtRePass->TabIndex = 4;
			this->txtRePass->Text = L"Re-Enter Password";
			this->txtRePass->Click += gcnew System::EventHandler(this, &SignUpForm::txtRePass_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(412, 277);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(163, 20);
			this->txtPassword->TabIndex = 3;
			this->txtPassword->Text = L"Password";
			this->txtPassword->Click += gcnew System::EventHandler(this, &SignUpForm::txtPassword_Click);
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(412, 223);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(163, 20);
			this->txtUsername->TabIndex = 2;
			this->txtUsername->Text = L"UserName";
			this->txtUsername->Click += gcnew System::EventHandler(this, &SignUpForm::txtUsername_Click);
			// 
			// txtFirst
			// 
			this->txtFirst->Location = System::Drawing::Point(412, 137);
			this->txtFirst->Name = L"txtFirst";
			this->txtFirst->Size = System::Drawing::Size(163, 20);
			this->txtFirst->TabIndex = 0;
			this->txtFirst->Text = L"First Name";
			this->txtFirst->Click += gcnew System::EventHandler(this, &SignUpForm::txtFirst_Click);
			// 
			// txtLast
			// 
			this->txtLast->Location = System::Drawing::Point(412, 175);
			this->txtLast->Name = L"txtLast";
			this->txtLast->Size = System::Drawing::Size(163, 20);
			this->txtLast->TabIndex = 1;
			this->txtLast->Text = L"Last Name";
			this->txtLast->Click += gcnew System::EventHandler(this, &SignUpForm::txtLast_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(226, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 39);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SignUpForm::button1_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton1,
					this->toolStripButton2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(984, 25);
			this->toolStrip1->TabIndex = 9;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"btnUndo";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &SignUpForm::toolStripButton1_Click_1);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"btnRedo";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &SignUpForm::toolStripButton2_Click);
			// 
			// lblSuccess
			// 
			this->lblSuccess->AutoSize = true;
			this->lblSuccess->BackColor = System::Drawing::SystemColors::ControlDark;
			this->lblSuccess->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSuccess->ForeColor = System::Drawing::Color::ForestGreen;
			this->lblSuccess->Location = System::Drawing::Point(419, 397);
			this->lblSuccess->Name = L"lblSuccess";
			this->lblSuccess->Size = System::Drawing::Size(156, 20);
			this->lblSuccess->TabIndex = 10;
			this->lblSuccess->Text = L"Account created.  ";
			this->lblSuccess->Visible = false;
			// 
			// SignUpForm
			// 
			this->AcceptButton = this->btnCreate;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 561);
			this->Controls->Add(this->lblSuccess);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtLast);
			this->Controls->Add(this->txtFirst);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtRePass);
			this->Controls->Add(this->btnCreate);
			this->Name = L"SignUpForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign Up";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &SignUpForm::SignUpForm_FormClosed);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCreate_Click(System::Object^  sender, System::EventArgs^  e) 
	{
      string firstname, lastname, username, password, confirmpassword;

      MarshalString(txtFirst->Text->ToString(), firstname);
      MarshalString(txtLast->Text->ToString(), lastname);
      MarshalString(txtUsername->Text->ToString(), username);
      MarshalString(txtPassword->Text->ToString(), password);
      MarshalString(txtRePass->Text->ToString(), confirmpassword);

      if (password == confirmpassword)
      {
         DatabaseManager *db = new DatabaseManager();
         if (db->addUser(firstname, lastname, username, password))
         {
            lblSuccess->Text = txtUsername->Text + "'s Account was Added";
            lblSuccess->Visible = true;
         }
      }
	}
	private: System::Void SignUpForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
	{
		if (!closed)
		{
			lblSuccess->Visible = false;
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
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Main->Show();
	this->Hide();
}

private: System::Void txtFirst_Click(System::Object^  sender, System::EventArgs^  e) {
	txtFirst->SelectAll();
}

private: System::Void txtLast_Click(System::Object^  sender, System::EventArgs^  e) {
	txtLast->SelectAll();
}

private: System::Void txtUsername_Click(System::Object^  sender, System::EventArgs^  e) {
	txtUsername->SelectAll();
}


private: System::Void txtPassword_Click(System::Object^  sender, System::EventArgs^  e) {
	txtPassword->PasswordChar = '*';
	txtPassword->SelectAll();
}

private: System::Void txtRePass_Click(System::Object^  sender, System::EventArgs^  e) {
	txtRePass->PasswordChar = '*';
	txtRePass->SelectAll();
}


private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) 
{
   //RedoUserAccount *cmd = new RedoUserAccount(hist);
   //cmd->command();
}
private: System::Void toolStripButton1_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
   //UndoUserAccount *cmd = new UndoUserAccount(hist);
   //cmd->command();
}
};
}
