#pragma once
#include <fstream>  
#include <string>   
#include <iostream> 


char rootdir[] = "d:\\data"; 
FILE * pFile, *pFile1;
char fname[30];
char fpath[100]; // file name for logging
char fpath1[100];


//namespace oring {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for control
	/// </summary>
	public ref class control : public System::Windows::Forms::Form
	{
	public:
		control(void)
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
		~control()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  Hidden_exp;
	private: System::Windows::Forms::CheckBox^  Visible_exp;
	protected: 

	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  Close;
	private: System::Windows::Forms::Button^  ok_button;

	private: System::Windows::Forms::Label^  exp_no;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->Hidden_exp = (gcnew System::Windows::Forms::CheckBox());
			this->Visible_exp = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Close = (gcnew System::Windows::Forms::Button());
			this->ok_button = (gcnew System::Windows::Forms::Button());
			this->exp_no = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// Hidden_exp
			// 
			this->Hidden_exp->AutoSize = true;
			this->Hidden_exp->Location = System::Drawing::Point(471, 50);
			this->Hidden_exp->Name = L"Hidden_exp";
			this->Hidden_exp->Size = System::Drawing::Size(60, 17);
			this->Hidden_exp->TabIndex = 0;
			this->Hidden_exp->Text = L"Hidden";
			this->Hidden_exp->UseVisualStyleBackColor = true;
			this->Hidden_exp->CheckedChanged += gcnew System::EventHandler(this, &control::Hidden_exp_CheckedChanged);
			// 
			// Visible_exp
			// 
			this->Visible_exp->AutoSize = true;
			this->Visible_exp->Location = System::Drawing::Point(471, 73);
			this->Visible_exp->Name = L"Visible_exp";
			this->Visible_exp->Size = System::Drawing::Size(56, 17);
			this->Visible_exp->TabIndex = 1;
			this->Visible_exp->Text = L"Visible";
			this->Visible_exp->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(100, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"No of experiments:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(228, 86);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(40, 20);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &control::numericUpDown1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 4;
			// 
			// Close
			// 
			this->Close->Location = System::Drawing::Point(428, 206);
			this->Close->Name = L"Close";
			this->Close->Size = System::Drawing::Size(177, 37);
			this->Close->TabIndex = 5;
			this->Close->Text = L"close";
			this->Close->UseVisualStyleBackColor = true;
			this->Close->Click += gcnew System::EventHandler(this, &control::Close_Click);
			// 
			// ok_button
			// 
			this->ok_button->Location = System::Drawing::Point(228, 206);
			this->ok_button->Name = L"ok_button";
			this->ok_button->Size = System::Drawing::Size(159, 37);
			this->ok_button->TabIndex = 6;
			this->ok_button->Text = L"OK";
			this->ok_button->UseVisualStyleBackColor = true;
			this->ok_button->Click += gcnew System::EventHandler(this, &control::ok_button_Click);
			// 
			// exp_no
			// 
			this->exp_no->AutoSize = true;
			this->exp_no->Location = System::Drawing::Point(100, 54);
			this->exp_no->Name = L"exp_no";
			this->exp_no->Size = System::Drawing::Size(107, 13);
			this->exp_no->TabIndex = 8;
			this->exp_no->Text = L"Name of experiment: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(223, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &control::textBox1_TextChanged);
			// 
			// control
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(651, 286);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->exp_no);
			this->Controls->Add(this->ok_button);
			this->Controls->Add(this->Close);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Visible_exp);
			this->Controls->Add(this->Hidden_exp);
			this->Name = L"control";
			this->Text = L"control";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

private: System::Void Close_Click(System::Object^  sender, System::EventArgs^  e) {
    //close();


			 }
private: System::Void Hidden_exp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 extern int NTRIALS;

		 }
private: System::Void ok_button_Click(System::Object^  sender, System::EventArgs^  e) {
		  
			 

		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {


	  //numericUpDown1 = gcnew NumericUpDown;
	  
      // Dock the control to the top of the form.
     //numericUpDown1->Dock = System::Windows::Forms::DockStyle::Top;

      // Set the Minimum, Maximum, and initial Value.
      numericUpDown1->Value = 5;
	  numericUpDown1->Increment = 5;
      numericUpDown1->Maximum = 2500;
      numericUpDown1->Minimum = -100;

      // Add the NumericUpDown to the Form.
      Controls->Add( numericUpDown1 );
		 }

		
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
  
  
			// printf ("File name for logging:");
	       //  scanf("%s",fname);

			OnClick 
		 }
};

