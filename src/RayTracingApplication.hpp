#ifndef RAY_TRACING_APPLICATION_H
#define RAY_TRACING_APPLICATION_H

#include <vulkan/vulkan_raii.hpp>

class RayTracingApplication {
public:
  void run();

private:
  void initVulkan();
  void mainLoop();
  void cleanup();

  vk::raii::Instance instance;

  void createInstance();
};

#endif