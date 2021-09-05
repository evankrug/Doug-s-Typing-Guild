#pragma once
#include "PlayTechGame.h"
#include <sstream>
#include <string>
#include "Accuracy.h"
#include <msclr\marshal.h>  
#include <msclr/marshal_cppstd.h>
#include <math.h>
#include <float.h>
#include "LoadUserStatsCommand.h"
#include "History.h"
#include "LoadUserStatsCommand.h"

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: This form creates the gui for the user to play the
//          Tech Game, while interacting with PlayTechGame and
//          Character Database.
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
   /// Summary for TechGameForm
   /// </summary>

   public ref class TechGameForm : public System::Windows::Forms::Form
   {
   public:
      Form ^ Select;
      String ^ user;
   private: System::Windows::Forms::Label^  lblAction;
   private: System::Windows::Forms::Timer^  lblTimer;
   public:

   public:
      History *history;

      TechGameForm(Form ^ SelectForm, int StartLevel, String ^ username, History *myHistory)
      {
         InitializeComponent();
         this->Location = System::Drawing::Point(0, 0);
         Select = SelectForm;
         game->SetLevel(StartLevel);
         user = username;
         history = myHistory;
      }

   protected:
      /// <summary>
      /// Clean up any resources being used.
      /// </summary>
      ~TechGameForm()
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
   private: System::Windows::Forms::PictureBox^  pcbKeyboard;
   private: System::Windows::Forms::RichTextBox^  rtbOutput;
   private: System::Windows::Forms::TextBox^  txtInput;
   private: System::Windows::Forms::ToolStripMenuItem^  undoToolStripMenuItem;
   private: System::Windows::Forms::ToolStripMenuItem^  redoToolStripMenuItem;



   private: System::Windows::Forms::TextBox^  txtOutmsg;
   private: System::Windows::Forms::ProgressBar^  pgbTech;



   private: System::Windows::Forms::Button^  startbtn;

   protected:



   private:
      /// <summary>
      /// Required designer variable.
      /// </summary>

      bool closed = false;
      PlayTechGame * game = new PlayTechGame();
   private: System::Windows::Forms::PictureBox^  pictureBox1;
   private: System::Windows::Forms::Label^  label1;
   private: System::Windows::Forms::Label^  label2;
   private: System::Windows::Forms::TextBox^  txtAccCum;
   private: System::Windows::Forms::TextBox^  txtAccCurrent;
   private: System::Windows::Forms::TextBox^  txtLevel;

   private: System::Windows::Forms::Label^  label3;
   private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
   private: System::Windows::Forms::Label^  TextBarLbl;
   private: System::Windows::Forms::Label^  InputBarLbl;
   private: System::Windows::Forms::Timer^  techGameTimer;
   private: System::Windows::Forms::Panel^  helpPanel;
   private: System::Windows::Forms::RichTextBox^  helpBox;
   private: System::Windows::Forms::ToolTip^  startTip;




   private: System::ComponentModel::IContainer^  components;





#pragma region Windows Form Designer generated code
            /// <summary>
            /// Required method for Designer support - do not modify
            /// the contents of this method with the code editor.
            /// </summary>
            void InitializeComponent(void)
            {
               this->components = (gcnew System::ComponentModel::Container());
               System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TechGameForm::typeid));
               this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
               this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->pcbKeyboard = (gcnew System::Windows::Forms::PictureBox());
               this->rtbOutput = (gcnew System::Windows::Forms::RichTextBox());
               this->txtInput = (gcnew System::Windows::Forms::TextBox());
               this->txtOutmsg = (gcnew System::Windows::Forms::TextBox());
               this->pgbTech = (gcnew System::Windows::Forms::ProgressBar());
               this->startbtn = (gcnew System::Windows::Forms::Button());
               this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->txtAccCum = (gcnew System::Windows::Forms::TextBox());
               this->txtAccCurrent = (gcnew System::Windows::Forms::TextBox());
               this->txtLevel = (gcnew System::Windows::Forms::TextBox());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->TextBarLbl = (gcnew System::Windows::Forms::Label());
               this->InputBarLbl = (gcnew System::Windows::Forms::Label());
               this->techGameTimer = (gcnew System::Windows::Forms::Timer(this->components));
               this->helpPanel = (gcnew System::Windows::Forms::Panel());
               this->helpBox = (gcnew System::Windows::Forms::RichTextBox());
               this->startTip = (gcnew System::Windows::Forms::ToolTip(this->components));
               this->lblAction = (gcnew System::Windows::Forms::Label());
               this->lblTimer = (gcnew System::Windows::Forms::Timer(this->components));
               this->menuStrip1->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbKeyboard))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
               this->helpPanel->SuspendLayout();
               this->SuspendLayout();
               // 
               // menuStrip1
               // 
               this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4)
               {
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
               this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &TechGameForm::exitToolStripMenuItem_Click);
               // 
               // helpToolStripMenuItem
               // 
               this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
               this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
               this->helpToolStripMenuItem->Text = L"Help";
               this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &TechGameForm::helpToolStripMenuItem_Click);
               // 
               // undoToolStripMenuItem
               // 
               this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
               this->undoToolStripMenuItem->Size = System::Drawing::Size(48, 20);
               this->undoToolStripMenuItem->Text = L"Undo";
               this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &TechGameForm::undoToolStripMenuItem_Click);
               // 
               // redoToolStripMenuItem
               // 
               this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
               this->redoToolStripMenuItem->Size = System::Drawing::Size(46, 20);
               this->redoToolStripMenuItem->Text = L"Redo";
               this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &TechGameForm::redoToolStripMenuItem_Click);
               // 
               // pcbKeyboard
               // 
               this->pcbKeyboard->Location = System::Drawing::Point(290, 280);
               this->pcbKeyboard->Name = L"pcbKeyboard";
               this->pcbKeyboard->Size = System::Drawing::Size(347, 120);
               this->pcbKeyboard->TabIndex = 1;
               this->pcbKeyboard->TabStop = false;
               // 
               // rtbOutput
               // 
               this->rtbOutput->Enabled = false;
               this->rtbOutput->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
               this->rtbOutput->Location = System::Drawing::Point(669, 41);
               this->rtbOutput->Name = L"rtbOutput";
               this->rtbOutput->Size = System::Drawing::Size(273, 215);
               this->rtbOutput->TabIndex = 2;
               this->rtbOutput->Text = L"Prepareth thy index fingers. Lay thy left index on F and thy right on J, as well "
                  L"as thine thumbs on yonder space bar!";
               // 
               // txtInput
               // 
               this->txtInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->txtInput->Location = System::Drawing::Point(290, 453);
               this->txtInput->Name = L"txtInput";
               this->txtInput->ShortcutsEnabled = false;
               this->txtInput->Size = System::Drawing::Size(515, 31);
               this->txtInput->TabIndex = 3;
               this->startTip->SetToolTip(this->txtInput, L"Type the above text here");
               this->txtInput->TextChanged += gcnew System::EventHandler(this, &TechGameForm::txtInput_TextChanged);
               this->txtInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TechGameForm::txtInput_KeyPress);
               this->txtInput->MouseHover += gcnew System::EventHandler(this, &TechGameForm::txtInput_MouseHover);
               // 
               // txtOutmsg
               // 
               this->txtOutmsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->txtOutmsg->Location = System::Drawing::Point(290, 406);
               this->txtOutmsg->Name = L"txtOutmsg";
               this->txtOutmsg->ReadOnly = true;
               this->txtOutmsg->ShortcutsEnabled = false;
               this->txtOutmsg->Size = System::Drawing::Size(515, 31);
               this->txtOutmsg->TabIndex = 4;
               this->startTip->SetToolTip(this->txtOutmsg, L"Type this text in the box below");
               this->txtOutmsg->MouseHover += gcnew System::EventHandler(this, &TechGameForm::txtOutmsg_MouseHover);
               // 
               // pgbTech
               // 
               this->pgbTech->Location = System::Drawing::Point(164, 502);
               this->pgbTech->Maximum = 10;
               this->pgbTech->Name = L"pgbTech";
               this->pgbTech->Size = System::Drawing::Size(641, 23);
               this->pgbTech->TabIndex = 5;
               // 
               // startbtn
               // 
               this->startbtn->Location = System::Drawing::Point(867, 502);
               this->startbtn->Name = L"startbtn";
               this->startbtn->Size = System::Drawing::Size(75, 23);
               this->startbtn->TabIndex = 7;
               this->startbtn->Text = L"Start";
               this->startTip->SetToolTip(this->startbtn, L"Starts the next level");
               this->startbtn->UseVisualStyleBackColor = true;
               this->startbtn->Click += gcnew System::EventHandler(this, &TechGameForm::startbtn_Click);
               this->startbtn->MouseHover += gcnew System::EventHandler(this, &TechGameForm::startbtn_MouseHover);
               // 
               // pictureBox1
               // 
               this->pictureBox1->Location = System::Drawing::Point(346, 27);
               this->pictureBox1->Name = L"pictureBox1";
               this->pictureBox1->Size = System::Drawing::Size(265, 229);
               this->pictureBox1->TabIndex = 8;
               this->pictureBox1->TabStop = false;
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->label1->Location = System::Drawing::Point(654, 318);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(151, 16);
               this->label1->TabIndex = 9;
               this->label1->Text = L"Last line Accuracy %";
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->label2->Location = System::Drawing::Point(831, 318);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(123, 16);
               this->label2->TabIndex = 10;
               this->label2->Text = L"Level Acuracy %";
               // 
               // txtAccCum
               // 
               this->txtAccCum->Enabled = false;
               this->txtAccCum->Location = System::Drawing::Point(887, 356);
               this->txtAccCum->Name = L"txtAccCum";
               this->txtAccCum->Size = System::Drawing::Size(55, 20);
               this->txtAccCum->TabIndex = 12;
               // 
               // txtAccCurrent
               // 
               this->txtAccCurrent->Enabled = false;
               this->txtAccCurrent->Location = System::Drawing::Point(754, 356);
               this->txtAccCurrent->Name = L"txtAccCurrent";
               this->txtAccCurrent->Size = System::Drawing::Size(51, 20);
               this->txtAccCurrent->TabIndex = 13;
               // 
               // txtLevel
               // 
               this->txtLevel->Enabled = false;
               this->txtLevel->Location = System::Drawing::Point(900, 406);
               this->txtLevel->Name = L"txtLevel";
               this->txtLevel->Size = System::Drawing::Size(42, 20);
               this->txtLevel->TabIndex = 14;
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->label3->Location = System::Drawing::Point(831, 406);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(46, 16);
               this->label3->TabIndex = 15;
               this->label3->Text = L"Level";
               // 
               // TextBarLbl
               // 
               this->TextBarLbl->AutoSize = true;
               this->TextBarLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->TextBarLbl->Location = System::Drawing::Point(198, 421);
               this->TextBarLbl->Name = L"TextBarLbl";
               this->TextBarLbl->Size = System::Drawing::Size(42, 16);
               this->TextBarLbl->TabIndex = 17;
               this->TextBarLbl->Text = L"Text:";
               // 
               // InputBarLbl
               // 
               this->InputBarLbl->AutoSize = true;
               this->InputBarLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                  static_cast<System::Byte>(0)));
               this->InputBarLbl->Location = System::Drawing::Point(198, 463);
               this->InputBarLbl->Name = L"InputBarLbl";
               this->InputBarLbl->Size = System::Drawing::Size(86, 16);
               this->InputBarLbl->TabIndex = 18;
               this->InputBarLbl->Text = L"Type Here:";
               // 
               // techGameTimer
               // 
               this->techGameTimer->Interval = 30000;
               this->techGameTimer->Tick += gcnew System::EventHandler(this, &TechGameForm::TechGameTimer_Tick);
               // 
               // helpPanel
               // 
               this->helpPanel->Controls->Add(this->helpBox);
               this->helpPanel->Location = System::Drawing::Point(12, 41);
               this->helpPanel->Name = L"helpPanel";
               this->helpPanel->Size = System::Drawing::Size(246, 218);
               this->helpPanel->TabIndex = 19;
               // 
               // helpBox
               // 
               this->helpBox->Location = System::Drawing::Point(3, 14);
               this->helpBox->Name = L"helpBox";
               this->helpBox->ReadOnly = true;
               this->helpBox->Size = System::Drawing::Size(225, 188);
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
               this->lblAction->Location = System::Drawing::Point(12, 318);
               this->lblAction->Name = L"lblAction";
               this->lblAction->Size = System::Drawing::Size(156, 20);
               this->lblAction->TabIndex = 20;
               this->lblAction->Text = L"Account created.  ";
               this->lblAction->Visible = false;
               // 
               // lblTimer
               // 
               this->lblTimer->Interval = 1000;
               this->lblTimer->Tick += gcnew System::EventHandler(this, &TechGameForm::lblTimer_Tick);
               // 
               // TechGameForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(984, 561);
               this->Controls->Add(this->lblAction);
               this->Controls->Add(this->helpPanel);
               this->Controls->Add(this->InputBarLbl);
               this->Controls->Add(this->TextBarLbl);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->txtLevel);
               this->Controls->Add(this->txtAccCurrent);
               this->Controls->Add(this->txtAccCum);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->pictureBox1);
               this->Controls->Add(this->startbtn);
               this->Controls->Add(this->pgbTech);
               this->Controls->Add(this->txtOutmsg);
               this->Controls->Add(this->txtInput);
               this->Controls->Add(this->rtbOutput);
               this->Controls->Add(this->pcbKeyboard);
               this->Controls->Add(this->menuStrip1);
               this->Name = L"TechGameForm";
               this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
               this->Text = L"TechGameForm";
               this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TechGameForm::TechGameForm_FormClosed);
               this->Load += gcnew System::EventHandler(this, &TechGameForm::TechGameForm_Load);
               this->menuStrip1->ResumeLayout(false);
               this->menuStrip1->PerformLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbKeyboard))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
               this->helpPanel->ResumeLayout(false);
               this->ResumeLayout(false);
               this->PerformLayout();

            }
#pragma endregion
   private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
   {
      this->Hide();
      Select->Show();

   }

            //-----------------------------------------------
            // Starts the level and sets up the appropriate images
            //----------------------------------------------
   private: System::Void startbtn_Click(System::Object^  sender, System::EventArgs^  e)
   {
      txtInput->Text = "";
      txtOutmsg->Text = "";
      startbtn->Enabled = false;
      txtInput->Enabled = true;

      this->txtInput->Select(); //Puts the cursor on the input line

      techGameTimer->Enabled = true;
      txtLevel->Text = game->GetLevel().ToString();
      game->PlayGame();// start next level

      string  tempString = game->GetDougSpeech();
      std::string Model(tempString);  //convert string to System string
      String^ outputString = gcnew String(Model.c_str());
      this->rtbOutput->Text = outputString;

      string imageString = "Resized keyboard";
      imageString = imageString + (char)game->GetLevel() + ".jpg";
      string realImageString;

      gcroot<Drawing::Image ^> doug;
      doug = gcnew Drawing::Bitmap("doug_pointing.jpg");
      this->pictureBox1->BackgroundImage = doug;

      gcroot<Drawing::Image ^> image;
      image = gcnew Drawing::Bitmap("Resized keyboard" + game->GetLevel() + ".jpg");
      this->pcbKeyboard->BackgroundImage = image;

      std::string NewModel(game->GetOutmessage());  //convert string to System string
      String^ systemString = gcnew String(NewModel.c_str());

      txtOutmsg->Text = systemString;
      txtInput->Text = "";
   }

            //-----------------------------------------------
            // Loads the Tech game form
            //----------------------------------------------
   private: System::Void TechGameForm_Load(System::Object^  sender, System::EventArgs^  e)
   {
      this->AcceptButton = startbtn;   //allows user to start game with enter key instead of mouse click
      txtInput->Enabled = false;  //input box should be disabled initially
      string  tempString = game->GetDougSpeech();
      std::string Model(tempString);  //convert string to System string
      String^ outputString = gcnew String(Model.c_str());
      this->rtbOutput->Text = outputString;

      helpPanel->Visible = false; //help pane initially not visible


      _CrtDumpMemoryLeaks();
   }


            //-----------------------------------------------
            // Closes the form
            //----------------------------------------------
   private: System::Void TechGameForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
   {
      this->Close();
   }

            //-----------------------------------------------
            // Clears the textfields and increments progress bar after each line is entered
            // If the level is over, the user's score is checked. If the user met the accuracy requirements,
            //  the game goes to the next level. Otherwise, the level restarts.
            //----------------------------------------------
   private: void EndLine()
   {
      txtInput->Text = "";
      txtOutmsg->Text = "";
      txtAccCurrent->Text = game->GetAcc().ToString();
      txtAccCum->Text = game->GetCumAcc().ToString();
      game->ResetNumChars();

      if (pgbTech->Value == pgbTech->Maximum) //if level is over
      {
         if (game->Pass())
         {
            txtOutmsg->Text = "Good Job! Click start to begin level " + (game->GetLevel() + 1);
            gcroot<Drawing::Image ^> dougVictory;
            dougVictory = gcnew Drawing::Bitmap("doug_solair_Text.jpg");
            pictureBox1->BackgroundImage = dougVictory;

         }
         else
            txtOutmsg->Text = "You didn't meet the accuracy requirements";
         pgbTech->Value = pgbTech->Minimum;
         startbtn->Enabled = true;
         txtInput->Enabled = false;
         game->EndLevel();

         //reset timer
         techGameTimer->Enabled = false;

         string uName, accCum;
         MarshalString(user, uName);
         MarshalString(txtAccCum->Text, accCum);
         LoadUserStatsCommand *cmd = new LoadUserStatsCommand(uName, float(atoi(accCum.c_str())), LoadUserStatsCommand::STAT::ACC);
         history->doCommand(cmd);
      }
      else
      {
         techGameTimer->Enabled = false; //stop timer
         pgbTech->Value++;
         std::string NewModel(game->GetOutmessage());  //convert string to System string
         String^ systemString = gcnew String(NewModel.c_str());
         txtOutmsg->Text = systemString;
         game->PlayGame();
         techGameTimer->Enabled = true; //restart timer

         txtInput->SelectionStart = 0;
         this->txtInput->Select();
      }
   }

            //-------------------------------------------------------
            // converts system string to standard string
            //-----------------------------------------------------
   private:  void MarshalString(String ^ s, string& os)
   {
      using namespace Runtime::InteropServices;
      const char* chars =
         (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
      os = chars;
      Marshal::FreeHGlobal(IntPtr((void*)chars));
   }



   private: System::Void TechGameForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e)
   {
      if (!closed)
      {
         closed = true;
         this->Close();
      }
   }
   private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
   {
      //TechGameHelp ^ f = gcnew TechGameHelp(); // display help form
      //f->ShowDialog();
      if (helpPanel->Visible == false)
         helpPanel->Visible = true;
      else
         helpPanel->Visible = false;
   }

            //-------------------------------------------------------
            // Ends the level if time runs out
            //-----------------------------------------------------
   private: System::Void TechGameTimer_Tick(System::Object^  sender, System::EventArgs^  e)
   {
      txtOutmsg->Text = "You ran out of time! Type faster!";
      pgbTech->Value = pgbTech->Minimum;

      txtInput->Text = "";
      startbtn->Enabled = true;
      txtInput->Enabled = false;
      game->ResetNumChars();
      game->ResetTotalChars();
      techGameTimer->Enabled = false;
   }


   private: System::Void startbtn_MouseHover(System::Object^  sender, System::EventArgs^  e)
   {
      startTip->Show("Starts the next level", startbtn);
   }
   private: System::Void txtInput_MouseHover(System::Object^  sender, System::EventArgs^  e)
   {
      startTip->Show("Type the above text here", txtInput);
   }
   private: System::Void txtOutmsg_MouseHover(System::Object^  sender, System::EventArgs^  e)
   {
      startTip->Show("Type this text in the box below", txtOutmsg);
   }

   private: System::Void txtInput_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
   {
      if (e->KeyChar == 8 || e->KeyChar == 127)
      {
         e->Handled = true;
      }
   }
   private: System::Void txtInput_TextChanged(System::Object^  sender, System::EventArgs^  e)
   {
      if (txtInput->Text != "")
      {
         string toType;
         string input;
         MarshalString(txtOutmsg->Text->ToString(), toType);
         MarshalString(txtInput->Text->ToString(), input);
         if (game->TypeChar(input, toType))
         {
            EndLine();
         }
      }
   }
   private: System::Void undoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
   {
      if (history->undoCommand())
      {
         lblAction->Text = "Last Game Statistics were removed";
         lblAction->Visible = true;
         lblTimer->Start();
      }
   }
   private: System::Void redoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
   {
      if (history->redoCommand())
      {
         lblAction->Text = "Game Statistics were readded";
         lblAction->Visible = true;
         lblTimer->Start();
      }
   }
   private: System::Void lblTimer_Tick(System::Object^  sender, System::EventArgs^  e)
   {
      lblAction->Visible = false;
      lblTimer->Stop();
   }
};
}
