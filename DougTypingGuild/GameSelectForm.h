#pragma once

#include "ReactGameForm.h"
#include "SpeedGameForm.h"
#include "TechGameForm.h"
#include "UserStatForm.h"

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: This form contains the information necessary to select which
//          level and game a user would like to play.
//---------------------------------------------------------------------
namespace DougTypingGuild {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GameSelectForm
	/// </summary>
   
	public ref class GameSelectForm : public System::Windows::Forms::Form
	{
	public:
		Form ^ Main;
	private: System::Windows::Forms::Button^  btnUserStats;
	public:
		String ^ user;
      History *history;

		GameSelectForm(Form ^ MainForm, String ^ username, History *myHistory)
		{
			InitializeComponent();
			this->Location = System::Drawing::Point(0, 0);
			Main = MainForm;
         user = username;
         history = myHistory;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GameSelectForm()
		{
			if (components)
			{
				delete components;
			}

			Main->Close();
		}
	private: System::Windows::Forms::Button^  btnTech;
	private: System::Windows::Forms::Button^  btnSpeed;
	private: System::Windows::Forms::Button^  btnReaction;
	protected:

	protected:



	private:
		bool closed = false;
	private: System::Windows::Forms::ComboBox^  cobReaction;
	private: System::Windows::Forms::ComboBox^  cobSpeed;
	private: System::Windows::Forms::ComboBox^  cobTech;

	private: System::Windows::Forms::Button^  btnReturn;

	private: System::Windows::Forms::ToolTip^  gameSelectTip;
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
			this->btnTech = (gcnew System::Windows::Forms::Button());
			this->btnSpeed = (gcnew System::Windows::Forms::Button());
			this->btnReaction = (gcnew System::Windows::Forms::Button());
			this->cobReaction = (gcnew System::Windows::Forms::ComboBox());
			this->cobSpeed = (gcnew System::Windows::Forms::ComboBox());
			this->cobTech = (gcnew System::Windows::Forms::ComboBox());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->gameSelectTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->btnUserStats = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnTech
			// 
			this->btnTech->Location = System::Drawing::Point(58, 254);
			this->btnTech->Name = L"btnTech";
			this->btnTech->Size = System::Drawing::Size(182, 119);
			this->btnTech->TabIndex = 0;
			this->btnTech->Text = L"Technique Game";
			this->gameSelectTip->SetToolTip(this->btnTech, L"Play Technique game!");
			this->btnTech->UseVisualStyleBackColor = true;
			this->btnTech->Click += gcnew System::EventHandler(this, &GameSelectForm::btnTech_Click);
			this->btnTech->MouseHover += gcnew System::EventHandler(this, &GameSelectForm::btnTech_MouseHover);
			// 
			// btnSpeed
			// 
			this->btnSpeed->Location = System::Drawing::Point(425, 254);
			this->btnSpeed->Name = L"btnSpeed";
			this->btnSpeed->Size = System::Drawing::Size(179, 119);
			this->btnSpeed->TabIndex = 1;
			this->btnSpeed->Text = L"Speed Game";
			this->gameSelectTip->SetToolTip(this->btnSpeed, L"Play the speed game!");
			this->btnSpeed->UseVisualStyleBackColor = true;
			this->btnSpeed->Click += gcnew System::EventHandler(this, &GameSelectForm::btnSpeed_Click);
			this->btnSpeed->MouseHover += gcnew System::EventHandler(this, &GameSelectForm::btnSpeed_MouseHover);
			// 
			// btnReaction
			// 
			this->btnReaction->Location = System::Drawing::Point(761, 254);
			this->btnReaction->Name = L"btnReaction";
			this->btnReaction->Size = System::Drawing::Size(185, 119);
			this->btnReaction->TabIndex = 2;
			this->btnReaction->Text = L"Reaction Game";
			this->gameSelectTip->SetToolTip(this->btnReaction, L"Play the reaction game!");
			this->btnReaction->UseVisualStyleBackColor = true;
			this->btnReaction->Click += gcnew System::EventHandler(this, &GameSelectForm::btnReaction_Click);
			this->btnReaction->MouseHover += gcnew System::EventHandler(this, &GameSelectForm::btnReaction_MouseHover);
			// 
			// cobReaction
			// 
			this->cobReaction->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cobReaction->FormattingEnabled = true;
			this->cobReaction->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"Select Level", L"1", L"2", L"3", L"4", L"5" });
			this->cobReaction->Location = System::Drawing::Point(761, 86);
			this->cobReaction->Name = L"cobReaction";
			this->cobReaction->Size = System::Drawing::Size(185, 21);
			this->cobReaction->TabIndex = 3;
			// 
			// cobSpeed
			// 
			this->cobSpeed->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cobSpeed->FormattingEnabled = true;
			this->cobSpeed->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"Select Level", L"1", L"2", L"3", L"4", L"5" });
			this->cobSpeed->Location = System::Drawing::Point(425, 86);
			this->cobSpeed->Name = L"cobSpeed";
			this->cobSpeed->Size = System::Drawing::Size(179, 21);
			this->cobSpeed->TabIndex = 4;
			// 
			// cobTech
			// 
			this->cobTech->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cobTech->FormattingEnabled = true;
			this->cobTech->Items->AddRange(gcnew cli::array< System::Object^  >(28) {
				L"Select Level", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25",
					L"26", L"27"
			});
			this->cobTech->Location = System::Drawing::Point(58, 86);
			this->cobTech->Name = L"cobTech";
			this->cobTech->Size = System::Drawing::Size(182, 21);
			this->cobTech->TabIndex = 5;
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(55, 460);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(185, 67);
			this->btnReturn->TabIndex = 7;
			this->btnReturn->Text = L"Return to Title Screen";
			this->gameSelectTip->SetToolTip(this->btnReturn, L"Takes you back to main menu");
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &GameSelectForm::button1_Click);
			this->btnReturn->MouseHover += gcnew System::EventHandler(this, &GameSelectForm::button1_MouseHover);
			// 
			// btnUserStats
			// 
			this->btnUserStats->Location = System::Drawing::Point(761, 460);
			this->btnUserStats->Name = L"btnUserStats";
			this->btnUserStats->Size = System::Drawing::Size(185, 67);
			this->btnUserStats->TabIndex = 8;
			this->btnUserStats->Text = L"Stats";
			this->btnUserStats->UseVisualStyleBackColor = true;
			this->btnUserStats->Click += gcnew System::EventHandler(this, &GameSelectForm::btnUserStats_Click);
			// 
			// GameSelectForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 561);
			this->Controls->Add(this->btnUserStats);
			this->Controls->Add(this->btnReturn);
			this->Controls->Add(this->cobTech);
			this->Controls->Add(this->cobSpeed);
			this->Controls->Add(this->cobReaction);
			this->Controls->Add(this->btnReaction);
			this->Controls->Add(this->btnSpeed);
			this->Controls->Add(this->btnTech);
			this->Name = L"GameSelectForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Game Select Screen";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &GameSelectForm::GameSelectForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &GameSelectForm::GameSelectForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnTech_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (cobTech->SelectedIndex == 0) {
			TechGameForm ^ tech = gcnew TechGameForm(this, 1, user, history);
			tech->Show();
			this->Hide();
		}
		else if (cobTech->SelectedIndex != 0)
		{
			TechGameForm ^ tech = gcnew TechGameForm(this, cobTech->SelectedIndex, user, history);
			tech->Show();
			this->Hide();
		}
	}
	private: System::Void btnReaction_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (cobReaction->SelectedIndex == 0) {
			ReactGameForm ^ react = gcnew ReactGameForm(this, 1, user, history);
			react->Show();
			this->Hide();
		}
		else if (cobReaction->SelectedIndex != 0) {
			ReactGameForm ^ react = gcnew ReactGameForm(this, cobReaction->SelectedIndex, user, history);
			react->Show();
			this->Hide();
		}
	}
	private: System::Void btnSpeed_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (cobSpeed->SelectedIndex == 0) {
			SpeedGameForm ^ spdForm = gcnew SpeedGameForm(this, 1, user, history);
			spdForm->Show();
			this->Hide();
		}
		else if (cobSpeed->SelectedIndex != 0)
		{
			SpeedGameForm ^ spdForm = gcnew SpeedGameForm(this, cobSpeed->SelectedIndex, user, history);
			spdForm->Show();
			this->Hide();
		}

    }

	private: System::Void GameSelectForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
	{
		if (!closed)
		{
			closed = true;
			this->Close();
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Hide();
		Main->Show();

	}

	private: System::Void GameSelectForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		cobReaction->SelectedIndex = 0;
		cobSpeed->SelectedIndex = 0;
		cobTech->SelectedIndex = 0;
	}

	private: System::Void btnTech_MouseHover(System::Object^  sender, System::EventArgs^  e) 
	{
		gameSelectTip->Show("Play the Technique Game!", btnTech);
	}

	private: System::Void btnSpeed_MouseHover(System::Object^  sender, System::EventArgs^  e) 
	{
		gameSelectTip->Show("Play the Speed Game!", btnSpeed);
	}

	private: System::Void btnReaction_MouseHover(System::Object^  sender, System::EventArgs^  e) 
	{
		gameSelectTip->Show("Play the Reaction game!", btnReaction);
	}

	private: System::Void button1_MouseHover(System::Object^  sender, System::EventArgs^  e) 
	{
		gameSelectTip->Show("Takes you back to the main menu.", btnReturn);
	}

	private: System::Void btnUserStats_Click(System::Object^  sender, System::EventArgs^  e)
	{
		UserStatForm ^ u = gcnew UserStatForm(this, user);
		u->Show();
		this->Hide();
	}
};

}
