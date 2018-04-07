#include "StdAfx.h"
#include "Login.h"

using namespace databaseofstudents;

System::Void Login::button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {

			 if( ( textBox1 -> Text == "Mikolaj") && ( textBox2 -> Text == "Felek") )
			 {
				 MessageBox::Show("Correct login & password");
				 this -> Hide();
				 Secret^ secretdupa = gcnew Secret();
				 secretdupa -> ShowDialog();
			 }
			 else
			 {
				 ++i;
				 if(i >= 3)
					 Application::Exit();
				 MessageBox::Show("Nieprawidlowe has³o");
			 }	
		}

System::Void Login::Login_Load(System::Object^  sender, System::EventArgs^  e)
{
	i = 0;
}