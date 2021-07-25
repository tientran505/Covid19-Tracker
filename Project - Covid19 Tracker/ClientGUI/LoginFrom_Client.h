#pragma once

namespace ClientGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginFrom_Client
	/// </summary>
	public ref class LoginFrom_Client : public System::Windows::Forms::Form
	{
	public:
		LoginFrom_Client(void)
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
		~LoginFrom_Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox2;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox1;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton22;

	protected:




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginFrom_Client::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuTextbox2 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox1 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton22 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Cyan;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->linkLabel2);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->bunifuThinButton22);
			this->panel1->Controls->Add(this->bunifuTextbox2);
			this->panel1->Controls->Add(this->bunifuTextbox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(283, 49);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(295, 376);
			this->panel1->TabIndex = 0;
			// 
			// bunifuTextbox2
			// 
			this->bunifuTextbox2->BackColor = System::Drawing::Color::Snow;
			this->bunifuTextbox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox2.BackgroundImage")));
			this->bunifuTextbox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuTextbox2->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuTextbox2->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox2.Icon")));
			this->bunifuTextbox2->Location = System::Drawing::Point(22, 167);
			this->bunifuTextbox2->Name = L"bunifuTextbox2";
			this->bunifuTextbox2->Size = System::Drawing::Size(250, 42);
			this->bunifuTextbox2->TabIndex = 2;
			this->bunifuTextbox2->text = L"Password";
			// 
			// bunifuTextbox1
			// 
			this->bunifuTextbox1->BackColor = System::Drawing::Color::Snow;
			this->bunifuTextbox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.BackgroundImage")));
			this->bunifuTextbox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuTextbox1->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuTextbox1->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.Icon")));
			this->bunifuTextbox1->Location = System::Drawing::Point(22, 106);
			this->bunifuTextbox1->Name = L"bunifuTextbox1";
			this->bunifuTextbox1->Size = System::Drawing::Size(250, 42);
			this->bunifuTextbox1->TabIndex = 1;
			this->bunifuTextbox1->text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"UTM Hanzel", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(68, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 34);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Member Login";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"UTM Hanzel", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(39, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"COVID-19 TRACKER";
			// 
			// bunifuThinButton22
			// 
			this->bunifuThinButton22->ActiveBorderThickness = 1;
			this->bunifuThinButton22->ActiveCornerRadius = 20;
			this->bunifuThinButton22->ActiveFillColor = System::Drawing::Color::LawnGreen;
			this->bunifuThinButton22->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton22->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton22->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton22.BackgroundImage")));
			this->bunifuThinButton22->ButtonText = L"Login";
			this->bunifuThinButton22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton22->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuThinButton22->IdleBorderThickness = 1;
			this->bunifuThinButton22->IdleCornerRadius = 20;
			this->bunifuThinButton22->IdleFillColor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleForecolor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton22->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton22->Location = System::Drawing::Point(83, 277);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->Size = System::Drawing::Size(122, 41);
			this->bunifuThinButton22->TabIndex = 4;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Red;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13));
			this->linkLabel1->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(113, 323);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(65, 21);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Sign up";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkColor = System::Drawing::Color::White;
			this->linkLabel2->Location = System::Drawing::Point(150, 221);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(116, 17);
			this->linkLabel2->TabIndex = 6;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Forgot Password\?";
			// 
			// LoginFrom_Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(876, 491);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"LoginFrom_Client";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginFrom_Client";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	};
}
