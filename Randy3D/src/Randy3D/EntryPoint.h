#pragma once

#ifdef _WIN32

extern randy3d::Application* randy3d::CreateApplication();

int main(int argc, char** argv)
{
	auto sandApp = randy3d::CreateApplication();
	sandApp->Run();
	delete sandApp;
}

#endif

