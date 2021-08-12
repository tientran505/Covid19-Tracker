#pragma once
#include "Server_Source.h"

namespace ServerGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm_Server
	/// </summary>
	/// 
	/// 

	SOCKET server;
	public ref class MyForm_Server : public System::Windows::Forms::Form
	{
	public:
		MyForm_Server(void)
		{
			
			server = createSocket("127.0.0.1", 8080);
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm_Server()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"UTM Facebook", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(307, 73);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 58);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Force Disconnect";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm_Server::Shutdown_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(203, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Server Manager";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm_Server::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Client Status:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm_Server::label3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(16, 73);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(248, 183);
			this->textBox3->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"UTM Facebook", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(307, 168);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 58);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Shutdown all Clients";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F));
			this->label5->Location = System::Drawing::Point(12, 284);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(302, 22);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Data last updated: 03/08/21 1:10 AM";
			// 
			// MyForm_Server
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(562, 338);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm_Server";
			this->Text = L"Server Corona Virus";
			this->Load += gcnew System::EventHandler(this, &MyForm_Server::MyForm_Server_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

			textBox3->Text = System::Convert::ToString(server);
		}
#pragma endregion
		
		

	private: System::Void MyForm_Server_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Shutdown_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = textBox3->Text + "\nHello";
	}


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   
};
}
