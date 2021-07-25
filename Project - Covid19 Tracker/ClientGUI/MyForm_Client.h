#pragma once
#include "Client_Source.h"
#include <msclr/marshal_cppstd.h>
#include "LoginFrom_Client.h"

namespace ClientGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm_Client
	/// </summary>
	public ref class MyForm_Client : public System::Windows::Forms::Form
	{
	public:
		MyForm_Client(void)
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
		~MyForm_Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox1->Location = System::Drawing::Point(52, 100);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(195, 35);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm_Client::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label1->Location = System::Drawing::Point(46, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"IP:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm_Client::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label2->Location = System::Drawing::Point(46, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Port:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox2->Location = System::Drawing::Point(52, 195);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 35);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(219, 269);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm_Client::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(312, 269);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm_Client::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label3->Location = System::Drawing::Point(21, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(380, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Enter Information of Server to connect!";
			// 
			// MyForm_Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(428, 317);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm_Client";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm_Client";
			this->Load += gcnew System::EventHandler(this, &MyForm_Client::MyForm_Client_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	string IP = msclr::interop::marshal_as<string>(textBox1->Text);
	int portNum = System::Convert::ToInt64(textBox2->Text);
	if (createSocket(IP, portNum) != 1) {
		MessageBox::Show("Connect to Server successful", "Connected", MessageBoxButtons::OK);

		LoginFrom_Client^ loginForm = gcnew LoginFrom_Client;
		loginForm->Show();
	}
	else MessageBox::Show("Cant' connect to Server. Try again" , "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void MyForm_Client_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
