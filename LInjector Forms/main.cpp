#include "main.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using KrnlAPI::KrnlApi;

typedef int(__cdecl* krnl_get_thread_identity_t)(void);

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LInjectorForms::main form;
	Application::Run(% form);

	KrnlAPI::KrnlApi api;
}