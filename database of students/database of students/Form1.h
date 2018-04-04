#pragma once
#include "About.h"
#include "Edit.h"

namespace databaseofstudents {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  stasrtToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dATABASEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  qUITToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mARKSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  eDITToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  iNFOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutAuthorToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  Index1;
	private: System::Windows::Forms::TextBox^  Day1;



	private: System::Windows::Forms::TextBox^  Month1;

	private: System::Windows::Forms::TextBox^  Year1;

	private: System::Windows::Forms::TextBox^  Birth1;

	private: System::Windows::Forms::TextBox^  Surname1;

	private: System::Windows::Forms::TextBox^  Name1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::ComponentModel::IContainer^  components;



	protected: 


	private:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->stasrtToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dATABASEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->qUITToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mARKSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eDITToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iNFOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutAuthorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Index1 = (gcnew System::Windows::Forms::TextBox());
			this->Day1 = (gcnew System::Windows::Forms::TextBox());
			this->Month1 = (gcnew System::Windows::Forms::TextBox());
			this->Year1 = (gcnew System::Windows::Forms::TextBox());
			this->Birth1 = (gcnew System::Windows::Forms::TextBox());
			this->Surname1 = (gcnew System::Windows::Forms::TextBox());
			this->Name1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->stasrtToolStripMenuItem, 
				this->mARKSToolStripMenuItem, this->iNFOToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(895, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
			// 
			// stasrtToolStripMenuItem
			// 
			this->stasrtToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->dATABASEToolStripMenuItem, 
				this->qUITToolStripMenuItem});
			this->stasrtToolStripMenuItem->Name = L"stasrtToolStripMenuItem";
			this->stasrtToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->stasrtToolStripMenuItem->Text = L"START";
			this->stasrtToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::stasrtToolStripMenuItem_Click);
			// 
			// dATABASEToolStripMenuItem
			// 
			this->dATABASEToolStripMenuItem->Name = L"dATABASEToolStripMenuItem";
			this->dATABASEToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->dATABASEToolStripMenuItem->Text = L"&Database";
			this->dATABASEToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::dATABASEToolStripMenuItem_Click);
			// 
			// qUITToolStripMenuItem
			// 
			this->qUITToolStripMenuItem->Name = L"qUITToolStripMenuItem";
			this->qUITToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->qUITToolStripMenuItem->Text = L"&Quit";
			this->qUITToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::qUITToolStripMenuItem_Click);
			// 
			// mARKSToolStripMenuItem
			// 
			this->mARKSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->eDITToolStripMenuItem});
			this->mARKSToolStripMenuItem->Name = L"mARKSToolStripMenuItem";
			this->mARKSToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->mARKSToolStripMenuItem->Text = L"MARKS";
			// 
			// eDITToolStripMenuItem
			// 
			this->eDITToolStripMenuItem->Name = L"eDITToolStripMenuItem";
			this->eDITToolStripMenuItem->Size = System::Drawing::Size(94, 22);
			this->eDITToolStripMenuItem->Text = L"&Edit";
			this->eDITToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::eDITToolStripMenuItem_Click);
			// 
			// iNFOToolStripMenuItem
			// 
			this->iNFOToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutAuthorToolStripMenuItem});
			this->iNFOToolStripMenuItem->Name = L"iNFOToolStripMenuItem";
			this->iNFOToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->iNFOToolStripMenuItem->Text = L"INFO";
			// 
			// aboutAuthorToolStripMenuItem
			// 
			this->aboutAuthorToolStripMenuItem->Name = L"aboutAuthorToolStripMenuItem";
			this->aboutAuthorToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->aboutAuthorToolStripMenuItem->Text = L"About author";
			this->aboutAuthorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutAuthorToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(54, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"SURNAME: ";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(7, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"DATE OF BIRTH: ";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(87, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"INDEX: ";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(92, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"YEAR: ";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(79, 228);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"MONTH: ";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(104, 262);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"DAY: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(91, 83);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 20);
			this->label7->TabIndex = 8;
			this->label7->Text = L"NAME: ";
			// 
			// Index1
			// 
			this->Index1->Location = System::Drawing::Point(185, 43);
			this->Index1->Name = L"Index1";
			this->Index1->Size = System::Drawing::Size(100, 20);
			this->Index1->TabIndex = 9;
			// 
			// Day1
			// 
			this->Day1->Location = System::Drawing::Point(185, 262);
			this->Day1->Name = L"Day1";
			this->Day1->Size = System::Drawing::Size(100, 20);
			this->Day1->TabIndex = 10;
			// 
			// Month1
			// 
			this->Month1->Location = System::Drawing::Point(185, 228);
			this->Month1->Name = L"Month1";
			this->Month1->Size = System::Drawing::Size(100, 20);
			this->Month1->TabIndex = 11;
			// 
			// Year1
			// 
			this->Year1->Location = System::Drawing::Point(185, 193);
			this->Year1->Name = L"Year1";
			this->Year1->Size = System::Drawing::Size(100, 20);
			this->Year1->TabIndex = 12;
			// 
			// Birth1
			// 
			this->Birth1->Enabled = false;
			this->Birth1->Location = System::Drawing::Point(185, 157);
			this->Birth1->Name = L"Birth1";
			this->Birth1->Size = System::Drawing::Size(100, 20);
			this->Birth1->TabIndex = 13;
			// 
			// Surname1
			// 
			this->Surname1->Location = System::Drawing::Point(185, 119);
			this->Surname1->Name = L"Surname1";
			this->Surname1->Size = System::Drawing::Size(100, 20);
			this->Surname1->TabIndex = 14;
			this->Surname1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// Name1
			// 
			this->Name1->Location = System::Drawing::Point(185, 83);
			this->Name1->Name = L"Name1";
			this->Name1->Size = System::Drawing::Size(100, 20);
			this->Name1->TabIndex = 15;
			this->Name1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(425, 345);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 44);
			this->button5->TabIndex = 25;
			this->button5->Text = L"SHOW ALL";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(325, 345);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 44);
			this->button4->TabIndex = 24;
			this->button4->Text = L"GO!!!";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(123, 345);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 44);
			this->button3->TabIndex = 23;
			this->button3->Text = L"CHANGE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(223, 345);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 44);
			this->button2->TabIndex = 22;
			this->button2->Text = L"REMOVE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(26, 345);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 44);
			this->button1->TabIndex = 21;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(317, 33);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 15;
			this->dataGridView1->Size = System::Drawing::Size(553, 298);
			this->dataGridView1->TabIndex = 26;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			this->dataGridView1->SizeChanged += gcnew System::EventHandler(this, &Form1::dataGridView1_SizeChanged);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(568, 356);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(258, 23);
			this->progressBar1->TabIndex = 27;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Form1::progressBar1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(895, 445);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Name1);
			this->Controls->Add(this->Surname1);
			this->Controls->Add(this->Birth1);
			this->Controls->Add(this->Year1);
			this->Controls->Add(this->Month1);
			this->Controls->Add(this->Day1);
			this->Controls->Add(this->Index1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"STUDENTS";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this -> progressBar1 -> Visible = false;
		 }
private: System::Void stasrtToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {}
//==============================================================================
private: System::Void qUITToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			Application::Exit();
		 }

//==============================================================================
private: System::Void aboutAuthorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			About^ info = gcnew About();
			info->Show();
		 }

//==============================================================================
private: System::Void dATABASEToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			;
		}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {}


//==============================================================================
//Add

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 try
			 {
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
			 
				int NbofIndex1 = Int32::Parse( Index1 -> Text );
			 
				String^ sName = Name1 -> Text;
				String^ sSurname = Surname1 -> Text; 

				int YearofBirth = Int32::Parse( Year1 -> Text );
				int MonthofBirth = Int32::Parse( Month1 -> Text );
				int DayofBirth = Int32::Parse( Day1 -> Text );
				Birth1 -> Text = Year1 -> Text + "-" + Month1 -> Text + "-" + Day1 -> Text;

				MySqlCommand^ command = gcnew MySqlCommand( "insert into baza_studentow values(" +NbofIndex1+ ", '"+sName+"', '"+sSurname+"',"+YearofBirth+","+MonthofBirth+","+DayofBirth+") ", connect );
				//Connect -> Open();
				MySqlDataReader^ DataR;
				connect -> Open();
				DataR = command -> ExecuteReader();
				MessageBox::Show( "ADD COMPLETED!!!" );
			 }
			 catch( Exception^ ex )
			 {
				MessageBox::Show( ex -> Message );
			 }
		 }

//==============================================================================
//Change

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			try
			{
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
			 
				int NbofIndex1 = Int32::Parse( Index1 -> Text );
			 
				String^ sName = Name1 -> Text;
				String^ sSurname = Surname1 -> Text; 

				int YearofBirth = Int32::Parse( Year1 -> Text );
				int MonthofBirth = Int32::Parse( Month1 -> Text );
				int DayofBirth = Int32::Parse( Day1 -> Text );
				Birth1 -> Text = Year1 -> Text + "-" + Month1 -> Text + "-" + Day1 -> Text;

				MySqlCommand^ command = gcnew MySqlCommand( "update baza_studentow set Name='"+sName+"', Surname='"+sSurname+"', YearofB="+YearofBirth+" , MonthofB="+MonthofBirth+",DayofB="+DayofBirth+" WHERE NbofIndex="+NbofIndex1+" ", connect );
				//Connect -> Open();
				MySqlDataReader^ DataR;
				connect -> Open();
				DataR = command -> ExecuteReader();
				connect -> Close();
				MessageBox::Show( "UPDATE COMPLETED!!!" );
			}
			catch( Exception^ ex )
			{
				MessageBox::Show(ex -> Message);
			}
		 }

//==============================================================================
//Remove

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		try
			{
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
			 
				int NbofIndex1 = Int32::Parse( Index1 -> Text );
			 
				MySqlCommand^ command = gcnew MySqlCommand( "delete from baza_studentow WHERE NbofIndex="+NbofIndex1+" ", connect );
				
				MySqlDataReader^ DataR;
				connect -> Open();
				DataR = command -> ExecuteReader();
				connect -> Close();
				MessageBox::Show( "REMOVE COMPLETED!!!" );
			}
			catch( Exception^ ex )
			{
				MessageBox::Show(ex -> Message);
			}
	}

//==============================================================================
//Search

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	dataGridView1 -> Visible = true;
		try
			{
				int NbofIndex1 = Int32::Parse( Index1 -> Text );
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
				MySqlDataAdapter^ command = gcnew MySqlDataAdapter("select * from baza_studentow WHERE NbofIndex="+NbofIndex1+" ", connect );
				connect -> Open();
				DataTable^ Tab = gcnew DataTable();
				command -> Fill( Tab );
				bindingSource1 -> DataSource = Tab;
				dataGridView1 -> DataSource = bindingSource1;
				connect -> Close();
			}
		catch(Exception^ ex)
		    {
				MessageBox::Show( ex -> Message );
			}
	}
//==============================================================================
//All
 private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
{
		dataGridView1 -> Visible = true;
		this -> progressBar1 -> Visible = true;
		try
			{
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
				MySqlDataAdapter^ command = gcnew MySqlDataAdapter("select * from baza_studentow", connect );
				connect -> Open();
				DataTable^ Tab = gcnew DataTable();
				command -> Fill( Tab );
				bindingSource1 -> DataSource = Tab;
				dataGridView1 -> DataSource = bindingSource1;
				connect -> Close();
				this -> progressBar1 -> Value = 100;
			}
		catch(Exception^ ex)
		    {
				MessageBox::Show( ex -> Message );
			}
		//Application::DoEvents();
		//Sleep(1000);
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e){}
private: System::Void dataGridView1_SizeChanged(System::Object^  sender, System::EventArgs^  e) {}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private: System::Void eDITToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 Edit^ Edit_Form = gcnew Edit();
			 Edit_Form->Show();
			 //Form1::Enabled = true;
			 //Application::Exit();
			 //Form1^ temp = gcnew Form1();
			 //temp -> Enabled = false;
			 //temp -> Visible = false;
		 }
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
};
}