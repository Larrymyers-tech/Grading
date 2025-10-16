#pragma once

namespace primarygradingsystem {

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
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBoxMath;
	private: System::Windows::Forms::TextBox^  textBoxSST;
	private: System::Windows::Forms::TextBox^  textboxScience;

	private: System::Windows::Forms::TextBox^  textBoxEnglish;
	private: System::Windows::Forms::TextBox^  textBoxGrade;








	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBoxTotal;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBoxName;
	private: System::Windows::Forms::TextBox^  textBoxClass;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBoxAverage;



	private: System::Windows::Forms::Button^  button3;

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
			this->textBoxMath = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSST = (gcnew System::Windows::Forms::TextBox());
			this->textboxScience = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEnglish = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGrade = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxTotal = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClass = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxAverage = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.14286F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Indigo;
			this->label1->Location = System::Drawing::Point(-3, 5);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(617, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PRIMARY SCHOOL GRADING SYSTEM.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell", 11.14286F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label2->Location = System::Drawing::Point(15, 134);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"SUBJECT";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell", 11.14286F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label3->Location = System::Drawing::Point(288, 134);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"MARKS";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Rockwell", 11.14286F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label4->Location = System::Drawing::Point(22, 455);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 31);
			this->label4->TabIndex = 3;
			this->label4->Text = L"GRADE";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 165);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(184, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"MATHEMATICS ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 208);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(201, 29);
			this->label6->TabIndex = 5;
			this->label6->Text = L"SOCIAL STUDIES ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 247);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 29);
			this->label7->TabIndex = 6;
			this->label7->Text = L"SCIENCE ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(13, 300);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 29);
			this->label8->TabIndex = 7;
			this->label8->Text = L"ENGLISH ";
			// 
			// textBoxMath
			// 
			this->textBoxMath->Location = System::Drawing::Point(266, 165);
			this->textBoxMath->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxMath->Name = L"textBoxMath";
			this->textBoxMath->Size = System::Drawing::Size(126, 35);
			this->textBoxMath->TabIndex = 8;
			// 
			// textBoxSST
			// 
			this->textBoxSST->Location = System::Drawing::Point(266, 208);
			this->textBoxSST->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxSST->Name = L"textBoxSST";
			this->textBoxSST->Size = System::Drawing::Size(126, 35);
			this->textBoxSST->TabIndex = 9;
			// 
			// textboxScience
			// 
			this->textboxScience->Location = System::Drawing::Point(266, 249);
			this->textboxScience->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textboxScience->Name = L"textboxScience";
			this->textboxScience->Size = System::Drawing::Size(126, 35);
			this->textboxScience->TabIndex = 10;
			// 
			// textBoxEnglish
			// 
			this->textBoxEnglish->Location = System::Drawing::Point(266, 300);
			this->textBoxEnglish->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxEnglish->Name = L"textBoxEnglish";
			this->textBoxEnglish->Size = System::Drawing::Size(126, 35);
			this->textBoxEnglish->TabIndex = 11;
			// 
			// textBoxGrade
			// 
			this->textBoxGrade->Location = System::Drawing::Point(266, 451);
			this->textBoxGrade->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxGrade->Name = L"textBoxGrade";
			this->textBoxGrade->Size = System::Drawing::Size(126, 35);
			this->textBoxGrade->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Crimson;
			this->button1->Location = System::Drawing::Point(441, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 35);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBoxTotal
			// 
			this->textBoxTotal->Location = System::Drawing::Point(266, 351);
			this->textBoxTotal->Name = L"textBoxTotal";
			this->textBoxTotal->Size = System::Drawing::Size(126, 35);
			this->textBoxTotal->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 351);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(172, 29);
			this->label9->TabIndex = 18;
			this->label9->Text = L"TOTAL MARKS";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 55);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(171, 29);
			this->label10->TabIndex = 19;
			this->label10->Text = L"PUPIL_NAMES";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(16, 93);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(81, 29);
			this->label11->TabIndex = 20;
			this->label11->Text = L"CLASS";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(192, 52);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(180, 35);
			this->textBoxName->TabIndex = 21;
			// 
			// textBoxClass
			// 
			this->textBoxClass->Location = System::Drawing::Point(192, 90);
			this->textBoxClass->Name = L"textBoxClass";
			this->textBoxClass->Size = System::Drawing::Size(180, 35);
			this->textBoxClass->TabIndex = 22;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(389, 51);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(119, 80);
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(441, 165);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 35);
			this->button2->TabIndex = 24;
			this->button2->Text = L"SUBMIT ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 405);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(198, 29);
			this->label12->TabIndex = 25;
			this->label12->Text = L"AVERAGE  MARK";
			// 
			// textBoxAverage
			// 
			this->textBoxAverage->Location = System::Drawing::Point(266, 399);
			this->textBoxAverage->Name = L"textBoxAverage";
			this->textBoxAverage->Size = System::Drawing::Size(126, 35);
			this->textBoxAverage->TabIndex = 26;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(441, 231);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 32);
			this->button3->TabIndex = 29;
			this->button3->Text = L"CLEAR";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 27);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(585, 608);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBoxAverage);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBoxClass);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBoxTotal);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxGrade);
			this->Controls->Add(this->textBoxEnglish);
			this->Controls->Add(this->textboxScience);
			this->Controls->Add(this->textBoxSST);
			this->Controls->Add(this->textBoxMath);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Stencil", 9.857143F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Form1";
			this->Opacity = 0.8;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		 private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
					   // Input
    String^PUPIL_NAME = textBoxName->Text;
	String^CLASS=textBoxClass->Text;
    int ENGLISH = Convert::ToInt32(textBoxEnglish->Text);
    int MATHEMATICS = Convert::ToInt32(textBoxMath->Text);
    int SCIENCE = Convert::ToInt32(textBoxScience->Text);
    int SOCIALSTUDIES = Convert::ToInt32(textBoxSST->Text);
    int Total = ENGLISH+ MATHEMATICS+ SCIENCE + SOCIALSTUDIES;
    double Average = Total / 4.0;
    String^ Grade;
    String^ Remarks;
    if (Average >= 80) {
        Grade = "A";
        Remarks = "Excellent";
    } else if (Average >= 75) {
        Grade = "B";
        Remarks = "Very Good";
    } else if (Average >= 60) {
        Grade = "C";
        Remarks = "Good";
    } else if (Average >= 50) {
        Grade = "D";
        Remarks = "Fair";
    } else {
        Grade = "F";
        Remarks = "Fail";
    }

    // Output
    textBoxTotal->Text = Convert::ToString(Total);
    textBoxAverage->Text = Convert::ToString(Average);
    textBoxGrade->Text = Grade;
    textBoxRemark->Text = Remarks;

	



				  }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox10->Text="";
			textBox11->Text="";
			textBox1->Text="";
			textBox2->Text="";
			textBox3->Text="";
			textBox4->Text="";
			textBox8->Text="";
			textBox9->Text="";
			textBox12->Text="";
			textBox13->Text="";
		 }


#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 Application::Exit();
			 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			
		 }
};
}

