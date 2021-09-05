#pragma once

#include "LoadUserStatsCommand.h"
#include "Knight.h"
#include "PlaySpeedGame.h"
#include <msclr\marshal.h>  
#include <msclr/marshal_cppstd.h>
#include "History.h"

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: This form creates the gui for the user to play the
//          Speed Game, while interacting with PlaySpeedGame and
//          Words Database.
//---------------------------------------------------------------------
namespace DougTypingGuild
{

   using namespace System;
   using namespace System::ComponentModel;
   using namespace System::Collections;
   using namespace System::Windows::Forms;
   using namespace System::Data;
   using namespace System::Drawing;

   /// <summary>
   /// Summary for SpeedGameForm
   /// </summary>

   public ref class SpeedGameForm : public System::Windows::Forms::Form
   {
   public:
      Form ^ Select;

   private: System::Windows::Forms::ToolStripMenuItem^  undoToolStripMenuItem;
   private: System::Windows::Forms::ToolStripMenuItem^  rToolStripMenuItem;
   public:
      String ^ user;
   private: System::Windows::Forms::Label^  lblAction;
   private: System::Windows::Forms::Timer^  lblTimer;
   public:
      History *history;
      SpeedGameForm(Form ^ SelectForm, int SelectedLevel, String ^ username, History *myHistory)
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
      ~SpeedGameForm()
      {
         if (components)
         {
            delete components;
         }

         Select->Close();
      }
   private: System::Windows::Forms::MenuStrip^  menuStrip1;
   protected:
   private: System::Windows::Forms::ToolStripMenuItem^  fieToolStripMenuItem;
   private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
   private: System::Windows::Forms::PictureBox^  pcbGrass;





   private: System::Windows::Forms::TextBox^  txtOutput;
   private: System::Windows::Forms::TextBox^  txtInput;

   private: System::Windows::Forms::Button^  btnStart;

   private:
      bool closed = false;
      const int START_X = 20;
      int level = 0;
      int time = 500;
      bool didFail = false;
      PlaySpeedGame * game = new PlaySpeedGame();
      Knight * k = new Knight(time, level);
   private: System::Windows::Forms::Timer^  knightTimer;

   private: System::Windows::Forms::Label^  label2;
   private: System::Windows::Forms::Label^  label3;
   private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
   private: System::Windows::Forms::TextBox^  txtLevel;
   private: System::Windows::Forms::TextBox^  txtWPM;


   private: System::Windows::Forms::Label^  label1;
   private: System::Windows::Forms::Label^  label4;
   private: System::Windows::Forms::Timer^  timerWPM;
   private: System::Windows::Forms::PictureBox^  imgknight;
   private: System::Windows::Forms::PictureBox^  imgDoug;
   private: System::Windows::Forms::Panel^  helpPanel;

   private: System::Windows::Forms::RichTextBox^  helpBox;
   private: System::Windows::Forms::ToolTip^  speedToolTip;







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
               System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SpeedGameForm::typeid));
               this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
               this->fieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->rToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->pcbGrass = (gcnew System::Windows::Forms::PictureBox());
               this->txtOutput = (gcnew System::Windows::Forms::TextBox());
               this->txtInput = (gcnew System::Windows::Forms::TextBox());
               this->btnStart = (gcnew System::Windows::Forms::Button());
               this->knightTimer = (gcnew System::Windows::Forms::Timer(this->components));
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->txtLevel = (gcnew System::Windows::Forms::TextBox());
               this->txtWPM = (gcnew System::Windows::Forms::TextBox());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->timerWPM = (gcnew System::Windows::Forms::Timer(this->components));
               this->imgknight = (gcnew System::Windows::Forms::PictureBox());
               this->imgDoug = (gcnew System::Windows::Forms::PictureBox());
               this->helpPanel = (gcnew System::Windows::Forms::Panel());
               this->helpBox = (gcnew System::Windows::Forms::RichTextBox());
               this->speedToolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
               this->lblAction = (gcnew System::Windows::Forms::Label());
               this->lblTimer = (gcnew System::Windows::Forms::Timer(this->components));
               this->menuStrip1->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbGrass))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgknight))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgDoug))->BeginInit();
               this->helpPanel->SuspendLayout();
               this->SuspendLayout();
               // 
               // menuStrip1
               // 
               this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4)
               {
                  this->fieToolStripMenuItem,
                     this->helpToolStripMenuItem, this->undoToolStripMenuItem, this->rToolStripMenuItem
               });
               this->menuStrip1->Location = System::Drawing::Point(0, 0);
               this->menuStrip1->Name = L"menuStrip1";
               this->menuStrip1->Size = System::Drawing::Size(984, 24);
               this->menuStrip1->TabIndex = 0;
               this->menuStrip1->Text = L"menuStrip1";
               // 
               // fieToolStripMenuItem
               // 
               this->fieToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
               this->fieToolStripMenuItem->Name = L"fieToolStripMenuItem";
               this->fieToolStripMenuItem->Size = System::Drawing::Size(37, 20);
               this->fieToolStripMenuItem->Text = L"File";
               // 
               // exitToolStripMenuItem
               // 
               this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
               this->exitToolStripMenuItem->Size = System::Drawing::Size(126, 22);
               this->exitToolStripMenuItem->Text = L"Exit Game";
               this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &SpeedGameForm::exitToolStripMenuItem_Click);
               // 
               // helpToolStripMenuItem
               // 
               this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
               this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
               this->helpToolStripMenuItem->Text = L"Help";
               this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &SpeedGameForm::helpToolStripMenuItem_Click);
               // 
               // undoToolStripMenuItem
               // 
               this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
               this->undoToolStripMenuItem->Size = System::Drawing::Size(48, 20);
               this->undoToolStripMenuItem->Text = L"Undo";
               this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &SpeedGameForm::undoToolStripMenuItem_Click);
               // 
               // rToolStripMenuItem
               // 
               this->rToolStripMenuItem->Name = L"rToolStripMenuItem";
               this->rToolStripMenuItem->Size = System::Drawing::Size(46, 20);
               this->rToolStripMenuItem->Text = L"Redo";
               this->rToolStripMenuItem->Click += gcnew System::EventHandler(this, &SpeedGameForm::rToolStripMenuItem_Click);
               // 
               // pcbGrass
               // 
               this->pcbGrass->BackColor = System::Drawing::Color::SeaGreen;
               this->pcbGrass->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbGrass.BackgroundImage")));
               this->pcbGrass->Location = System::Drawing::Point(20, 170);
               this->pcbGrass->Name = L"pcbGrass";
               this->pcbGrass->Size = System::Drawing::Size(958, 139);
               this->pcbGrass->TabIndex = 1;
               this->pcbGrass->TabStop = false;
               // 
               // txtOutput
               // 
               this->txtOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
               this->txtOutput->Location = System::Drawing::Point(117, 340);
               this->txtOutput->Name = L"txtOutput";
               this->txtOutput->ReadOnly = true;
               this->txtOutput->Size = System::Drawing::Size(861, 26);
               this->txtOutput->TabIndex = 3;
               this->speedToolTip->SetToolTip(this->txtOutput, L"Type this text in the box below");
               this->txtOutput->MouseHover += gcnew System::EventHandler(this, &SpeedGameForm::txtOutput_MouseHover);
               // 
               // txtInput
               // 
               this->txtInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->txtInput->Location = System::Drawing::Point(117, 389);
               this->txtInput->Name = L"txtInput";
               this->txtInput->Size = System::Drawing::Size(861, 26);
               this->txtInput->TabIndex = 4;
               this->speedToolTip->SetToolTip(this->txtInput, L"Type the above text here");
               this->txtInput->TextChanged += gcnew System::EventHandler(this, &SpeedGameForm::txtInput_TextChanged);
               this->txtInput->MouseHover += gcnew System::EventHandler(this, &SpeedGameForm::txtInput_MouseHover);
               // 
               // btnStart
               // 
               this->btnStart->Location = System::Drawing::Point(117, 440);
               this->btnStart->Name = L"btnStart";
               this->btnStart->Size = System::Drawing::Size(98, 26);
               this->btnStart->TabIndex = 6;
               this->btnStart->Text = L"Start";
               this->speedToolTip->SetToolTip(this->btnStart, L"Starts the next level");
               this->btnStart->UseVisualStyleBackColor = true;
               this->btnStart->Click += gcnew System::EventHandler(this, &SpeedGameForm::btnStart_Click);
               this->btnStart->MouseHover += gcnew System::EventHandler(this, &SpeedGameForm::btnStart_MouseHover);
               // 
               // knightTimer
               // 
               this->knightTimer->Enabled = true;
               this->knightTimer->Interval = 1500;
               this->knightTimer->Tick += gcnew System::EventHandler(this, &SpeedGameForm::knightTimer_Tick);
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->label2->Location = System::Drawing::Point(68, 346);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(43, 20);
               this->label2->TabIndex = 7;
               this->label2->Text = L"Text:";
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->label3->Location = System::Drawing::Point(25, 392);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(86, 20);
               this->label3->TabIndex = 8;
               this->label3->Text = L"Type Here:";
               // 
               // txtLevel
               // 
               this->txtLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->txtLevel->Location = System::Drawing::Point(731, 514);
               this->txtLevel->Name = L"txtLevel";
               this->txtLevel->ReadOnly = true;
               this->txtLevel->Size = System::Drawing::Size(100, 26);
               this->txtLevel->TabIndex = 9;
               this->txtLevel->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
               // 
               // txtWPM
               // 
               this->txtWPM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->txtWPM->Location = System::Drawing::Point(731, 440);
               this->txtWPM->Name = L"txtWPM";
               this->txtWPM->ReadOnly = true;
               this->txtWPM->Size = System::Drawing::Size(100, 26);
               this->txtWPM->TabIndex = 10;
               this->txtWPM->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->label1->Location = System::Drawing::Point(639, 514);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(50, 20);
               this->label1->TabIndex = 11;
               this->label1->Text = L"Level:";
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->label4->Location = System::Drawing::Point(638, 440);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(51, 20);
               this->label4->TabIndex = 12;
               this->label4->Text = L"WPM:";
               this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
               // 
               // timerWPM
               // 
               this->timerWPM->Enabled = true;
               this->timerWPM->Interval = 1000;
               this->timerWPM->Tick += gcnew System::EventHandler(this, &SpeedGameForm::timerWPM_Tick);
               // 
               // imgknight
               // 
               this->imgknight->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgknight.BackgroundImage")));
               this->imgknight->Location = System::Drawing::Point(20, 170);
               this->imgknight->Name = L"imgknight";
               this->imgknight->Size = System::Drawing::Size(195, 139);
               this->imgknight->TabIndex = 13;
               this->imgknight->TabStop = false;
               // 
               // imgDoug
               // 
               this->imgDoug->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgDoug.BackgroundImage")));
               this->imgDoug->Location = System::Drawing::Point(182, 170);
               this->imgDoug->Name = L"imgDoug";
               this->imgDoug->Size = System::Drawing::Size(207, 139);
               this->imgDoug->TabIndex = 14;
               this->imgDoug->TabStop = false;
               // 
               // helpPanel
               // 
               this->helpPanel->Controls->Add(this->helpBox);
               this->helpPanel->Location = System::Drawing::Point(21, 27);
               this->helpPanel->Name = L"helpPanel";
               this->helpPanel->Size = System::Drawing::Size(424, 124);
               this->helpPanel->TabIndex = 15;
               // 
               // helpBox
               // 
               this->helpBox->Location = System::Drawing::Point(9, 4);
               this->helpBox->Name = L"helpBox";
               this->helpBox->ReadOnly = true;
               this->helpBox->Size = System::Drawing::Size(412, 117);
               this->helpBox->TabIndex = 1;
               this->helpBox->Text = resources->GetString(L"helpBox.Text");
               // 
               // lblAction
               // 
               this->lblAction->AutoSize = true;
               this->lblAction->BackColor = System::Drawing::SystemColors::ControlDark;
               this->lblAction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->lblAction->ForeColor = System::Drawing::Color::ForestGreen;
               this->lblAction->Location = System::Drawing::Point(221, 440);
               this->lblAction->Name = L"lblAction";
               this->lblAction->Size = System::Drawing::Size(156, 20);
               this->lblAction->TabIndex = 21;
               this->lblAction->Text = L"Account created.  ";
               this->lblAction->Visible = false;
               // 
               // lblTimer
               // 
               this->lblTimer->Interval = 1000;
               this->lblTimer->Tick += gcnew System::EventHandler(this, &SpeedGameForm::lblTimer_Tick);
               // 
               // SpeedGameForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(984, 561);
               this->Controls->Add(this->lblAction);
               this->Controls->Add(this->helpPanel);
               this->Controls->Add(this->imgDoug);
               this->Controls->Add(this->imgknight);
               this->Controls->Add(this->label4);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->txtWPM);
               this->Controls->Add(this->txtLevel);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->btnStart);
               this->Controls->Add(this->txtInput);
               this->Controls->Add(this->txtOutput);
               this->Controls->Add(this->pcbGrass);
               this->Controls->Add(this->menuStrip1);
               this->MainMenuStrip = this->menuStrip1;
               this->Name = L"SpeedGameForm";
               this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
               this->Text = L"SpeedGameForm";
               this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &SpeedGameForm::SpeedGameForm_FormClosed);
               this->Load += gcnew System::EventHandler(this, &SpeedGameForm::SpeedGameForm_Load);
               this->menuStrip1->ResumeLayout(false);
               this->menuStrip1->PerformLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbGrass))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgknight))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgDoug))->EndInit();
               this->helpPanel->ResumeLayout(false);
               this->ResumeLayout(false);
               this->PerformLayout();

            }
#pragma endregion
            //----------------------------------------------------------------------
            // 
            //----------------------------------------------------------------------
   private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
   {
      Select->Show();
      this->Hide();
   }

            //----------------------------------------------------------------------
            // 
            //----------------------------------------------------------------------
   private: System::Void SpeedGameForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e)
   {
      if (!closed)
      {
         closed = true;
         this->Close();
      }
   }

            //----------------------------------------------------------------------
            // Moves the knight across the screen. If the knight catches the character,
            // the level resets.
            //----------------------------------------------------------------------
   private: System::Void knightTimer_Tick(System::Object^  sender, System::EventArgs^  e)
   {


      if (pcbGrass->Width > imgknight->Right)
      {
         imgknight->Left = k->Movement(imgknight->Left);
      }
      else
      {
         imgDoug->Left = START_X + 182;
         imgknight->Left = START_X;
         knightTimer->Stop();
         txtOutput->Text = "Please Try Again!";
         txtInput->Enabled = false;
         btnStart->Enabled = true;
         txtInput->Text = "";

         string uName, wpm;
         MarshalString(user, uName);
         MarshalString(txtWPM->Text, wpm);
         LoadUserStatsCommand *cmd = new LoadUserStatsCommand(uName, float(atoi(wpm.c_str())), LoadUserStatsCommand::STAT::WPM);
         history->doCommand(cmd);
      }
   }
            //----------------------------------------------------------------------
            // 
            //----------------------------------------------------------------------
   private: System::Void btnStart_Click(System::Object^  sender, System::EventArgs^  e)
   {
      Unpause();
   }
            //----------------------------------------------------------------------
            // 
            //----------------------------------------------------------------------
   private: System::Void txtInput_TextChanged(System::Object^  sender, System::EventArgs^  e)
   {
      game->countChars();
      if (txtInput->Text->EndsWith(" ")) // Adds a word to the word count if the last character typed was a space.
      {
         game->CountWords();
      }

      if (txtInput->Text == txtOutput->Text & txtOutput->Text != "")
      {
         imgDoug->Left = imgDoug->Left + (int)txtOutput->Text->Length + 10;
         //pgbSpeed->Value++;
         GetNewWord();
         txtInput->Text = "";
      }


      if (/*pgbSpeed->Value == pgbSpeed->Maximum*/ imgDoug->Right >= pcbGrass->Width)
      {
         imgDoug->Left = START_X + 182; //added for doug
         imgknight->Left = START_X;
         knightTimer->Enabled = false;
         txtInput->Enabled = false;
         timerWPM->Enabled = false;
         btnStart->Enabled = true;
         //pgbSpeed->Value = pgbSpeed->Minimum;

         txtOutput->Text = "Good Job!";
         txtInput->Text = "";
         level++;

         string uName, wpm;
         MarshalString(user, uName);
         MarshalString(txtWPM->Text, wpm);
         LoadUserStatsCommand *cmd = new LoadUserStatsCommand(uName, float(atoi(wpm.c_str())), LoadUserStatsCommand::STAT::WPM);
         history->doCommand(cmd);
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

             //----------------------------------------------------------------------
             // Loads the Speed game form
             //----------------------------------------------------------------------
   private: System::Void SpeedGameForm_Load(System::Object^  sender, System::EventArgs^  e)
   {
      this->AcceptButton = btnStart;   //allows user to start game with enter key instead of mouse click
      knightTimer->Stop();
      timerWPM->Stop();
      txtInput->Enabled = false;

      helpPanel->Visible = false;

   }


            //----------------------------------------------------------------------
            // Starts the game timer
            //----------------------------------------------------------------------
   private: void Unpause()
   {
      k->UpdateLevel(level);
      game->PlayLevel(level);
      knightTimer->Interval = k->getSpeed();
      txtInput->Enabled = true;
      btnStart->Enabled = false;
      timerWPM->Start();
      knightTimer->Start();
      txtLevel->Text = level.ToString();
      txtWPM->Text = "0";
      GetNewWord();
      txtInput->Focus();
   }
            void Pause()
            {
               txtInput->Enabled = false;
               btnStart->Enabled = true;
               timerWPM->Stop();
               knightTimer->Stop();
               txtLevel->Text = level.ToString();
               txtWPM->Text = "0";
            }



   private: void GetNewWord()
   {
      string s = game->GetWord() + " ";
      std::string Model(s);
      txtOutput->Text = gcnew String(Model.c_str());
   }


            //----------------------------------------------------------------------
            // Displays the help form for the speed game
            //----------------------------------------------------------------------
   private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
   {
      //	SpeedGameHelp ^ f = gcnew SpeedGameHelp(); // display help form
      //	f->ShowDialog();
      if (helpPanel->Visible == false)
         helpPanel->Visible = true;
      else
         helpPanel->Visible = false;

   }

   private: System::Void timerWPM_Tick(System::Object^  sender, System::EventArgs^  e)
   {

      txtWPM->Text = game->IncrTicks().ToString();//Displays WPM


   }

   private: System::Void btnStart_MouseHover(System::Object^  sender, System::EventArgs^  e)
   {
      speedToolTip->Show("Starts the next level", btnStart);
   }
   private: System::Void txtInput_MouseHover(System::Object^  sender, System::EventArgs^  e)
   {
      speedToolTip->Show("Type the above text here", txtInput);
   }
   private: System::Void txtOutput_MouseHover(System::Object^  sender, System::EventArgs^  e)
   {
      speedToolTip->Show("Type this text in the box below", txtOutput);
   }
   private: System::Void undoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
   {
      if (history->undoCommand())
      {
         lblAction->Text = "Game Statistics were readded";
         lblAction->Visible = true;
         lblTimer->Start();
      }
   }
   private: System::Void rToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
   {
      if (history->redoCommand())
      {
         lblAction->Text = "Game Statistics were readded";
         lblAction->Visible = true;
         lblTimer->Start();
      }
   }
   private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
   {
   }
   private: System::Void lblTimer_Tick(System::Object^  sender, System::EventArgs^  e)
   {
      lblAction->Visible = false;
      lblTimer->Stop();
   }
   };
}
