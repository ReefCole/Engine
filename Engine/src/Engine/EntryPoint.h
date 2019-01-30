#pragma once
#include <string>

# ifdef ENGINE_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv) 
{
	Engine::Log::Init();
	int a = 5;
	
	//Engine::Log::GetCoreLogger()->error(a);
    ENGINE_CORE_WARN("initialized log");
	ENGINE_INFO(a);


	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}

#endif