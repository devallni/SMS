#include <windows.h>  // Required for SetProcessDPIAware
#include <iostream>
#include "MyForm.h"
#include "PortalForm.h"

#pragma comment(lib, "user32.lib")

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
    SetProcessDPIAware();

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    StudentManagementSystem::MyForm form;
    Application::Run(% form);
    return 0;
}
