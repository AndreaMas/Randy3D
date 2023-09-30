#pragma once

#include "Core.h"

namespace randy3d 
{
	class RANDY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication(); // to be defined in client app
}



