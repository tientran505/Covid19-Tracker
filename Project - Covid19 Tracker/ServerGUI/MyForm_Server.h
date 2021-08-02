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
	public ref class MyForm_Server : public System::Windows::Forms::Form
	{
	public:
		MyForm_Server(void)
		{
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;

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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(245, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Server management";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(12, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Client Status:";
			// 
			// MyForm_Server
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(623, 373);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm_Server";
			this->Text = L"MyForm_Server";
			this->Load += gcnew System::EventHandler(this, &MyForm_Server::MyForm_Server_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Server_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
