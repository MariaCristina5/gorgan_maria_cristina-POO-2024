#pragma once

namespace CppCLRWinFormsProject {

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
	private: System::Windows::Forms::TextBox^ afisaj;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;


	private: System::Windows::Forms::Button^ buttonCalc;







	private: System::Windows::Forms::Button^ buttonImp;

	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Button^ buttonPlus;

	private:
		String^ operand1;
		String^ operand2;
		String^ operation;
	private: System::Windows::Forms::Button^ buttonIn;
	private: System::Windows::Forms::Button^ buttonClear;




	protected:

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
			this->afisaj = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonCalc = (gcnew System::Windows::Forms::Button());
			this->buttonImp = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonIn = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// afisaj
			// 
			this->afisaj->Location = System::Drawing::Point(12, 53);
			this->afisaj->Name = L"afisaj";
			this->afisaj->Size = System::Drawing::Size(401, 22);
			this->afisaj->TabIndex = 0;
			this->afisaj->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 96);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 62);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(114, 96);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 62);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(231, 96);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 62);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 180);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 62);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(114, 180);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(84, 62);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(231, 180);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(83, 62);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 263);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(84, 66);
			this->button7->TabIndex = 8;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(114, 263);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(84, 66);
			this->button8->TabIndex = 9;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(231, 263);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(83, 66);
			this->button9->TabIndex = 10;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(12, 344);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(84, 58);
			this->button0->TabIndex = 11;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &Form1::button0_Click);
			// 
			// buttonCalc
			// 
			this->buttonCalc->Location = System::Drawing::Point(231, 344);
			this->buttonCalc->Name = L"buttonCalc";
			this->buttonCalc->Size = System::Drawing::Size(83, 58);
			this->buttonCalc->TabIndex = 13;
			this->buttonCalc->Text = L"CALC";
			this->buttonCalc->UseVisualStyleBackColor = true;
			this->buttonCalc->Click += gcnew System::EventHandler(this, &Form1::buttonCalc_Click);
			// 
			// buttonImp
			// 
			this->buttonImp->Location = System::Drawing::Point(338, 180);
			this->buttonImp->Name = L"buttonImp";
			this->buttonImp->Size = System::Drawing::Size(75, 62);
			this->buttonImp->TabIndex = 15;
			this->buttonImp->Text = L"/";
			this->buttonImp->UseVisualStyleBackColor = true;
			this->buttonImp->Click += gcnew System::EventHandler(this, &Form1::buttonImp_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->Location = System::Drawing::Point(338, 263);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(75, 66);
			this->buttonMinus->TabIndex = 16;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &Form1::buttonMinus_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->Location = System::Drawing::Point(338, 344);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(75, 58);
			this->buttonPlus->TabIndex = 17;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &Form1::buttonPlus_Click);
			// 
			// buttonIn
			// 
			this->buttonIn->Location = System::Drawing::Point(338, 96);
			this->buttonIn->Name = L"buttonIn";
			this->buttonIn->Size = System::Drawing::Size(75, 62);
			this->buttonIn->TabIndex = 18;
			this->buttonIn->Text = L"*";
			this->buttonIn->UseMnemonic = false;
			this->buttonIn->UseVisualStyleBackColor = true;
			this->buttonIn->Click += gcnew System::EventHandler(this, &Form1::buttonIn_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(114, 344);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(84, 58);
			this->buttonClear->TabIndex = 19;
			this->buttonClear->Text = L"CLEAR";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &Form1::buttonClear_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(834, 493);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonIn);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonImp);
			this->Controls->Add(this->buttonCalc);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->afisaj);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "1";
	}
private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "0";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "2";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "3";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "5";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "9";
}
private: System::Void buttonImp_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisaj->Text != "") {
		operand1 = afisaj->Text;
		if (IsInteger(operand1)) {
			operation = "/";
			afisaj->Text = "";
		}
		else {
			MessageBox::Show("Please enter a valid integer number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Please enter a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Clear();
	operand1 = "";
	operand2 = "";
	operation = "|";
}
private: System::Void buttonCalc_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisaj->Text != "") {
		operand2 = afisaj->Text;
		double op1, op2;
		if (Double::TryParse(operand1, op1) && Double::TryParse(operand2, op2)) {
			double result;
			if (operation == "+")
				result = op1 + op2;
			else if (operation == "-")
				result = op1 - op2;
			else if (operation == "x")
				result = op1 * op2;
			else if (operation == "/")
				result = op1 / op2;

			afisaj->Text = result.ToString();
		}
		else {
			MessageBox::Show("Please enter valid numbers.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Please enter a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisaj->Text != "") {
		operand1 = afisaj->Text;
		if (IsInteger(operand1)) {
			operation = "+";
			afisaj->Text ="";
		}
		else {
			MessageBox::Show("Please enter a valid integer number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Please enter a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void buttonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisaj->Text != "") {
		operand1 = afisaj->Text;
		if (IsInteger(operand1)) {
			operation = "-";
			afisaj->Text = "";
		}
		else {
			MessageBox::Show("Please enter a valid integer number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Please enter a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	   private: bool IsInteger(String^ s) {
		   int n;
		   return Int32::TryParse(s, n);
	   }
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonIn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisaj->Text != "") {
		operand1 = afisaj->Text;
		if (IsInteger(operand1)) {
			operation = "x";
			afisaj->Text = "";
		}
		else {
			MessageBox::Show("Please enter a valid integer number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Please enter a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void buttonDot_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonClear_Click_1(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Clear();
	operand1 = "";
	operand2 = "";
	operation = "|";
}
};
}
