#pragma once
#include "Client_Source.h"

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

		LoginFrom_Client(string IPAddress, int portNumber)
		{
			InitializeComponent();
			clientSocket = createSocket(IPAddress, portNumber);
			if (clientSocket != 1) {
				MessageBox::Show("Connect to Server successful", "Connected", MessageBoxButtons::OK);
			}
			else MessageBox::Show("Can't connect to Server. Try again!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
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



	private: System::Windows::Forms::LinkLabel^ linkLabel1;

	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bunifuMetroTextbox2;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bunifuMetroTextbox1;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton2;
	private: System::Windows::Forms::Panel^ panel2;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton3;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton4;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bunifuMetroTextbox3;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bunifuMetroTextbox4;


	private: System::Windows::Forms::Label^ label3;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton5;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bunifuMetroTextbox5;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuMetroTextbox2 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuMetroTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->bunifuImageButton6 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton5 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton3 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton4 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuMetroTextbox5 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuMetroTextbox3 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuMetroTextbox4 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->bunifuImageButton1);
			this->panel1->Controls->Add(this->bunifuMetroTextbox2);
			this->panel1->Controls->Add(this->bunifuMetroTextbox1);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->bunifuImageButton2);
			this->panel1->Location = System::Drawing::Point(506, 42);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(295, 376);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginFrom_Client::panel1_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumOrchid;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(93, 260);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 41);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginFrom_Client::button1_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::White;
			this->bunifuImageButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bunifuImageButton1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuImageButton1->Enabled = false;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(22, 99);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(36, 44);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 3;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			// 
			// bunifuMetroTextbox2
			// 
			this->bunifuMetroTextbox2->BackColor = System::Drawing::Color::Azure;
			this->bunifuMetroTextbox2->BorderColorFocused = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox2->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox2->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox2->BorderThickness = 3;
			this->bunifuMetroTextbox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuMetroTextbox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox2->isPassword = false;
			this->bunifuMetroTextbox2->Location = System::Drawing::Point(55, 99);
			this->bunifuMetroTextbox2->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox2->Name = L"bunifuMetroTextbox2";
			this->bunifuMetroTextbox2->Size = System::Drawing::Size(217, 44);
			this->bunifuMetroTextbox2->TabIndex = 1;
			this->bunifuMetroTextbox2->Text = L"Username";
			this->bunifuMetroTextbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuMetroTextbox2->Enter += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox2_Enter);
			this->bunifuMetroTextbox2->Leave += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox2_Leave);
			// 
			// bunifuMetroTextbox1
			// 
			this->bunifuMetroTextbox1->BackColor = System::Drawing::Color::Azure;
			this->bunifuMetroTextbox1->BorderColorFocused = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox1->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox1->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox1->BorderThickness = 3;
			this->bunifuMetroTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuMetroTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox1->isPassword = false;
			this->bunifuMetroTextbox1->Location = System::Drawing::Point(55, 165);
			this->bunifuMetroTextbox1->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox1->Name = L"bunifuMetroTextbox1";
			this->bunifuMetroTextbox1->Size = System::Drawing::Size(217, 44);
			this->bunifuMetroTextbox1->TabIndex = 1;
			this->bunifuMetroTextbox1->Text = L"Password";
			this->bunifuMetroTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuMetroTextbox1->OnValueChanged += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox1_OnValueChanged);
			this->bunifuMetroTextbox1->Enter += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox1_Enter);
			this->bunifuMetroTextbox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginFrom_Client::bunifuMetroTextbox1_KeyDown);
			this->bunifuMetroTextbox1->Leave += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox1_Leave);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Red;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13));
			this->linkLabel1->ForeColor = System::Drawing::Color::Maroon;
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(31, 320);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(232, 21);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Don\'t have an acount\? Sign Up";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::Aqua;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginFrom_Client::linkLabel1_LinkClicked);
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
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::White;
			this->bunifuImageButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bunifuImageButton2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuImageButton2->Enabled = false;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(22, 165);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(36, 44);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 3;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Cyan;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->bunifuImageButton6);
			this->panel2->Controls->Add(this->bunifuImageButton5);
			this->panel2->Controls->Add(this->bunifuImageButton3);
			this->panel2->Controls->Add(this->bunifuImageButton4);
			this->panel2->Controls->Add(this->bunifuMetroTextbox5);
			this->panel2->Controls->Add(this->bunifuMetroTextbox3);
			this->panel2->Controls->Add(this->bunifuMetroTextbox4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(128, 42);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(295, 376);
			this->panel2->TabIndex = 8;
			this->panel2->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(36, 260);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(225, 22);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Username has been used";
			this->label5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(33, 260);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(239, 22);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Password does not match!";
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &LoginFrom_Client::label4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::CadetBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Info;
			this->button2->Location = System::Drawing::Point(65, 300);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button2->Size = System::Drawing::Size(165, 41);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Create Account";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LoginFrom_Client::button2_Click);
			// 
			// bunifuImageButton6
			// 
			this->bunifuImageButton6->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton6.Image")));
			this->bunifuImageButton6->ImageActive = nullptr;
			this->bunifuImageButton6->Location = System::Drawing::Point(22, 15);
			this->bunifuImageButton6->Name = L"bunifuImageButton6";
			this->bunifuImageButton6->Size = System::Drawing::Size(36, 34);
			this->bunifuImageButton6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton6->TabIndex = 9;
			this->bunifuImageButton6->TabStop = false;
			this->bunifuImageButton6->Zoom = 10;
			this->bunifuImageButton6->Click += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuImageButton6_Click);
			// 
			// bunifuImageButton5
			// 
			this->bunifuImageButton5->BackColor = System::Drawing::Color::White;
			this->bunifuImageButton5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton5.BackgroundImage")));
			this->bunifuImageButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bunifuImageButton5->Enabled = false;
			this->bunifuImageButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton5.Image")));
			this->bunifuImageButton5->ImageActive = nullptr;
			this->bunifuImageButton5->Location = System::Drawing::Point(22, 197);
			this->bunifuImageButton5->Name = L"bunifuImageButton5";
			this->bunifuImageButton5->Size = System::Drawing::Size(36, 44);
			this->bunifuImageButton5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton5->TabIndex = 3;
			this->bunifuImageButton5->TabStop = false;
			this->bunifuImageButton5->Zoom = 10;
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuImageButton3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuImageButton3->Enabled = false;
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = nullptr;
			this->bunifuImageButton3->Location = System::Drawing::Point(22, 134);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(36, 44);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 3;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			// 
			// bunifuImageButton4
			// 
			this->bunifuImageButton4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuImageButton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bunifuImageButton4->Enabled = false;
			this->bunifuImageButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.Image")));
			this->bunifuImageButton4->ImageActive = nullptr;
			this->bunifuImageButton4->Location = System::Drawing::Point(22, 73);
			this->bunifuImageButton4->Name = L"bunifuImageButton4";
			this->bunifuImageButton4->Size = System::Drawing::Size(36, 44);
			this->bunifuImageButton4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton4->TabIndex = 3;
			this->bunifuImageButton4->TabStop = false;
			this->bunifuImageButton4->Zoom = 10;
			// 
			// bunifuMetroTextbox5
			// 
			this->bunifuMetroTextbox5->BackColor = System::Drawing::Color::Azure;
			this->bunifuMetroTextbox5->BorderColorFocused = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox5->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox5->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox5->BorderThickness = 3;
			this->bunifuMetroTextbox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuMetroTextbox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox5->isPassword = false;
			this->bunifuMetroTextbox5->Location = System::Drawing::Point(55, 197);
			this->bunifuMetroTextbox5->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox5->Name = L"bunifuMetroTextbox5";
			this->bunifuMetroTextbox5->Size = System::Drawing::Size(217, 44);
			this->bunifuMetroTextbox5->TabIndex = 2;
			this->bunifuMetroTextbox5->Text = L"Repeat your password";
			this->bunifuMetroTextbox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuMetroTextbox5->OnValueChanged += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox5_OnValueChanged);
			this->bunifuMetroTextbox5->Enter += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox5_Enter);
			this->bunifuMetroTextbox5->Leave += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox5_Leave);
			// 
			// bunifuMetroTextbox3
			// 
			this->bunifuMetroTextbox3->BackColor = System::Drawing::Color::Azure;
			this->bunifuMetroTextbox3->BorderColorFocused = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox3->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox3->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox3->BorderThickness = 3;
			this->bunifuMetroTextbox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuMetroTextbox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox3->isPassword = false;
			this->bunifuMetroTextbox3->Location = System::Drawing::Point(55, 73);
			this->bunifuMetroTextbox3->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox3->Name = L"bunifuMetroTextbox3";
			this->bunifuMetroTextbox3->Size = System::Drawing::Size(217, 44);
			this->bunifuMetroTextbox3->TabIndex = 0;
			this->bunifuMetroTextbox3->Text = L"Username";
			this->bunifuMetroTextbox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuMetroTextbox3->Enter += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox3_Enter);
			this->bunifuMetroTextbox3->Leave += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox3_Leave);
			// 
			// bunifuMetroTextbox4
			// 
			this->bunifuMetroTextbox4->BackColor = System::Drawing::Color::Azure;
			this->bunifuMetroTextbox4->BorderColorFocused = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox4->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox4->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bunifuMetroTextbox4->BorderThickness = 3;
			this->bunifuMetroTextbox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuMetroTextbox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox4->isPassword = false;
			this->bunifuMetroTextbox4->Location = System::Drawing::Point(55, 134);
			this->bunifuMetroTextbox4->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox4->Name = L"bunifuMetroTextbox4";
			this->bunifuMetroTextbox4->Size = System::Drawing::Size(217, 44);
			this->bunifuMetroTextbox4->TabIndex = 1;
			this->bunifuMetroTextbox4->Text = L"Password";
			this->bunifuMetroTextbox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuMetroTextbox4->Enter += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox4_Enter);
			this->bunifuMetroTextbox4->Leave += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox4_Leave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"UTM Hanzel", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(100, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 34);
			this->label3->TabIndex = 0;
			this->label3->Text = L"SignUp";
			// 
			// LoginFrom_Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(876, 491);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"LoginFrom_Client";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}

private: System::Void bunifuMetroTextbox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (bunifuMetroTextbox1->Text == "Password") {
		bunifuMetroTextbox1->isPassword = true;
		bunifuMetroTextbox1->Text = "";
	}
}
private: System::Void bunifuMetroTextbox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (bunifuMetroTextbox1->Text == "") {
		bunifuMetroTextbox1->Text = "Password";
		bunifuMetroTextbox1->isPassword = false;
	}
}
private: System::Void bunifuMetroTextbox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (bunifuMetroTextbox2->Text == "Username") {
		bunifuMetroTextbox2->Text = "";
	}
}
private: System::Void bunifuMetroTextbox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (bunifuMetroTextbox2->Text == "") {
		bunifuMetroTextbox2->Text = "Username";
	}
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = true;

	label4->Visible = false;
	label5->Visible = false;

	bunifuMetroTextbox3->Text = "Username";
	bunifuMetroTextbox4->Text = "Password";
	bunifuMetroTextbox5->Text = "Repeat your password";

	bunifuMetroTextbox4->isPassword = false;
	bunifuMetroTextbox5->isPassword = false;
}
private: System::Void bunifuImageButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	bunifuMetroTextbox2->Text = "Username";
	bunifuMetroTextbox1->Text = "Password";
	panel2->Visible = false;
	panel1->Visible = true;
}
private: System::Void bunifuMetroTextbox3_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (bunifuMetroTextbox3->Text == "Username") {
		bunifuMetroTextbox3->Text = "";
	}
}
private: System::Void bunifuMetroTextbox3_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (bunifuMetroTextbox3->Text == "") {
		bunifuMetroTextbox3->Text = "Username";
	}
}
private: System::Void bunifuMetroTextbox4_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (bunifuMetroTextbox4->Text == "Password") {
		bunifuMetroTextbox4->Text = "";
		bunifuMetroTextbox4->isPassword = true;
	}
}
private: System::Void bunifuMetroTextbox4_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (bunifuMetroTextbox4->Text == "") {
		bunifuMetroTextbox4->Text = "Password";
		bunifuMetroTextbox4->isPassword = false;
	}
}
private: System::Void bunifuMetroTextbox5_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (bunifuMetroTextbox5->Text == "Repeat your password") {
		bunifuMetroTextbox5->Text = "";
		bunifuMetroTextbox5->isPassword = true;
	}
}
private: System::Void bunifuMetroTextbox5_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (bunifuMetroTextbox5->Text == "") {
		bunifuMetroTextbox5->Text = "Repeat your password";
		bunifuMetroTextbox5->isPassword = false;
	}
}
private: System::Void bunifuMetroTextbox1_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bunifuMetroTextbox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		button1->PerformClick();
	}
}
private: System::Void bunifuThinButton21_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Access Granted", "Welcome!", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	string username = msclr::interop::marshal_as<string>(bunifuMetroTextbox2->Text);
	string password = msclr::interop::marshal_as<string>(bunifuMetroTextbox1->Text);
	
	string messSend = "1-" + username + "|" + password;
	

	send(clientSocket, messSend.c_str(), messSend.size() + 1, 0);
	
	char buf[4];
	ZeroMemory(buf, 4);

	recv(clientSocket, buf, 4, 0);

	if (strcmp(buf, "100") == 0) {
		MessageBox::Show("Access Granted", "Welcome!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	else if (strcmp(buf, "101") == 0)
	{
		MessageBox::Show("Wrong Password! Please try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else if (strcmp(buf, "102") == 0) {
		MessageBox::Show("Account does not exist! Try again!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	string username = msclr::interop::marshal_as<string>(bunifuMetroTextbox3->Text);
	string password = msclr::interop::marshal_as<string>(bunifuMetroTextbox4->Text);
	string repeatPassword = msclr::interop::marshal_as<string>(bunifuMetroTextbox5->Text);

	label5->Visible = false;

	if (password != repeatPassword) {
		label4->Visible = true;
	}

	else {
		label4->Visible = false;
		string message = "2-" + username + "|" + password;
		send(clientSocket, message.c_str(), message.size() + 1, 0);

		char buf[4];
		ZeroMemory(buf, 4);

		recv(clientSocket, buf, 4, 0);

		if (strcmp(buf, "201") == 0)
		{
			MessageBox::Show("Your Account has been successfully created", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		else if (strcmp(buf, "200") == 0)
		{
			label5->Visible = true;
		}
	}
}
private: System::Void bunifuMetroTextbox5_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
