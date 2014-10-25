#include "DashBoard.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	GroupAssign2014::DashBoard form;
	Application::Run(%form);
}
