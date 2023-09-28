#include <Randy3D.h>

class Sandbox : public randy3d::Application 
{
public:

	Sandbox() 
	{

	}

	~Sandbox()
	{

	}
};

randy3d::Application* randy3d::CreateApplication() 
{
	return new Sandbox();
}