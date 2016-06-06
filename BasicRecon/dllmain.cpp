// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

#include "ProcessorManager.h"
#include "DummyProcessor.h"

extern "C"
{
	IProcessorManager * GetProcessorManager()
	{
		auto processor_manager = new CProcessorManager;

		processor_manager->AddProcessor(new CDummyProcessor);

		return processor_manager;
	}
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:

		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
