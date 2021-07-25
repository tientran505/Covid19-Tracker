#include "MyForm_Server.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	ServerGUI::MyForm_Server frm;

	Application::Run(% frm);
}