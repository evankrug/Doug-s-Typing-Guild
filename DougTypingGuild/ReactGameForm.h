#pragma once
#include "History.h"
#include "LoadUserStatsCommand.h"
#include "PlayReactGame.h"
#include <msclr\marshal.h>  
#include <msclr/marshal_cppstd.h>

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: This form creates the gui for the user to play the
//          React Game, while interacting with PlayReactGame, Popup, 
//          and Character Database.
//---------------------------------------------------------------------
namespace DougTypingGuild {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReactGameForm
	/// </summary>

	public ref class ReactGameForm : public System::Windows::Forms::Form
	{
	public:
		Form ^ Select;
      History *history;
	private: System::Windows::Forms::Label^  label1;
	public:



			 String ^ user;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	public:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
   private: System::Windows::Forms::ToolStripMenuItem^  undoToolStripMenuItem;
   private: System::Windows::Forms::ToolStripMenuItem^  redoToolStripMenuItem;
	private: System::Windows::Forms::Label^  lblSuccess;
	private: System::Windows::Forms::Timer^  labelTimer;

	public:

			 int currentProgress = 0;
		ReactGameForm(Form ^ SelectForm, int SelectedLevel, String ^ username, History *myHistory)
		{
			InitializeComponent();
			this->Location = System::Drawing::Point(0, 0);
			Select = SelectForm;
			level = SelectedLevel;
         user = username;
         history = myHistory;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ReactGameForm()
		{
			if (components)
			{
				delete components;
			}

			Select->Close();
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pcbBoard;
	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::ProgressBar^  pgbReact;
	private: System::Windows::Forms::Button^  btnStart;
	private: System::Windows::Forms::Label^  targetText;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		const int CENTER_LBL_X = 400;
		const int CENTER_LBL_Y = 150;
		bool closed = false;
		PlayReactGame * game = new PlayReactGame();
		Label ^ nextText;
		int level = 0;
		

	private: System::Windows::Forms::Timer^  timerWPM;
	private: System::Windows::Forms::TextBox^  txtLevel;
	private: System::Windows::Forms::TextBox^  txtWPM;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::Panel^  helpPanel;
	private: System::Windows::Forms::RichTextBox^  helpBox;
	private: System::Windows::Forms::ToolTip^  startTip;
	private: System::Windows::Forms::Timer^  wordTimer;
	private: System::Windows::Forms::Label^  secondTargetText;




	private: System::ComponentModel::IContainer^  components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ReactGameForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pcbBoard = (gcnew System::Windows::Forms::PictureBox());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->pgbReact = (gcnew System::Windows::Forms::ProgressBar());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->targetText = (gcnew System::Windows::Forms::Label());
			this->timerWPM = (gcnew System::Windows::Forms::Timer(this->components));
			this->txtLevel = (gcnew System::Windows::Forms::TextBox());
			this->txtWPM = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->helpPanel = (gcnew System::Windows::Forms::Panel());
			this->helpBox = (gcnew System::Windows::Forms::RichTextBox());
			this->startTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->wordTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->secondTargetText = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lblSuccess = (gcnew System::Windows::Forms::Label());
			this->labelTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbBoard))->BeginInit();
			this->helpPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem, this->undoToolStripMenuItem, this->redoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(984, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->exitToolStripMenuItem->Text = L"Exit Game";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &ReactGameForm::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &ReactGameForm::helpToolStripMenuItem_Click);
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->undoToolStripMenuItem->Text = L"Undo";
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ReactGameForm::undoToolStripMenuItem_Click);
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->redoToolStripMenuItem->Text = L"Redo";
			this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ReactGameForm::redoToolStripMenuItem_Click);
			// 
			// pcbBoard
			// 
			this->pcbBoard->Location = System::Drawing::Point(200, 9);
			this->pcbBoard->Margin = System::Windows::Forms::Padding(0);
			this->pcbBoard->Name = L"pcbBoard";
			this->pcbBoard->Size = System::Drawing::Size(494, 400);
			this->pcbBoard->TabIndex = 1;
			this->pcbBoard->TabStop = false;
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(696, 464);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(265, 20);
			this->txtInput->TabIndex = 2;
			this->startTip->SetToolTip(this->txtInput, L"Type what you see in the window here");
			this->txtInput->TextChanged += gcnew System::EventHandler(this, &ReactGameForm::txtInput_TextChanged);
			this->txtInput->MouseHover += gcnew System::EventHandler(this, &ReactGameForm::txtInput_MouseHover);
			// 
			// pgbReact
			// 
			this->pgbReact->Location = System::Drawing::Point(203, 504);
			this->pgbReact->Maximum = 20;
			this->pgbReact->Name = L"pgbReact";
			this->pgbReact->Size = System::Drawing::Size(673, 23);
			this->pgbReact->Step = 5;
			this->pgbReact->TabIndex = 3;
			this->startTip->SetToolTip(this->pgbReact, L"Shows your progress thorugh the level");
			this->pgbReact->MouseHover += gcnew System::EventHandler(this, &ReactGameForm::pgbReact_MouseHover);
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(886, 504);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(75, 23);
			this->btnStart->TabIndex = 4;
			this->btnStart->Text = L"Start";
			this->startTip->SetToolTip(this->btnStart, L"Starts the next level");
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &ReactGameForm::btnStart_Click);
			this->btnStart->MouseHover += gcnew System::EventHandler(this, &ReactGameForm::btnStart_MouseHover);
			// 
			// targetText
			// 
			this->targetText->AutoSize = true;
			this->targetText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->targetText->ForeColor = System::Drawing::Color::Red;
			this->targetText->Location = System::Drawing::Point(200, 9);
			this->targetText->Name = L"targetText";
			this->targetText->Size = System::Drawing::Size(274, 16);
			this->targetText->TabIndex = 5;
			this->targetText->Text = L"Random Words Pop Up in Random Location";
			// 
			// timerWPM
			// 
			this->timerWPM->Interval = 1000;
			this->timerWPM->Tick += gcnew System::EventHandler(this, &ReactGameForm::timerWPM_Tick);
			// 
			// txtLevel
			// 
			this->txtLevel->Location = System::Drawing::Point(380, 420);
			this->txtLevel->Name = L"txtLevel";
			this->txtLevel->ReadOnly = true;
			this->txtLevel->Size = System::Drawing::Size(51, 20);
			this->txtLevel->TabIndex = 6;
			// 
			// txtWPM
			// 
			this->txtWPM->Location = System::Drawing::Point(380, 462);
			this->txtWPM->Name = L"txtWPM";
			this->txtWPM->ReadOnly = true;
			this->txtWPM->Size = System::Drawing::Size(51, 20);
			this->txtWPM->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(208, 420);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Level:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(208, 462);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Words Per Minute:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(588, 464);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Type Here:";
			// 
			// helpPanel
			// 
			this->helpPanel->Controls->Add(this->helpBox);
			this->helpPanel->Location = System::Drawing::Point(12, 356);
			this->helpPanel->Name = L"helpPanel";
			this->helpPanel->Size = System::Drawing::Size(173, 202);
			this->helpPanel->TabIndex = 11;
			// 
			// helpBox
			// 
			this->helpBox->Location = System::Drawing::Point(0, 3);
			this->helpBox->Name = L"helpBox";
			this->helpBox->ReadOnly = true;
			this->helpBox->Size = System::Drawing::Size(180, 196);
			this->helpBox->TabIndex = 1;
			this->helpBox->Text = resources->GetString(L"helpBox.Text");
			// 
			// wordTimer
			// 
			this->wordTimer->Interval = 2000;
			this->wordTimer->Tick += gcnew System::EventHandler(this, &ReactGameForm::wordTimer_Tick);
			// 
			// secondTargetText
			// 
			this->secondTargetText->AutoSize = true;
			this->secondTargetText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->secondTargetText->Location = System::Drawing::Point(209, 100);
			this->secondTargetText->Name = L"secondTargetText";
			this->secondTargetText->Size = System::Drawing::Size(0, 16);
			this->secondTargetText->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(231, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 13;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(165, 300);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(706, 27);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(255, 300);
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// lblSuccess
			// 
			this->lblSuccess->AutoSize = true;
			this->lblSuccess->BackColor = System::Drawing::SystemColors::ControlDark;
			this->lblSuccess->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSuccess->ForeColor = System::Drawing::Color::ForestGreen;
			this->lblSuccess->Location = System::Drawing::Point(702, 356);
			this->lblSuccess->Name = L"lblSuccess";
			this->lblSuccess->Size = System::Drawing::Size(156, 20);
			this->lblSuccess->TabIndex = 16;
			this->lblSuccess->Text = L"Account created.  ";
			this->lblSuccess->Visible = false;
			// 
			// labelTimer
			// 
			this->labelTimer->Interval = 1000;
			this->labelTimer->Tick += gcnew System::EventHandler(this, &ReactGameForm::labelTimer_Tick);
			// 
			// ReactGameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 561);
			this->Controls->Add(this->lblSuccess);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->secondTargetText);
			this->Controls->Add(this->helpPanel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtWPM);
			this->Controls->Add(this->txtLevel);
			this->Controls->Add(this->targetText);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->pgbReact);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->pcbBoard);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ReactGameForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ReactGameForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ReactGameForm::ReactGameForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &ReactGameForm::ReactGameForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbBoard))->EndInit();
			this->helpPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Select->Show();
		this->Hide();
	}
	
	private: System::Void ReactGameForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
	{
		if (!closed)
		{
			closed = true;
			this->Close();
		}
	}
private: System::Void btnStart_Click(System::Object^  sender, System::EventArgs^  e)
{
	Unpause();
}

//----------------------------------------------------------------------
// Starts the game timer
//----------------------------------------------------------------------
	private: void Unpause()
	{
		level = game->GetLevel();  //get level from playReactGame
		
		game->PlayLevel(level);
		txtInput->Enabled = true;
		btnStart->Enabled = false;
		timerWPM->Enabled = true;
		wordTimer->Enabled = true;
		wordTimer->Start();
		timerWPM->Start();
		
		txtLevel->Text = level.ToString();
		txtWPM->Text = "0";
		GetNewWord(targetText);
		//ResetWordTimer(wordTimer, targetText);  //starts timer for target text
		targetText->ForeColor = System::Drawing::Color::Black;
		checkLevel();
		txtInput->Focus();
	}


 //----------------------------------------------------------------------
 // Makes the appropriate number of target texts appear according to 
 //the level number
 //----------------------------------------------------------------------
	private: void checkLevel()
	{
		//Figure out a way to use all the labels depending on the level
	}

 //----------------------------------------------------------------------
 // Makes a new word appear in a new location
 //----------------------------------------------------------------------
			 
	private: void GetNewWord(Label ^ l)
	{
		 string s = game->GetWord();
		 game->SetPopups(s);
		 std::string Model(s);

		 l->Text = gcnew String(Model.c_str()); //putting words into the target
		 int xLoc, yLoc;
		 game->ChangeTextLocation(xLoc, yLoc);        // Gets new location for the target text label
		 l->Location = System::Drawing::Point(xLoc, yLoc);  //sets thenew location for the target text label


		
		
		 
	}
	
	

private: System::Void timerWPM_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	txtWPM->Text = game->IncrTicks().ToString();//Displays WPM
	gcroot<Drawing::Image ^> target;
	if (pgbReact->Value > currentProgress && currentProgress == 0) {
		target = gcnew Drawing::Bitmap("BullsEye1(1).jpg");
		this->pictureBox2->BackgroundImage = target;
		currentProgress = 4;
	}
	else if (pgbReact->Value > currentProgress && currentProgress == 4) {
		target = gcnew Drawing::Bitmap("BullsEye2(1).jpg");
		this->pictureBox2->BackgroundImage = target;
		currentProgress = 8;
	}
	else if (pgbReact->Value > currentProgress && currentProgress == 8) {
		target = gcnew Drawing::Bitmap("BullsEye3(1).jpg");
		this->pictureBox2->BackgroundImage = target;
		currentProgress = 12;
	}
	else if (pgbReact->Value > currentProgress && currentProgress == 12) {
		target = gcnew Drawing::Bitmap("BullsEye4(1).jpg");
		this->pictureBox2->BackgroundImage = target;
		currentProgress = 16;
	}
	else if (pgbReact->Value > currentProgress && currentProgress == 16) {
		target = gcnew Drawing::Bitmap("BullsEye5(1).jpg");
		this->pictureBox2->BackgroundImage = target;
		currentProgress = 19;
	}
	else if (pgbReact->Value > currentProgress && currentProgress == 19) {
		target = gcnew Drawing::Bitmap("BullsEye(1).jpg");
		this->pictureBox2->BackgroundImage = target;
		currentProgress = 0;
	}
}

private: System::Void txtInput_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	game->countChars();
	string s;
	MarshalString(txtInput->Text, s);
	if (game->SearchWords(s)) // Checks if typed word matches the words in the popup array
	{
		game->CountWords();
		game->DecPops();
		//ResetWordTimer(wordTimer, targetText);
		if (txtInput->Text == targetText->Text)
			targetText->Text = "";
		if (txtInput->Text == secondTargetText->Text)
			secondTargetText->Text = "";
		if (txtInput->Text == label1->Text)
			label1->Text = "";
		txtInput->Text = "";
		pgbReact->Value++;
		
	}
	

	/*
	if (txtInput->Text == targetText->Text & targetText->Text != "")
	{
		GetNewWord(targetText);
		txtInput->Text = "";
		pgbReact->Value++;
	}
	*/
	if (pgbReact->Value == pgbReact->Maximum)
	{
		secondTargetText->Text = "";
		label1->Text = "";
		targetText->Location = System::Drawing::Point(192, 24); //center the text label for end of level message
		
			game->IncreaseLevel();  //move on to next level
			targetText->Text = "Good Job! Click start to begin level " + (game->GetLevel());
			pgbReact->Value = pgbReact->Minimum;
			gcroot<Drawing::Image ^> target;
			target = gcnew Drawing::Bitmap("BullsEye(1).jpg");
			this->pictureBox2->BackgroundImage = target;
			currentProgress = 0;
		
         string uName, wpm;
         MarshalString(user, uName);
         MarshalString(txtWPM->Text, wpm);
         Command *cmd = new LoadUserStatsCommand(uName, float(atoi(wpm.c_str())), LoadUserStatsCommand::STAT::WPM);
         history->doCommand(cmd);
		
		ResetLevel();
	}


}
		 private: void SwitchColors(Label ^ l, Label ^ b)
		 {
			 if (secondTargetText->Visible == true)
			 {
				 if (l->ForeColor == System::Drawing::Color::Red)
				 {
					 l->ForeColor == System::Drawing::Color::Green;
					 b->ForeColor == System::Drawing::Color::Red;
						
				 }
			 }
		 }
     //--------------------------------------------------------------------------
	// Resets the given timer
	//--------------------------------------------------------------------------
    private: void ResetWordTimer(Timer ^ t, Label ^ l)
	{
		 t->Enabled = false;
		 t->Enabled = true;  //restart timer
		 t->Interval = l->Text->Length * 2000; //provide 2 seconds for each letter
		 t->Start();  //start timer for next word
	}

			
	//--------------------------------------------------------------------------
	// Resets progress bar and disables input box until start button is pushed
	//--------------------------------------------------------------------------
	private: void ResetLevel()
	{
		pgbReact->Value = pgbReact->Minimum;  //reset progress bar
		btnStart->Enabled = true;
		txtInput->Enabled = false;
		game->EndLevel();
		wordTimer->Interval = game->GetPopInterval();
		//reset timer
		timerWPM->Enabled = false;
		wordTimer->Enabled = false;
    }

private: System::Void ReactGameForm_Load(System::Object^  sender, System::EventArgs^  e) 
{
	this->AcceptButton = btnStart;   //allows user to start game with enter key instead of mouse click
	game->SetLevel(level);
	txtInput->Enabled = false;
	helpPanel->Visible = false;
}
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{

	if (helpPanel->Visible == false)
		helpPanel->Visible = true;
	else
		helpPanel->Visible = false;
}
private: System::Void btnStart_MouseHover(System::Object^  sender, System::EventArgs^  e) 
{
	startTip->Show("Starts the next level", btnStart);
}

private: System::Void pgbReact_MouseHover(System::Object^  sender, System::EventArgs^  e) 
{
	startTip->Show("Shows your progress thorugh the level", pgbReact);
}
private: System::Void txtInput_MouseHover(System::Object^  sender, System::EventArgs^  e) 
{
	startTip->Show("Type what you see in the window here", txtInput);
	
}

private: System::Void wordTimer_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	if (game->CountPops())
	{
		ResetLevel();
		targetText->Location = System::Drawing::Point(400, 200);
		targetText->Text = "You didn't type all the words fast enough!";
		label1->Text = "";
		secondTargetText->Text = "";

      string uName, wpm;
      MarshalString(user, uName);
      MarshalString(txtWPM->Text, wpm);
      Command *cmd = new LoadUserStatsCommand(uName, float(atoi(wpm.c_str())), LoadUserStatsCommand::STAT::WPM);
      history->doCommand(cmd);
	}
	else
	{
		GetNextLabel();
		GetNewWord(nextText);
	}

}
private: void GetNextLabel()
{
	if (targetText->Text->Equals(""))
		nextText = targetText;
	else if (secondTargetText->Text->Equals(""))
		nextText = secondTargetText;
	else
		nextText = label1;
}

private:  void MarshalString(String ^ s, string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}
private: System::Void undoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
   if (history->undoCommand())
   {
      lblSuccess->Text = "Game Statistics were removed";
      lblSuccess->Visible = true;
      labelTimer->Start();
   }
}
private: System::Void redoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
   if (history->redoCommand())
   {
      lblSuccess->Text = "Game Statistics were readded";
      lblSuccess->Visible = true;
      labelTimer->Start();
   }
}
private: System::Void labelTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
	lblSuccess->Visible = false;
	labelTimer->Stop();
}
};
}
