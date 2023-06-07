#include "ordinary.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CWCalculator::ordinary form;
	Application::Run(% form); //перегрузка для запуска с основной формой
}

