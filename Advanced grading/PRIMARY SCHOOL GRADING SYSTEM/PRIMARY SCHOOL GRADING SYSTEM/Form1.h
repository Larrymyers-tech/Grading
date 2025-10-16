#pragma once
#include Form1.h;

namespace PRIMARYSCHOOLGRADINGSYSTEM {

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

	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBoxName;
	private: System::Windows::Forms::TextBox^  textBoxClass;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBoxEng;
	private: System::Windows::Forms::TextBox^  textBoxMath;
	private: System::Windows::Forms::TextBox^  textBoxSci;
	private: System::Windows::Forms::TextBox^  textBoxSst;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBoxTotal;
	private: System::Windows::Forms::TextBox^  textBoxAvg;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBoxGrade;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBoxRemark;



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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClass = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxEng = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMath = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSci = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSst = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxTotal = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAvg = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxGrade = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBoxRemark = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(89, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(380, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PRIMARY SCHOOL GRADING SYSTEM.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"NAME:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"CLASS ";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"SUBJECT ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(329, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"MARKS(%)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"ENGLISH ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 244);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(166, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"MATHEMATICS ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 286);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 25);
			this->label8->TabIndex = 7;
			this->label8->Text = L"SCIENCE ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 334);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(184, 25);
			this->label9->TabIndex = 8;
			this->label9->Text = L"SOCIAL STUDIES ";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(159, 48);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(263, 29);
			this->textBoxName->TabIndex = 9;
			// 
			// textBoxClass
			// 
			this->textBoxClass->Location = System::Drawing::Point(159, 101);
			this->textBoxClass->Name = L"textBoxClass";
			this->textBoxClass->Size = System::Drawing::Size(263, 29);
			this->textBoxClass->TabIndex = 10;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(485, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 103);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// textBoxEng
			// 
			this->textBoxEng->Location = System::Drawing::Point(313, 202);
			this->textBoxEng->Name = L"textBoxEng";
			this->textBoxEng->Size = System::Drawing::Size(124, 29);
			this->textBoxEng->TabIndex = 12;
			// 
			// textBoxMath
			// 
			this->textBoxMath->Location = System::Drawing::Point(313, 241);
			this->textBoxMath->Name = L"textBoxMath";
			this->textBoxMath->Size = System::Drawing::Size(124, 29);
			this->textBoxMath->TabIndex = 13;
			this->textBoxMath->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// textBoxSci
			// 
			this->textBoxSci->Location = System::Drawing::Point(313, 286);
			this->textBoxSci->Name = L"textBoxSci";
			this->textBoxSci->Size = System::Drawing::Size(124, 29);
			this->textBoxSci->TabIndex = 14;
			// 
			// textBoxSst
			// 
			this->textBoxSst->Location = System::Drawing::Point(313, 334);
			this->textBoxSst->Name = L"textBoxSst";
			this->textBoxSst->Size = System::Drawing::Size(124, 29);
			this->textBoxSst->TabIndex = 15;
			this->textBoxSst->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(484, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 40);
			this->button1->TabIndex = 16;
			this->button1->Text = L"SUBMIT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(486, 258);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 42);
			this->button2->TabIndex = 17;
			this->button2->Text = L"CLEAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(497, 363);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 40);
			this->button3->TabIndex = 18;
			this->button3->Text = L"LOGIN ";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(497, 467);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 40);
			this->button4->TabIndex = 19;
			this->button4->Text = L"EXIT";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 378);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 25);
			this->label10->TabIndex = 20;
			this->label10->Text = L"TOTAL";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 426);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(113, 25);
			this->label11->TabIndex = 21;
			this->label11->Text = L"AVERAGE ";
			// 
			// textBoxTotal
			// 
			this->textBoxTotal->Location = System::Drawing::Point(313, 373);
			this->textBoxTotal->Name = L"textBoxTotal";
			this->textBoxTotal->Size = System::Drawing::Size(124, 29);
			this->textBoxTotal->TabIndex = 22;
			this->textBoxTotal->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxTotal_TextChanged);
			// 
			// textBoxAvg
			// 
			this->textBoxAvg->Location = System::Drawing::Point(313, 426);
			this->textBoxAvg->Name = L"textBoxAvg";
			this->textBoxAvg->Size = System::Drawing::Size(124, 29);
			this->textBoxAvg->TabIndex = 23;
			this->textBoxAvg->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxAvg_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 478);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(86, 25);
			this->label12->TabIndex = 24;
			this->label12->Text = L"GRADE ";
			// 
			// textBoxGrade
			// 
			this->textBoxGrade->Location = System::Drawing::Point(313, 478);
			this->textBoxGrade->Name = L"textBoxGrade";
			this->textBoxGrade->Size = System::Drawing::Size(124, 29);
			this->textBoxGrade->TabIndex = 25;
			this->textBoxGrade->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxGrade_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(17, 526);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(110, 25);
			this->label13->TabIndex = 26;
			this->label13->Text = L"REMARKS";
			// 
			// textBoxRemark
			// 
			this->textBoxRemark->Location = System::Drawing::Point(313, 526);
			this->textBoxRemark->Name = L"textBoxRemark";
			this->textBoxRemark->Size = System::Drawing::Size(124, 29);
			this->textBoxRemark->TabIndex = 27;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 563);
			this->Controls->Add(this->textBoxRemark);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBoxGrade);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBoxAvg);
			this->Controls->Add(this->textBoxTotal);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxSst);
			this->Controls->Add(this->textBoxSci);
			this->Controls->Add(this->textBoxMath);
			this->Controls->Add(this->textBoxEng);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBoxClass);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Start


if(textBoxName->Text=="" || textBoxClass->Text=="" ||){

				 MessageBox::Show("Please fill in pupil's Details");
			 }else{
				 try{
					 String^ MyCon = "datasource=localhost;username=root;password=;";
String^ Query = "insert into slau.Pupil_details(NAME,CLASS,ENGLISH,MATHEMATICS,SCIENCE,SOCIALSTUDIES,TOTAL,AVERAGE,GRADE) values('" +this->textBoxName->Text+ "','" +this->textBoxClass->Text+ "','" +this->textBoxEng->Text+ "','" +this->textBoxMath->Text+"','" +this->textBoxSci->Text+ "','" +this->textBoxSst->Text+ "','" +this->textBoxTotal->Text+ "','" +this->textBox
	xAvg->Text+ "','" +this->textBoxGrade->Text+ "',);"; 
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
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1="";
			 textBoxName->Text="";
			 textBoxClass->Text="";
			 textBoxEng->Text="";
			 textBoxMath->Text="";
			 textBoxSci->Text="";
			 textBoxSst->Text="";
			 textBoxTotal->Text="";
			 textBoxAvg->Text="";
			 textBoxGrade->Text="";


		 }
private: System::Void textBoxTotal_TextChanged(System::Object^  sender, System::EventArgs^  e) {
 // Input
    String^Name = textBoxName->Text;
	String^Class=textBoxClass->Text;
    int ENGLISH = Convert::ToInt32(textBoxEng->Text);
    int MATHEMATICS = Convert::ToInt32(textBoxMath->Text);
    int SCIENCE = Convert::ToInt32(textBoxSci->Text);
    int SOCIALSTUDIES = Convert::ToInt32(textBoxSst->Text);

    // Processing
    int Total = (textBoxEng->Text) + (textBoxMath->Text) + (textBoxSci->Text) + (textBoxSst->Text);
   

   
    // Output
    textBoxTotal->Text = Convert::ToString(Total);
    textBoxAverage->Text = Convert::ToString(Average);
    textBoxGrade->Text = GRADE;
    textBoxRemark->Text = REMARKS;

	


		 }
private: System::Void textBoxAvg_TextChanged(System::Object^  sender, System::EventArgs^  e) {
     double Average = Total / 4.0;

		 }
private: System::Void textBoxGrade_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			  // Grade logic
			 String^GRADE;
			 String^REMARKS;
    if (Average >= 80) {
        GRADE = "A";
        REMARKS = "Excellent";
    } else if (Average >= 75) {
        GRADE = "B";
        REMARKS = "Very Good";
    } else if (Average >= 60) {
        GRADE = "C";
        REMARKS = "Good";
    } else if (Average >= 50) {
        GRADE = "D";
        REMARKS = "Fair";
    } else {
        GRADE = "F";
        RENARKS = "Fail";
    }

		 }
};
}

