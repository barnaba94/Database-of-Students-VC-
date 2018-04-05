#pragma once

namespace databaseofstudents {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Edit
	/// </summary>
	public ref class Edit : public System::Windows::Forms::Form
	{
	public:
		Edit(void)
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
		~Edit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;




	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::ComponentModel::IContainer^  components;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::RadioButton^  czteryplus;

	private: System::Windows::Forms::RadioButton^  czteryzero;

	private: System::Windows::Forms::RadioButton^  trzyplus;

	private: System::Windows::Forms::RadioButton^  trzyzero;

	private: System::Windows::Forms::RadioButton^  dwazero;
	private: System::Windows::Forms::RadioButton^  piec;

//variables
	int IndexofSubject;
	int IndexofMarks;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
			 char i;
	

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Edit::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->piec = (gcnew System::Windows::Forms::RadioButton());
			this->czteryplus = (gcnew System::Windows::Forms::RadioButton());
			this->czteryzero = (gcnew System::Windows::Forms::RadioButton());
			this->trzyplus = (gcnew System::Windows::Forms::RadioButton());
			this->trzyzero = (gcnew System::Windows::Forms::RadioButton());
			this->dwazero = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(796, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"EXIT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Edit::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(12, 40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(189, 191);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Subjects";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(38, 147);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(97, 17);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Programming";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Edit::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(38, 124);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(79, 17);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Chemistry";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Edit::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(38, 101);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(53, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Math";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Edit::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(38, 75);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(68, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Physics";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Edit::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(38, 51);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(90, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Geophysics";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Edit::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(38, 28);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(71, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Geology";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Edit::radioButton1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(27, 288);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 43);
			this->button2->TabIndex = 7;
			this->button2->Text = L"ADD MARK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Edit::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(146, 288);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(94, 43);
			this->button3->TabIndex = 8;
			this->button3->Text = L"UPDATE MARK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Edit::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(86, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"INDEX";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(184, 6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(116, 20);
			this->textBox2->TabIndex = 9;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->piec);
			this->groupBox2->Controls->Add(this->czteryplus);
			this->groupBox2->Controls->Add(this->czteryzero);
			this->groupBox2->Controls->Add(this->trzyplus);
			this->groupBox2->Controls->Add(this->trzyzero);
			this->groupBox2->Controls->Add(this->dwazero);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->groupBox2->Location = System::Drawing::Point(216, 40);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(189, 191);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Marks";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Edit::groupBox2_Enter);
			// 
			// piec
			// 
			this->piec->AutoSize = true;
			this->piec->Location = System::Drawing::Point(69, 147);
			this->piec->Name = L"piec";
			this->piec->Size = System::Drawing::Size(43, 17);
			this->piec->TabIndex = 5;
			this->piec->TabStop = true;
			this->piec->Text = L"5.0";
			this->piec->UseVisualStyleBackColor = true;
			this->piec->CheckedChanged += gcnew System::EventHandler(this, &Edit::piec_CheckedChanged);
			// 
			// czteryplus
			// 
			this->czteryplus->AutoSize = true;
			this->czteryplus->Location = System::Drawing::Point(69, 124);
			this->czteryplus->Name = L"czteryplus";
			this->czteryplus->Size = System::Drawing::Size(43, 17);
			this->czteryplus->TabIndex = 4;
			this->czteryplus->TabStop = true;
			this->czteryplus->Text = L"4.5";
			this->czteryplus->UseVisualStyleBackColor = true;
			this->czteryplus->CheckedChanged += gcnew System::EventHandler(this, &Edit::czteryplus_CheckedChanged);
			// 
			// czteryzero
			// 
			this->czteryzero->AutoSize = true;
			this->czteryzero->Location = System::Drawing::Point(69, 101);
			this->czteryzero->Name = L"czteryzero";
			this->czteryzero->Size = System::Drawing::Size(43, 17);
			this->czteryzero->TabIndex = 3;
			this->czteryzero->TabStop = true;
			this->czteryzero->Text = L"4.0";
			this->czteryzero->UseVisualStyleBackColor = true;
			this->czteryzero->CheckedChanged += gcnew System::EventHandler(this, &Edit::czteryzero_CheckedChanged);
			// 
			// trzyplus
			// 
			this->trzyplus->AutoSize = true;
			this->trzyplus->Location = System::Drawing::Point(69, 75);
			this->trzyplus->Name = L"trzyplus";
			this->trzyplus->Size = System::Drawing::Size(43, 17);
			this->trzyplus->TabIndex = 2;
			this->trzyplus->TabStop = true;
			this->trzyplus->Text = L"3.5";
			this->trzyplus->UseVisualStyleBackColor = true;
			this->trzyplus->CheckedChanged += gcnew System::EventHandler(this, &Edit::trzyplus_CheckedChanged);
			// 
			// trzyzero
			// 
			this->trzyzero->AutoSize = true;
			this->trzyzero->Location = System::Drawing::Point(69, 51);
			this->trzyzero->Name = L"trzyzero";
			this->trzyzero->Size = System::Drawing::Size(43, 17);
			this->trzyzero->TabIndex = 1;
			this->trzyzero->TabStop = true;
			this->trzyzero->Text = L"3.0";
			this->trzyzero->UseVisualStyleBackColor = true;
			this->trzyzero->CheckedChanged += gcnew System::EventHandler(this, &Edit::trzyzero_CheckedChanged);
			// 
			// dwazero
			// 
			this->dwazero->AutoSize = true;
			this->dwazero->Location = System::Drawing::Point(69, 28);
			this->dwazero->Name = L"dwazero";
			this->dwazero->Size = System::Drawing::Size(43, 17);
			this->dwazero->TabIndex = 0;
			this->dwazero->TabStop = true;
			this->dwazero->Text = L"2.0";
			this->dwazero->UseVisualStyleBackColor = true;
			this->dwazero->CheckedChanged += gcnew System::EventHandler(this, &Edit::dwazero_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(285, 300);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(31, 20);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Edit::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(271, 284);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"ID of Mark";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(146, 362);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 44);
			this->button5->TabIndex = 27;
			this->button5->Text = L"SHOW ALL";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Edit::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(27, 362);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 44);
			this->button4->TabIndex = 26;
			this->button4->Text = L"GO!!!";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(461, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 15;
			this->dataGridView1->Size = System::Drawing::Size(440, 298);
			this->dataGridView1->TabIndex = 28;
			this->dataGridView1->Visible = false;
			// 
			// Edit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1044, 445);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Edit";
			this->Text = L"Edit";
			this->Load += gcnew System::EventHandler(this, &Edit::Edit_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Edit_Load(System::Object^  sender, System::EventArgs^  e)
{
	IndexofSubject = 0;
	IndexofMarks = 0;
	dataGridView1 -> Visible = false;
}

//edit forms
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
			 //Form1^ neq = gcnew Form1(); 
			 //Edit1::Enabled = false;
			 //Edit1::Visible = false;
			 Application::Exit();
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e){}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	IndexofSubject = 1;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	IndexofSubject = 2;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	IndexofSubject = 3;	 
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	IndexofSubject = 4;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	IndexofSubject = 5;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	IndexofSubject = 6;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//ADD MARK
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	String^ ocena;
	i = 0;
	switch( IndexofMarks )
	{
		case 1:
			ocena = "niedostateczny";
			break;
		case 2:
			ocena = "dostateczny";
			break;
		case 3:
			ocena = "plus dostateczny";
			break;
		case 4:
			ocena = "dobry";
			break;
		case 5:
			ocena = "plus dobry";
			break;
		case 6:
			ocena = "bardzo dobry";
			break;
		default:
			IndexofMarks = 0;
			break;
	}
	if( IndexofSubject != 0 && IndexofMarks!= 0 && Int32::Parse( textBox2 -> Text ) )
	{
		try
			 {
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
				int NbofIndex1 = Int32::Parse( textBox2 -> Text );

				//MySqlCommand^ command = gcnew MySqlCommand( "insert into studentmarks values(,"+NbofIndex1+","+IndexofSubject+", '"ocena"' ) ", connect );
				MySqlCommand^ command = gcnew MySqlCommand( "insert into studentmarks values(NULL,"+NbofIndex1+","+IndexofSubject+",'"+ocena+"') ", connect );
				MySqlDataReader^ DataR;
				connect -> Open();
				DataR = command -> ExecuteReader();
				MessageBox::Show( "ADD MARK COMPLETED!!!" );
			 }
			 catch( Exception^ ex )
			 {
				MessageBox::Show( ex -> Message );
			 }
	}
}
//private: System::Void listBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e){}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//UPDATE MARK	
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	String^ ocena;
	i = 0;
	switch( IndexofMarks )
	{
		case 1:
			ocena = "niedostateczny";
			break;
		case 2:
			ocena = "dostateczny";
			break;
		case 3:
			ocena = "plus dostateczny";
			break;
		case 4:
			ocena = "dobry";
			break;
		case 5:
			ocena = "plus dobry";
			break;
		case 6:
			ocena = "bardzo dobry";
			break;
		default:
			IndexofMarks = 0;
			break;
	}
	int IDofMark = Int32::Parse( textBox1 -> Text );
	if( IndexofSubject != 0 && IndexofMarks!= 0 && Int32::Parse( textBox2 -> Text ) && IDofMark )
	{
		try
			 {
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
				int NbofIndex1 = Int32::Parse( textBox2 -> Text );

				MySqlCommand^ command = gcnew MySqlCommand( "update studentmarks set IDofSubject="+IndexofSubject+", TypeofMarks='"+ocena+"', ID='"+NbofIndex1+"' WHERE IDofSM = "+IDofMark+" ", connect );
				MySqlDataReader^ DataR;
				connect -> Open();
				DataR = command -> ExecuteReader();
				MessageBox::Show( "UPDATE MARK COMPLETED!!!" );
			 }
			 catch( Exception^ ex )
			 {
				MessageBox::Show( ex -> Message );
			 }
	}
}

private: System::Void dwazero_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	IndexofMarks = 1;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private: System::Void trzyzero_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	IndexofMarks = 2;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private: System::Void trzyplus_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	IndexofMarks = 3;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private: System::Void czteryzero_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	IndexofMarks = 4;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private: System::Void czteryplus_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	IndexofMarks = 5;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private: System::Void piec_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	IndexofMarks = 6;
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
{
	dataGridView1 -> Visible = true;
		try
			{
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
				MySqlDataAdapter^ command = gcnew MySqlDataAdapter("select studentmarks.IDofSM, studentmarks.ID, subjects.NameofSubject, studentmarks.TypeofMarks from studentmarks, subjects WHERE subjects.IDofSubject=studentmarks.IDofSubject ORDER BY studentmarks.IDofSM", connect );
				connect -> Open();
				DataTable^ Tab = gcnew DataTable();
				command -> Fill( Tab );
				bindingSource1 -> DataSource = Tab;
				dataGridView1 -> DataSource = bindingSource1;
				connect -> Close();
				//this -> progressBar1 -> Value = 100;
			}
		catch(Exception^ ex)
		    {
				MessageBox::Show( ex -> Message );
			}	 
}
	};
}
