#include "MyForm_Client.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	ClientGUI::MyForm_Client frm;

	Application::Run(% frm);
}