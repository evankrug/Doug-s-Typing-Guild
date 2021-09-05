#pragma once

#include "LoginForm.h"
#include "SignUpForm.h"
#include "GameSelectForm.h"
#include "History.h"

/*

*/
//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: This is the first form seen by users, containing
//          buttons that allow users to login into accounts,
//          create new accounts, or login as a guest.
//---------------------------------------------------------------------
namespace DougTypingGuild {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
      History *history;

		MyForm(void)
		{
			InitializeComponent();
			this->Location = System::Drawing::Point(0, 0);
         history = new History();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnLogin;
	private: System::Windows::Forms::Button^  btnSignUp;




	private: System::Windows::Forms::Button^  btnGuest;

	protected:

	private:
		bool closed = false;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnSignUp = (gcnew System::Windows::Forms::Button());
			this->btnGuest = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(363, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Doug\'s Typing Guild";
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(410, 226);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(168, 83);
			this->btnLogin->TabIndex = 1;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &MyForm::btnLogin_Click);
			// 
			// btnSignUp
			// 
			this->btnSignUp->Location = System::Drawing::Point(410, 102);
			this->btnSignUp->Name = L"btnSignUp";
			this->btnSignUp->Size = System::Drawing::Size(168, 82);
			this->btnSignUp->TabIndex = 2;
			this->btnSignUp->Text = L"New User";
			this->btnSignUp->UseVisualStyleBackColor = true;
			this->btnSignUp->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btnGuest
			// 
			this->btnGuest->Location = System::Drawing::Point(410, 360);
			this->btnGuest->Name = L"btnGuest";
			this->btnGuest->Size = System::Drawing::Size(168, 82);
			this->btnGuest->TabIndex = 4;
			this->btnGuest->Text = L"Guest";
			this->btnGuest->UseVisualStyleBackColor = true;
			this->btnGuest->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(-2, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1000, 600);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 561);
			this->Controls->Add(this->btnGuest);
			this->Controls->Add(this->btnSignUp);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main Menu";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		LoginForm ^ l = gcnew LoginForm(this, history);
		this->Hide();
		l->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		SignUpForm ^ s = gcnew SignUpForm(this);
		s->Show();
		this->Hide();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		GameSelectForm ^ g = gcnew GameSelectForm(this, "Guest", history);
		g->Show();
		this->Hide();
	}

private: System::Void MyForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
{
	if (!closed)
	{
		closed = true;
		this->Close();
	}

}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	//gcroot<Drawing::Image ^> background;
	//background = gcnew Drawing::Bitmap("finalbackground.jpg");
	//this->pictureBox1->BackgroundImage = background;
}
};
}



