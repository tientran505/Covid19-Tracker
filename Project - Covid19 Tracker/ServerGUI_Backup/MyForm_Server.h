#pragma once
#include "function_Server.h"


namespace ServerGUIBackup {

	static int max_clients = 30;
	static SOCKET master;
	static SOCKET* clientSocket = new SOCKET[max_clients];
	static fd_set readfds;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Summary for MyForm_Server
	/// </summary>
	public ref class MyForm_Server : public System::Windows::Forms::Form
	{
	public:
		MyForm_Server(void)
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
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Label^ label4;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;




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
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->label1->Location = System::Drawing::Point(226, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Server Manager";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(42, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Client Status:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->textBox1->Location = System::Drawing::Point(47, 109);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(283, 190);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->button2->Location = System::Drawing::Point(511, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 76);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Shutdown all Clients";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm_Server::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label3->Location = System::Drawing::Point(42, 351);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Data last updated: ";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->button3->Location = System::Drawing::Point(377, 165);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 76);
			this->button3->TabIndex = 6;
			this->button3->Text = L"RUN SERVER";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm_Server::button3_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.5F));
			this->button4->Location = System::Drawing::Point(511, 223);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 76);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Shutdown Server";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm_Server::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->Location = System::Drawing::Point(42, 312);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(227, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Current Number Clients: ";
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm_Server::backgroundWorker1_DoWork);
			// 
			// timer1
			// 
			this->timer1->Interval = 3600000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm_Server::timer1_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label5->Location = System::Drawing::Point(227, 351);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 25);
			this->label5->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label6->Location = System::Drawing::Point(259, 312);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"0";
			// 
			// MyForm_Server
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 399);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm_Server";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm_Server";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
						
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label6->Text = "0";
	for (int i = 0; i < max_clients; i++)
	{
		SOCKET sock = clientSocket[i];
		if (FD_ISSET(sock, &readfds))
		{
			int iResult = shutdown(sock, SD_BOTH);
			FD_CLR(clientSocket[i], &readfds);
		}
		closesocket(sock);
		clientSocket[i] = 0;
	}

	FD_ZERO(&readfds);
	if (backgroundWorker1->IsBusy) backgroundWorker1->WorkerSupportsCancellation;
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	button2->Enabled = true;
	button3->Enabled = false;
	button4->Enabled = true;
	timer1->Enabled = true;
	
	if (!backgroundWorker1->IsBusy)
	{
		backgroundWorker1->RunWorkerAsync();
	}

}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	button2->Enabled = false;
	button4->Enabled = false;
	button3->Enabled = true;

	WSACleanup();
	closesocket(master);

	label6->Text = "0";
	textBox1->Text = textBox1->Text + "Server has been shut down\r\n";

	if (backgroundWorker1->IsBusy)
	{
		backgroundWorker1->CancelAsync();
	}
}

private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	label5->Text = DateTime::Now.ToString();
	savefileJson();
	master = createSocket("127.0.0.1", 8080);

	for (int i = 0; i < max_clients; i++)
	{
		clientSocket[i] = 0;
	}

	struct sockaddr_in address;

	while (true)
	{
		SOCKET new_socket;
		int addrlen = sizeof(address);
		FD_ZERO(&readfds);

		// add master to set
		FD_SET(master, &readfds);
		SOCKET max = master;

		for (int i = 0; i < max_clients; i++)
		{
			SOCKET sock = clientSocket[i];
			if (sock > 0)
			{
				FD_SET(sock, &readfds);
			}

			if (sock > max) {
				max = sock;
			}
		}

		cout << "Selecting..." << endl;
		int sockCount = select(0, &readfds, nullptr, nullptr, nullptr);

		if (sockCount < 0 && (errno != EINTR))
		{
			break;
		}

		if (FD_ISSET(master, &readfds))
		{
			new_socket = accept(master, (sockaddr*)&address, (socklen_t*)&addrlen);
			if (new_socket == INVALID_SOCKET)
			{
				break;
			}

			textBox1->Text = textBox1->Text + "New connection:\r\nSocket " + new_socket;
			string temp = inet_ntoa(address.sin_addr);
			String^ temp2 = gcnew String(temp.c_str());
			textBox1->Text = textBox1->Text + " - IP: " + temp2 + " - ";
			textBox1->Text = textBox1->Text + "PORT: " + ntohs(address.sin_port) + "\r\n";

			// add new socket to array of sockets
			for (int i = 0; i < max_clients; i++)
			{
				if (clientSocket[i] == 0)
				{
					clientSocket[i] = new_socket;
					int Result = System::Convert::ToInt16(label6->Text);
					label6->Text = System::Convert::ToString(Result + 1);
					break;
				}
			}
		}

		for (int i = 0; i < max_clients; i++)
		{
			SOCKET sd = clientSocket[i];
			char buf[1024];
			ZeroMemory(buf, 1024);
			if (FD_ISSET(sd, &readfds))
			{
				char message[DEFAULT_BUFFLEN];
				ZeroMemory(message, DEFAULT_BUFFLEN);

				if (recv(sd, message, DEFAULT_BUFFLEN, 0) <= 0)
				{
					getpeername(sd, (sockaddr*)&address, &addrlen);
					string temp = inet_ntoa(address.sin_addr);
					String^ temp2 = gcnew String(temp.c_str());
					textBox1->Text = textBox1->Text + "host disconnected, ip: " + temp2;
					textBox1->Text = textBox1->Text + " , Port: " + ntohs(address.sin_port) + "\r\n";

					int Result = System::Convert::ToInt16(label6->Text);
					label6->Text = System::Convert::ToString(Result - 1);

					closesocket(sd);
					clientSocket[i] = 0;
					FD_CLR(clientSocket[i], &readfds);
				}

				else {
					string tmp = message;

					stringstream ss(tmp);

					int index = tmp[0] - 48;

					if (index == 1) // login signal
					{

						string username, password;
						getline(ss, tmp, '-');
						getline(ss, username, '|');
						getline(ss, password);

						cout << "username: " << username << endl;
						cout << "password: " << password << endl;


						if (checkExistedUsername(username))
						{
							if (checkPass(username, password))
							{
								cout << "Login successfully" << endl;
								send(sd, "100", 4, 0); // 100: Login successfully

								char tmp[4];

								recv(sd, tmp, 4, 0);
								string Result = getWorld();
								send(sd, Result.c_str(), Result.size() + 1, 0);
								
							}
							else {
								cout << "Wrong Password! Pls try again." << endl;
								send(sd, "101", 4, 0); // 101: Wrong pass
							}
						}

						else {
							cout << "Account does not existed!" << endl;
							send(sd, "102", 4, 0); // 101: not existed account
						}
					}

					else if (index == 2) // register signal
					{
						string username, password;
						getline(ss, tmp, '-');
						getline(ss, username, '|');
						getline(ss, password);

						cout << "username: " << username << endl;
						cout << "password: " << password << endl;

						if (checkExistedUsername(username)) {
							cout << "Username has already existed!" << endl;
							send(sd, "200", 4, 0);
						}
						else {
							SaveinUserfile(username, password);
							send(sd, "201", 4, 0);
						}
					}
					else if (index == 3) // tra cuu
					{
						string date, countryName;
						getline(ss, tmp, '-');
						getline(ss, countryName, '|');
						getline(ss, date);

						string result = getData(date, countryName);

						if (result == "100")
						{
							send(sd, "301", 4, 0); // file is not existed
						}

						else if (result == "101")
						{
							send(sd, "302", 4, 0); // name of country is not found
						}

						else
						{
							send(sd, result.c_str(), result.size() + 1, 0);
						}

					}
				}

			}
		}
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	savefileJson();
	label5->Text = DateTime::Now.ToString();
}
};
}
