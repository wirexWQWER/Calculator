#include "MyCalculator1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(cli::array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CalculatorWinForms::MyCalculator1 form;
	Application::Run(% form);
}