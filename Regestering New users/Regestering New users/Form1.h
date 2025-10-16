#pragma once
#include"Form1.h"
#include"login.h"
namespace RegesteringNewusers {

using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private:
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(281, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 25);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"RegNo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Names";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(56, 329);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Password ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(380, 119);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(267, 29);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(380, 221);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(267, 29);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(380, 329);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(267, 29);
			this->textBox3->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(107, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 45);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Submit ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(305, 430);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 45);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Login";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(202, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(210, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Regestering new users";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(462, 430);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(82, 45);
			this->button3->TabIndex = 10;
			this->button3->Text = L"clear";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(639, 430);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 45);
			this->button4->TabIndex = 11;
			this->button4->Text = L"exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(761, 543);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

//Start


if(textBox1->Text=="" || textBox2->Text=="" || textBox3->Text==""){

				 MessageBox::Show("Empty fields");
			 }else{
				 try{
					 String^ MyCon = "datasource=localhost;username=root;password=;";
String^ Query = "insert into slau.users(Regno,Names,Password) values('" +this->textBox1->Text+ "','" +this->textBox2->Text+ "','" +this->textBox3->Text+ "');"; 
MySqlConnection^ MyCon2 = gcnew MySqlConnection(MyCon); 
MySqlCommand^ MyCommand = gcnew MySqlCommand(Query, MyCon2); 
MySqlDataReader^ MyReader2; 
MyCon2->Open(); 
MyReader2 = MyCommand->ExecuteReader();
MessageBox::Show("Data Saved Succesfully"); 
 
while (MyReader2->Read()) 
 {
 MyCon2->Close(); 
 }
   

				 }
				  catch (Exception^ex) 
 { 
	MessageBox::Show(ex->Message); 
 } 
			 }
//End 






			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text="";
			  textBox2->Text="";
			   textBox3->Text="";
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
login^ _register = gcnew login;
				 _register->Show();
				 this->Hide();

		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

