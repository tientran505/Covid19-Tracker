#include "MyForm_Server.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ServerGUIBackup::MyForm_Server frm;
	Application::Run(% frm);
	int alarmCounter = 1;
	bool exitFlag = false;
}