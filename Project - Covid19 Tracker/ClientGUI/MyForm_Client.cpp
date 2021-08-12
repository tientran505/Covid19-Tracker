#include "MyForm_Client.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	ClientGUI::MyForm_Client frm;

	Application::Run(% frm);
}