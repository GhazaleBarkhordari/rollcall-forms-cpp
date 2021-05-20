#include "pch.h"
#include "DataBase.h"
#include "Employee.h"
#include "Leave.h"
#include "Management.h"
#include "Report.h"


using namespace System;

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinformsProjekt::Employee());
	return 0;
}