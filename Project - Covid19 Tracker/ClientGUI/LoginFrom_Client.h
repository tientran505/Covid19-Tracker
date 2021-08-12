#pragma once
#include "Client_Source.h"

namespace ClientGUI {

	static SOCKET clientSocket;
	static string IPAddress;

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
		}

		LoginFrom_Client(string IPAddr)
		{
			InitializeComponent();
			IPAddress = IPAddr;
			
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
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bunifuMetroTextbox2;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bunifuMetroTextbox1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton6;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton5;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton3;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton4;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bunifuMetroTextbox5;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bunifuMetroTextbox3;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bunifuMetroTextbox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ mainPnl;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Bunifu::Framework::UI::BunifuTileButton^ bunifuTileButton1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button3;


	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


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
			this->mainPnl = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->bunifuTileButton1 = (gcnew Bunifu::Framework::UI::BunifuTileButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->BeginInit();
			this->mainPnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->bunifuImageButton1);
			this->panel1->Controls->Add(this->bunifuMetroTextbox2);
			this->panel1->Controls->Add(this->bunifuMetroTextbox1);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->bunifuImageButton2);
			this->panel1->Name = L"panel1";
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginFrom_Client::panel1_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumOrchid;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginFrom_Client::button1_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->bunifuImageButton1, L"bunifuImageButton1");
			this->bunifuImageButton1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
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
			resources->ApplyResources(this->bunifuMetroTextbox2, L"bunifuMetroTextbox2");
			this->bunifuMetroTextbox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox2->isPassword = false;
			this->bunifuMetroTextbox2->Name = L"bunifuMetroTextbox2";
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
			resources->ApplyResources(this->bunifuMetroTextbox1, L"bunifuMetroTextbox1");
			this->bunifuMetroTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox1->isPassword = false;
			this->bunifuMetroTextbox1->Name = L"bunifuMetroTextbox1";
			this->bunifuMetroTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuMetroTextbox1->OnValueChanged += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox1_OnValueChanged);
			this->bunifuMetroTextbox1->Enter += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox1_Enter);
			this->bunifuMetroTextbox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginFrom_Client::bunifuMetroTextbox1_KeyDown);
			this->bunifuMetroTextbox1->Leave += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox1_Leave);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Red;
			resources->ApplyResources(this->linkLabel1, L"linkLabel1");
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->ForeColor = System::Drawing::Color::Maroon;
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->TabStop = true;
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::Aqua;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginFrom_Client::linkLabel1_LinkClicked);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Name = L"label2";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Name = L"label1";
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->bunifuImageButton2, L"bunifuImageButton2");
			this->bunifuImageButton2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Cyan;
			resources->ApplyResources(this->panel2, L"panel2");
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
			this->panel2->Name = L"panel2";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Name = L"label5";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Name = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &LoginFrom_Client::label4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::CadetBlue;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->ForeColor = System::Drawing::SystemColors::Info;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LoginFrom_Client::button2_Click);
			// 
			// bunifuImageButton6
			// 
			this->bunifuImageButton6->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->bunifuImageButton6, L"bunifuImageButton6");
			this->bunifuImageButton6->ImageActive = nullptr;
			this->bunifuImageButton6->Name = L"bunifuImageButton6";
			this->bunifuImageButton6->TabStop = false;
			this->bunifuImageButton6->Zoom = 10;
			this->bunifuImageButton6->Click += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuImageButton6_Click);
			// 
			// bunifuImageButton5
			// 
			this->bunifuImageButton5->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->bunifuImageButton5, L"bunifuImageButton5");
			this->bunifuImageButton5->ImageActive = nullptr;
			this->bunifuImageButton5->Name = L"bunifuImageButton5";
			this->bunifuImageButton5->TabStop = false;
			this->bunifuImageButton5->Zoom = 10;
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->bunifuImageButton3, L"bunifuImageButton3");
			this->bunifuImageButton3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bunifuImageButton3->ImageActive = nullptr;
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			// 
			// bunifuImageButton4
			// 
			this->bunifuImageButton4->BackColor = System::Drawing::Color::WhiteSmoke;
			resources->ApplyResources(this->bunifuImageButton4, L"bunifuImageButton4");
			this->bunifuImageButton4->ImageActive = nullptr;
			this->bunifuImageButton4->Name = L"bunifuImageButton4";
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
			resources->ApplyResources(this->bunifuMetroTextbox5, L"bunifuMetroTextbox5");
			this->bunifuMetroTextbox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox5->isPassword = false;
			this->bunifuMetroTextbox5->Name = L"bunifuMetroTextbox5";
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
			resources->ApplyResources(this->bunifuMetroTextbox3, L"bunifuMetroTextbox3");
			this->bunifuMetroTextbox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox3->isPassword = false;
			this->bunifuMetroTextbox3->Name = L"bunifuMetroTextbox3";
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
			resources->ApplyResources(this->bunifuMetroTextbox4, L"bunifuMetroTextbox4");
			this->bunifuMetroTextbox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox4->isPassword = false;
			this->bunifuMetroTextbox4->Name = L"bunifuMetroTextbox4";
			this->bunifuMetroTextbox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuMetroTextbox4->Enter += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox4_Enter);
			this->bunifuMetroTextbox4->Leave += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuMetroTextbox4_Leave);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Name = L"label3";
			// 
			// mainPnl
			// 
			resources->ApplyResources(this->mainPnl, L"mainPnl");
			this->mainPnl->Controls->Add(this->button3);
			this->mainPnl->Controls->Add(this->pictureBox4);
			this->mainPnl->Controls->Add(this->pictureBox3);
			this->mainPnl->Controls->Add(this->label11);
			this->mainPnl->Controls->Add(this->comboBox1);
			this->mainPnl->Controls->Add(this->dateTimePicker1);
			this->mainPnl->Controls->Add(this->bunifuTileButton1);
			this->mainPnl->Controls->Add(this->label10);
			this->mainPnl->Controls->Add(this->label9);
			this->mainPnl->Controls->Add(this->label15);
			this->mainPnl->Controls->Add(this->label14);
			this->mainPnl->Controls->Add(this->label18);
			this->mainPnl->Controls->Add(this->label17);
			this->mainPnl->Controls->Add(this->label21);
			this->mainPnl->Controls->Add(this->label23);
			this->mainPnl->Controls->Add(this->label20);
			this->mainPnl->Controls->Add(this->label22);
			this->mainPnl->Controls->Add(this->label19);
			this->mainPnl->Controls->Add(this->label16);
			this->mainPnl->Controls->Add(this->label12);
			this->mainPnl->Controls->Add(this->label8);
			this->mainPnl->Controls->Add(this->splitter1);
			this->mainPnl->Controls->Add(this->label13);
			this->mainPnl->Controls->Add(this->label7);
			this->mainPnl->Controls->Add(this->label6);
			this->mainPnl->Controls->Add(this->pictureBox2);
			this->mainPnl->Controls->Add(this->pictureBox1);
			this->mainPnl->Name = L"mainPnl";
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LoginFrom_Client::button3_Click);
			// 
			// pictureBox4
			// 
			resources->ApplyResources(this->pictureBox4, L"pictureBox4");
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->Name = L"label11";
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox1->DropDownHeight = 200;
			resources->ApplyResources(this->comboBox1, L"comboBox1");
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(222) {
				resources->GetString(L"comboBox1.Items"), resources->GetString(L"comboBox1.Items1"),
					resources->GetString(L"comboBox1.Items2"), resources->GetString(L"comboBox1.Items3"), resources->GetString(L"comboBox1.Items4"),
					resources->GetString(L"comboBox1.Items5"), resources->GetString(L"comboBox1.Items6"), resources->GetString(L"comboBox1.Items7"),
					resources->GetString(L"comboBox1.Items8"), resources->GetString(L"comboBox1.Items9"), resources->GetString(L"comboBox1.Items10"),
					resources->GetString(L"comboBox1.Items11"), resources->GetString(L"comboBox1.Items12"), resources->GetString(L"comboBox1.Items13"),
					resources->GetString(L"comboBox1.Items14"), resources->GetString(L"comboBox1.Items15"), resources->GetString(L"comboBox1.Items16"),
					resources->GetString(L"comboBox1.Items17"), resources->GetString(L"comboBox1.Items18"), resources->GetString(L"comboBox1.Items19"),
					resources->GetString(L"comboBox1.Items20"), resources->GetString(L"comboBox1.Items21"), resources->GetString(L"comboBox1.Items22"),
					resources->GetString(L"comboBox1.Items23"), resources->GetString(L"comboBox1.Items24"), resources->GetString(L"comboBox1.Items25"),
					resources->GetString(L"comboBox1.Items26"), resources->GetString(L"comboBox1.Items27"), resources->GetString(L"comboBox1.Items28"),
					resources->GetString(L"comboBox1.Items29"), resources->GetString(L"comboBox1.Items30"), resources->GetString(L"comboBox1.Items31"),
					resources->GetString(L"comboBox1.Items32"), resources->GetString(L"comboBox1.Items33"), resources->GetString(L"comboBox1.Items34"),
					resources->GetString(L"comboBox1.Items35"), resources->GetString(L"comboBox1.Items36"), resources->GetString(L"comboBox1.Items37"),
					resources->GetString(L"comboBox1.Items38"), resources->GetString(L"comboBox1.Items39"), resources->GetString(L"comboBox1.Items40"),
					resources->GetString(L"comboBox1.Items41"), resources->GetString(L"comboBox1.Items42"), resources->GetString(L"comboBox1.Items43"),
					resources->GetString(L"comboBox1.Items44"), resources->GetString(L"comboBox1.Items45"), resources->GetString(L"comboBox1.Items46"),
					resources->GetString(L"comboBox1.Items47"), resources->GetString(L"comboBox1.Items48"), resources->GetString(L"comboBox1.Items49"),
					resources->GetString(L"comboBox1.Items50"), resources->GetString(L"comboBox1.Items51"), resources->GetString(L"comboBox1.Items52"),
					resources->GetString(L"comboBox1.Items53"), resources->GetString(L"comboBox1.Items54"), resources->GetString(L"comboBox1.Items55"),
					resources->GetString(L"comboBox1.Items56"), resources->GetString(L"comboBox1.Items57"), resources->GetString(L"comboBox1.Items58"),
					resources->GetString(L"comboBox1.Items59"), resources->GetString(L"comboBox1.Items60"), resources->GetString(L"comboBox1.Items61"),
					resources->GetString(L"comboBox1.Items62"), resources->GetString(L"comboBox1.Items63"), resources->GetString(L"comboBox1.Items64"),
					resources->GetString(L"comboBox1.Items65"), resources->GetString(L"comboBox1.Items66"), resources->GetString(L"comboBox1.Items67"),
					resources->GetString(L"comboBox1.Items68"), resources->GetString(L"comboBox1.Items69"), resources->GetString(L"comboBox1.Items70"),
					resources->GetString(L"comboBox1.Items71"), resources->GetString(L"comboBox1.Items72"), resources->GetString(L"comboBox1.Items73"),
					resources->GetString(L"comboBox1.Items74"), resources->GetString(L"comboBox1.Items75"), resources->GetString(L"comboBox1.Items76"),
					resources->GetString(L"comboBox1.Items77"), resources->GetString(L"comboBox1.Items78"), resources->GetString(L"comboBox1.Items79"),
					resources->GetString(L"comboBox1.Items80"), resources->GetString(L"comboBox1.Items81"), resources->GetString(L"comboBox1.Items82"),
					resources->GetString(L"comboBox1.Items83"), resources->GetString(L"comboBox1.Items84"), resources->GetString(L"comboBox1.Items85"),
					resources->GetString(L"comboBox1.Items86"), resources->GetString(L"comboBox1.Items87"), resources->GetString(L"comboBox1.Items88"),
					resources->GetString(L"comboBox1.Items89"), resources->GetString(L"comboBox1.Items90"), resources->GetString(L"comboBox1.Items91"),
					resources->GetString(L"comboBox1.Items92"), resources->GetString(L"comboBox1.Items93"), resources->GetString(L"comboBox1.Items94"),
					resources->GetString(L"comboBox1.Items95"), resources->GetString(L"comboBox1.Items96"), resources->GetString(L"comboBox1.Items97"),
					resources->GetString(L"comboBox1.Items98"), resources->GetString(L"comboBox1.Items99"), resources->GetString(L"comboBox1.Items100"),
					resources->GetString(L"comboBox1.Items101"), resources->GetString(L"comboBox1.Items102"), resources->GetString(L"comboBox1.Items103"),
					resources->GetString(L"comboBox1.Items104"), resources->GetString(L"comboBox1.Items105"), resources->GetString(L"comboBox1.Items106"),
					resources->GetString(L"comboBox1.Items107"), resources->GetString(L"comboBox1.Items108"), resources->GetString(L"comboBox1.Items109"),
					resources->GetString(L"comboBox1.Items110"), resources->GetString(L"comboBox1.Items111"), resources->GetString(L"comboBox1.Items112"),
					resources->GetString(L"comboBox1.Items113"), resources->GetString(L"comboBox1.Items114"), resources->GetString(L"comboBox1.Items115"),
					resources->GetString(L"comboBox1.Items116"), resources->GetString(L"comboBox1.Items117"), resources->GetString(L"comboBox1.Items118"),
					resources->GetString(L"comboBox1.Items119"), resources->GetString(L"comboBox1.Items120"), resources->GetString(L"comboBox1.Items121"),
					resources->GetString(L"comboBox1.Items122"), resources->GetString(L"comboBox1.Items123"), resources->GetString(L"comboBox1.Items124"),
					resources->GetString(L"comboBox1.Items125"), resources->GetString(L"comboBox1.Items126"), resources->GetString(L"comboBox1.Items127"),
					resources->GetString(L"comboBox1.Items128"), resources->GetString(L"comboBox1.Items129"), resources->GetString(L"comboBox1.Items130"),
					resources->GetString(L"comboBox1.Items131"), resources->GetString(L"comboBox1.Items132"), resources->GetString(L"comboBox1.Items133"),
					resources->GetString(L"comboBox1.Items134"), resources->GetString(L"comboBox1.Items135"), resources->GetString(L"comboBox1.Items136"),
					resources->GetString(L"comboBox1.Items137"), resources->GetString(L"comboBox1.Items138"), resources->GetString(L"comboBox1.Items139"),
					resources->GetString(L"comboBox1.Items140"), resources->GetString(L"comboBox1.Items141"), resources->GetString(L"comboBox1.Items142"),
					resources->GetString(L"comboBox1.Items143"), resources->GetString(L"comboBox1.Items144"), resources->GetString(L"comboBox1.Items145"),
					resources->GetString(L"comboBox1.Items146"), resources->GetString(L"comboBox1.Items147"), resources->GetString(L"comboBox1.Items148"),
					resources->GetString(L"comboBox1.Items149"), resources->GetString(L"comboBox1.Items150"), resources->GetString(L"comboBox1.Items151"),
					resources->GetString(L"comboBox1.Items152"), resources->GetString(L"comboBox1.Items153"), resources->GetString(L"comboBox1.Items154"),
					resources->GetString(L"comboBox1.Items155"), resources->GetString(L"comboBox1.Items156"), resources->GetString(L"comboBox1.Items157"),
					resources->GetString(L"comboBox1.Items158"), resources->GetString(L"comboBox1.Items159"), resources->GetString(L"comboBox1.Items160"),
					resources->GetString(L"comboBox1.Items161"), resources->GetString(L"comboBox1.Items162"), resources->GetString(L"comboBox1.Items163"),
					resources->GetString(L"comboBox1.Items164"), resources->GetString(L"comboBox1.Items165"), resources->GetString(L"comboBox1.Items166"),
					resources->GetString(L"comboBox1.Items167"), resources->GetString(L"comboBox1.Items168"), resources->GetString(L"comboBox1.Items169"),
					resources->GetString(L"comboBox1.Items170"), resources->GetString(L"comboBox1.Items171"), resources->GetString(L"comboBox1.Items172"),
					resources->GetString(L"comboBox1.Items173"), resources->GetString(L"comboBox1.Items174"), resources->GetString(L"comboBox1.Items175"),
					resources->GetString(L"comboBox1.Items176"), resources->GetString(L"comboBox1.Items177"), resources->GetString(L"comboBox1.Items178"),
					resources->GetString(L"comboBox1.Items179"), resources->GetString(L"comboBox1.Items180"), resources->GetString(L"comboBox1.Items181"),
					resources->GetString(L"comboBox1.Items182"), resources->GetString(L"comboBox1.Items183"), resources->GetString(L"comboBox1.Items184"),
					resources->GetString(L"comboBox1.Items185"), resources->GetString(L"comboBox1.Items186"), resources->GetString(L"comboBox1.Items187"),
					resources->GetString(L"comboBox1.Items188"), resources->GetString(L"comboBox1.Items189"), resources->GetString(L"comboBox1.Items190"),
					resources->GetString(L"comboBox1.Items191"), resources->GetString(L"comboBox1.Items192"), resources->GetString(L"comboBox1.Items193"),
					resources->GetString(L"comboBox1.Items194"), resources->GetString(L"comboBox1.Items195"), resources->GetString(L"comboBox1.Items196"),
					resources->GetString(L"comboBox1.Items197"), resources->GetString(L"comboBox1.Items198"), resources->GetString(L"comboBox1.Items199"),
					resources->GetString(L"comboBox1.Items200"), resources->GetString(L"comboBox1.Items201"), resources->GetString(L"comboBox1.Items202"),
					resources->GetString(L"comboBox1.Items203"), resources->GetString(L"comboBox1.Items204"), resources->GetString(L"comboBox1.Items205"),
					resources->GetString(L"comboBox1.Items206"), resources->GetString(L"comboBox1.Items207"), resources->GetString(L"comboBox1.Items208"),
					resources->GetString(L"comboBox1.Items209"), resources->GetString(L"comboBox1.Items210"), resources->GetString(L"comboBox1.Items211"),
					resources->GetString(L"comboBox1.Items212"), resources->GetString(L"comboBox1.Items213"), resources->GetString(L"comboBox1.Items214"),
					resources->GetString(L"comboBox1.Items215"), resources->GetString(L"comboBox1.Items216"), resources->GetString(L"comboBox1.Items217"),
					resources->GetString(L"comboBox1.Items218"), resources->GetString(L"comboBox1.Items219"), resources->GetString(L"comboBox1.Items220"),
					resources->GetString(L"comboBox1.Items221")
			});
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Sorted = true;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &LoginFrom_Client::comboBox1_SelectedIndexChanged);
			this->comboBox1->Leave += gcnew System::EventHandler(this, &LoginFrom_Client::comboBox1_Leave);
			// 
			// dateTimePicker1
			// 
			resources->ApplyResources(this->dateTimePicker1, L"dateTimePicker1");
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Name = L"dateTimePicker1";
			// 
			// bunifuTileButton1
			// 
			this->bunifuTileButton1->BackColor = System::Drawing::Color::DarkCyan;
			this->bunifuTileButton1->color = System::Drawing::Color::DarkCyan;
			this->bunifuTileButton1->colorActive = System::Drawing::Color::MediumSeaGreen;
			this->bunifuTileButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->bunifuTileButton1, L"bunifuTileButton1");
			this->bunifuTileButton1->ForeColor = System::Drawing::Color::Maroon;
			this->bunifuTileButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTileButton1.Image")));
			this->bunifuTileButton1->ImagePosition = 4;
			this->bunifuTileButton1->ImageZoom = 30;
			this->bunifuTileButton1->LabelPosition = 26;
			this->bunifuTileButton1->LabelText = L"Log Out";
			this->bunifuTileButton1->Name = L"bunifuTileButton1";
			this->bunifuTileButton1->Click += gcnew System::EventHandler(this, &LoginFrom_Client::bunifuTileButton1_Click);
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->ForeColor = System::Drawing::Color::ForestGreen;
			this->label10->Name = L"label10";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Name = L"label9";
			// 
			// label15
			// 
			resources->ApplyResources(this->label15, L"label15");
			this->label15->ForeColor = System::Drawing::Color::ForestGreen;
			this->label15->Name = L"label15";
			// 
			// label14
			// 
			resources->ApplyResources(this->label14, L"label14");
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Name = L"label14";
			// 
			// label18
			// 
			resources->ApplyResources(this->label18, L"label18");
			this->label18->ForeColor = System::Drawing::Color::ForestGreen;
			this->label18->Name = L"label18";
			this->label18->Click += gcnew System::EventHandler(this, &LoginFrom_Client::label17_Click);
			// 
			// label17
			// 
			resources->ApplyResources(this->label17, L"label17");
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Name = L"label17";
			this->label17->Click += gcnew System::EventHandler(this, &LoginFrom_Client::label17_Click);
			// 
			// label21
			// 
			resources->ApplyResources(this->label21, L"label21");
			this->label21->ForeColor = System::Drawing::Color::ForestGreen;
			this->label21->Name = L"label21";
			// 
			// label23
			// 
			resources->ApplyResources(this->label23, L"label23");
			this->label23->ForeColor = System::Drawing::Color::Red;
			this->label23->Name = L"label23";
			// 
			// label20
			// 
			resources->ApplyResources(this->label20, L"label20");
			this->label20->ForeColor = System::Drawing::Color::Red;
			this->label20->Name = L"label20";
			// 
			// label22
			// 
			resources->ApplyResources(this->label22, L"label22");
			this->label22->ForeColor = System::Drawing::Color::DarkCyan;
			this->label22->Name = L"label22";
			this->label22->Click += gcnew System::EventHandler(this, &LoginFrom_Client::label22_Click);
			// 
			// label19
			// 
			resources->ApplyResources(this->label19, L"label19");
			this->label19->ForeColor = System::Drawing::Color::DarkCyan;
			this->label19->Name = L"label19";
			// 
			// label16
			// 
			resources->ApplyResources(this->label16, L"label16");
			this->label16->ForeColor = System::Drawing::Color::DarkCyan;
			this->label16->Name = L"label16";
			// 
			// label12
			// 
			resources->ApplyResources(this->label12, L"label12");
			this->label12->ForeColor = System::Drawing::Color::DarkCyan;
			this->label12->Name = L"label12";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->ForeColor = System::Drawing::Color::DarkCyan;
			this->label8->Name = L"label8";
			// 
			// splitter1
			// 
			resources->ApplyResources(this->splitter1, L"splitter1");
			this->splitter1->Name = L"splitter1";
			this->splitter1->TabStop = false;
			// 
			// label13
			// 
			resources->ApplyResources(this->label13, L"label13");
			this->label13->Name = L"label13";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->ForeColor = System::Drawing::Color::SteelBlue;
			this->label6->Name = L"label6";
			// 
			// pictureBox2
			// 
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// LoginFrom_Client
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->mainPnl);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"LoginFrom_Client";
			this->Activated += gcnew System::EventHandler(this, &LoginFrom_Client::LoginFrom_Client_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &LoginFrom_Client::LoginFrom_Client_FormClosed);
			this->Shown += gcnew System::EventHandler(this, &LoginFrom_Client::LoginFrom_Client_Shown);
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
			this->mainPnl->ResumeLayout(false);
			this->mainPnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
	
	int respond = 0;

	respond = send(clientSocket, messSend.c_str(), messSend.size() + 1, 0);
	if (respond < 0)
	{
		MessageBox::Show("Can't connect to Server. Quitting...", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Form::Close();
		return;
	}

	char buf[4];
	ZeroMemory(buf, 4);

	respond = recv(clientSocket, buf, 4, 0);

	if (respond < 0)
	{
		MessageBox::Show("Can't connect to Server. Quitting...", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Form::Close();
		return;
	}

	if (strcmp(buf, "100") == 0) {
		MessageBox::Show("Access Granted", "Welcome!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		label11->Text = bunifuMetroTextbox2->Text;
		mainPnl->Show();
	
		char bufRecv[DEFAULT_BUFLEN];
		ZeroMemory(bufRecv, DEFAULT_BUFLEN);

		send(clientSocket, "OK", 3, 0);
		recv(clientSocket, bufRecv, DEFAULT_BUFLEN, 0);

		string info = bufRecv;

		stringstream temp(info);
		string cases, deaths, recovered;

		getline(temp, cases, '|');
		getline(temp, deaths, '|');
		getline(temp, recovered);
		
		long casesNum = stoi(cases);
		long deathNum = stoi(deaths);
		long recoveredNum = stoi(recovered);

		String^ lb16 = casesNum.ToString("#,##0");
		String^ lb17 = deathNum.ToString("#,##0");
		String^ lb18 = recoveredNum.ToString("#,##0");

		label16->Text = lb16;
		label17->Text = lb17;
		label18->Text = lb18;
	
		label12->Visible = true;
		label14->Visible = true;
		label15->Visible = true;
		label19->Visible = true;
		label20->Visible = true;
		label21->Visible = true;
		label22->Visible = true;
		label23->Visible = true;

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
		string message = "2-" + username + "|" + password; // 2-user1|123456

		int respond = 0;

		respond = send(clientSocket, message.c_str(), message.size() + 1, 0);

		if (respond < 0)
		{
			MessageBox::Show("Can't connect to Server. Quitting...", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Form::Close();
			return;
		}

		char buf[4];
		ZeroMemory(buf, 4);


		respond = recv(clientSocket, buf, 4, 0);

		if (respond < 0)
		{
			MessageBox::Show("Can't connect to Server. Quitting...", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Form::Close();
			return;
		}

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
	;
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bunifuTileButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	mainPnl->Hide();
	label12->Visible = false;
	label14->Visible = false;
	label15->Visible = false;
	label19->Visible = false;
	label20->Visible = false;
	label21->Visible = false;
	label22->Visible = false;
	label23->Visible = false;

}
private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->Text == "")
	{
		comboBox1->Text = "Search by Country...";
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bunifuFlatButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	string countryName = msclr::interop::marshal_as<string>(comboBox1->Text);

	int respond = 0;
	// String::Format()
	if (countryName == "Search by Country..." || countryName == "") {
		MessageBox::Show("Please Enter name of Country.", "Error", MessageBoxButtons::OK ,MessageBoxIcon::Error);
	}
	else {
		string date = msclr::interop::marshal_as<string>(dateTimePicker1->Text);
		string message = "3-" + countryName + "|" + date;
		
		respond = send(clientSocket, message.c_str(), message.size() + 1, 0);

		if (respond < 0)
		{
			MessageBox::Show("Can't connect to Server. Quitting...", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			mainPnl->Hide();
			Form::Close();
			return;
		}


		char messRecv[DEFAULT_BUFLEN];
		ZeroMemory(messRecv, DEFAULT_BUFLEN);
		respond = recv(clientSocket, messRecv, DEFAULT_BUFLEN, 0);

		if (respond < 0)
		{
			MessageBox::Show("Can't connect to Server. Quitting...", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			mainPnl->Hide();
			Form::Close();
			return;
		}

		if (strcmp(messRecv, "301") == 0)
		{
			label12->Visible = false;
			label14->Visible = false;
			label15->Visible = false;
			label19->Visible = false;
			label20->Visible = false;
			label21->Visible = false;
			label22->Visible = false;
			label23->Visible = false;
			MessageBox::Show("Data is not found on this day. Please select another.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		else if (strcmp(messRecv, "302") == 0)
		{
			label12->Visible = false;
			label14->Visible = false;
			label15->Visible = false;
			label19->Visible = false;
			label20->Visible = false;
			label21->Visible = false;
			label22->Visible = false;
			label23->Visible = false;
			MessageBox::Show("Name of Country is not found. Please try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		else
		{
			label12->Visible = true;
			label14->Visible = true;
			label15->Visible = true;
			label19->Visible = true;
			label20->Visible = true;
			label21->Visible = true;
			label22->Visible = true;
			label23->Visible = true;
			string result = messRecv;
			stringstream ssTmp(result);

			string cases, casesToday, deaths, deathsToday, recovered;

			getline(ssTmp, cases, '|');
			getline(ssTmp, casesToday, '|');
			getline(ssTmp, deaths, '|');
			getline(ssTmp, deathsToday, '|');
			getline(ssTmp, recovered);

			String^ lb19 = gcnew String(cases.c_str());
			String^ lb22 = gcnew String(casesToday.c_str());
			String^ lb20 = gcnew String(deaths.c_str());
			String^ lb23 = gcnew String(deathsToday.c_str());
			String^ lb21 = gcnew String(recovered.c_str());

			label19->Text = lb19;
			label20->Text = lb20;
			label21->Text = lb21;
			label22->Text = "+ " + lb22;
			label23->Text = "+ " + lb23;
		}
	}



	
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void LognFrom_Client_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
}
private: System::Void LoginFrom_Client_Activated(System::Object^ sender, System::EventArgs^ e) {
	//clientSocket = createSocket(IPAddress, portNumber);
	//if (clientSocket != 1) {
	//	mainPnl->Hide();
	//	MessageBox::Show("Connect to Server successful", "Connected", MessageBoxButtons::OK);
	//	
	//}
	//else {
	//	MessageBox::Show("Can't connect to Server. Try again!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	//	LoginFrom_Client::Hide();
	//	//Application::Exit();
	//}
}
private: System::Void LoginFrom_Client_Shown(System::Object^ sender, System::EventArgs^ e) {
	clientSocket = createSocket(IPAddress, 8080);
	if (clientSocket != 1) {
		mainPnl->Hide();
		MessageBox::Show("Connect to Server successful", "Connected", MessageBoxButtons::OK);

	}
	else {
		MessageBox::Show("Can't connect to Server. Try again!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Form::Close();
	}
}
private: System::Void LoginFrom_Client_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	send(clientSocket, 0, 0, 0);
	closesocket(clientSocket);
	WSACleanup();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	string countryName = msclr::interop::marshal_as<string>(comboBox1->Text);

	int respond = 0;
	// String::Format()
	if (countryName == "Search by Country..." || countryName == "") {
		MessageBox::Show("Please Enter name of Country.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		string date = msclr::interop::marshal_as<string>(dateTimePicker1->Text);
		string message = "3-" + countryName + "|" + date;

		respond = send(clientSocket, message.c_str(), message.size() + 1, 0);

		if (respond < 0)
		{
			MessageBox::Show("Can't connect to Server. Quitting...", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Form::Close();
			return;
		}

		char messRecv[DEFAULT_BUFLEN];
		ZeroMemory(messRecv, DEFAULT_BUFLEN);
		respond = recv(clientSocket, messRecv, DEFAULT_BUFLEN, 0);

		if (respond < 0)
		{
			MessageBox::Show("Can't connect to Server. Quitting...", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Form::Close();
			return;
		}

		if (strcmp(messRecv, "301") == 0)
		{
			label12->Visible = false;
			label14->Visible = false;
			label15->Visible = false;
			label19->Visible = false;
			label20->Visible = false;
			label21->Visible = false;
			label22->Visible = false;
			label23->Visible = false;
			MessageBox::Show("Data is not found on this day. Please select another.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		else if (strcmp(messRecv, "302") == 0)
		{
			label12->Visible = false;
			label14->Visible = false;
			label15->Visible = false;
			label19->Visible = false;
			label20->Visible = false;
			label21->Visible = false;
			label22->Visible = false;
			label23->Visible = false;
			MessageBox::Show("Name of Country is not found. Please try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		else
		{
			label12->Visible = true;
			label14->Visible = true;
			label15->Visible = true;
			label19->Visible = true;
			label20->Visible = true;
			label21->Visible = true;
			label22->Visible = true;
			label23->Visible = true;
			string result = messRecv;
			stringstream ssTmp(result);

			string cases, casesToday, deaths, deathsToday, recovered;

			getline(ssTmp, cases, '|');
			getline(ssTmp, casesToday, '|');
			getline(ssTmp, deaths, '|');
			getline(ssTmp, deathsToday, '|');
			getline(ssTmp, recovered);

			int casesInt = stoi(cases);
			int casesTodayInt = stoi(casesToday);
			int deathsInt = stoi(deaths);
			int deathsTodayInt = stoi(deathsToday);
			int recoveredInt = stoi(recovered);

			String^ lb19 = casesInt.ToString("#,##0");
			String^ lb22 = casesTodayInt.ToString("#,##0");
			String^ lb20 = deathsInt.ToString("#,##0");
			String^ lb23 = deathsTodayInt.ToString("#,##0");
			String^ lb21 = recoveredInt.ToString("#,##0");


			label19->Text = lb19;
			label20->Text = lb20;
			label21->Text = lb21;
			label22->Text = "+ " + lb22;
			label23->Text = "+ " + lb23;
		}
	}
}
};
}
