#pragma once

#ifdef HELLO_PLATFORM_WINDOWS

extern Hello::Application* Hello::CreateApplication();

int main(int argc, char** argv)
{
  auto app = Hello::CreateApplication();
  app->Run();
  delete app;
}


#endif
