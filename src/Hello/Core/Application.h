#pragma once

#include "Core.h"

namespace Hello {

class HELLO_API Application {
public:
  Application();
  virtual ~Application();

  void Run();
};

//To Define In Client
Application* CreateApplication();

}
