#pragma once
#include "DatabaseManager.h"
#include <sstream>
#include <string>
#include <msclr\marshal.h>  
#include <msclr/marshal_cppstd.h>

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: This form displays the current user's username, average accuracy, 
//          and the words per minute by retreiving the data from the
//          database.
//---------------------------------------------------------------------
namespace DougTypingGuild {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserStatForm
	/// </summary>
	public ref class UserStatForm : public System::Windows::Forms::Form
	{
	public:

		UserStatForm(Form ^ SelectForm, String ^ username)
		{
			InitializeComponent();
			this->Location = System::Drawing::Point(0, 0);
			Select = SelectForm;
         txtUser->Text = username;
         
         if (username == "Guest")
         {
            txtAccuracy->Text = "0";
            txtWPM->Text = "0";
         }
         else
         {
            DatabaseManager *db = new DatabaseManager();
            string uName;
            float acc, wpm;
            MarshalString(username, uName);
            acc = stoi(db->getUserData(uName).at(0));
            wpm = stoi(db->getUserData(uName).at(1));
            txtAccuracy->Text = acc.ToString();
            txtWPM->Text = wpm.ToString();
         }
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>

		~UserStatForm()
		{
			if (components)
			{
				delete components;
			}

			Select->Close();
		}
	private: System::Windows::Forms::TextBox^  txtUser;
	protected:
	private: System::Windows::Forms::TextBox^  txtAccuracy;
	private: System::Windows::Forms::TextBox^  txtWPM;
	private: System::Windows::Forms::Label^  lblUser;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnBack;

	private:
		Form ^ Select;
		bool closed = false;
   private: System::Windows::Forms::Timer^  timer1;
   private: System::ComponentModel::IContainer^  components;
            /// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->txtAccuracy = (gcnew System::Windows::Forms::TextBox());
			this->txtWPM = (gcnew System::Windows::Forms::TextBox());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(438, 201);
			this->txtUser->Name = L"txtUser";
			this->txtUser->ReadOnly = true;
			this->txtUser->Size = System::Drawing::Size(243, 20);
			this->txtUser->TabIndex = 5;
			// 
			// txtAccuracy
			// 
			this->txtAccuracy->Location = System::Drawing::Point(438, 276);
			this->txtAccuracy->Name = L"txtAccuracy";
			this->txtAccuracy->ReadOnly = true;
			this->txtAccuracy->Size = System::Drawing::Size(243, 20);
			this->txtAccuracy->TabIndex = 6;
			// 
			// txtWPM
			// 
			this->txtWPM->Location = System::Drawing::Point(438, 348);
			this->txtWPM->Name = L"txtWPM";
			this->txtWPM->ReadOnly = true;
			this->txtWPM->Size = System::Drawing::Size(243, 20);
			this->txtWPM->TabIndex = 7;
			// 
			// lblUser
			// 
			this->lblUser->AutoSize = true;
			this->lblUser->Location = System::Drawing::Point(364, 208);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(58, 13);
			this->lblUser->TabIndex = 8;
			this->lblUser->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(367, 279);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Accuracy:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(294, 351);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Words Per Minute (WPM)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(422, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 31);
			this->label1->TabIndex = 11;
			this->label1->Text = L"User Statistics";
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(428, 402);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(168, 46);
			this->btnBack->TabIndex = 12;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &UserStatForm::btnBack_Click);
			// 
			// UserStatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 561);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblUser);
			this->Controls->Add(this->txtWPM);
			this->Controls->Add(this->txtAccuracy);
			this->Controls->Add(this->txtUser);
			this->Name = L"UserStatForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserStatForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &UserStatForm::UserStatForm_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserStatForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
	{
		if (!closed)
		{
			closed = true;
			this->Close();
		}
	}

	private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Select->Show();
		this->Hide();
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
