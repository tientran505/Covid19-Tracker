#include "MyForm_Server.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	ServerGUI::MyForm_Server frm;
	
	Application::Run(% frm);
}