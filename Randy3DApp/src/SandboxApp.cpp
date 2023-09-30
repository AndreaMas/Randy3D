#include <Randy3D.h>

class SandboxApp : public randy3d::Application 
{
public:

	SandboxApp() 
	{

	}

	~SandboxApp()
	{

	}
};

randy3d::Application* randy3d::CreateApplication() 
{
	return new SandboxApp();
}