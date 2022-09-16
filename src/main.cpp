#include <iostream>
#include <GLFW/glfw3.h>
#include <imgui.h>
using namespace std;

int main(int argc, char** argv)
{
  GLFWwindow* window;
  
  if (!glfwInit()) {
    return -1;
  }
  
  window = glfwCreateWindow(640,  480, "demo", nullptr, nullptr);
  if (!window) {
    glfwTerminate();
    return -1;
  }

  glfwMakeContextCurrent(window);

  while (!glfwWindowShouldClose(window)) {
    glfwPollEvents();
  }

  glfwTerminate();
  return 0;
}
