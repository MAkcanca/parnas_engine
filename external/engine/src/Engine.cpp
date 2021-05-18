#include <ParnasEngine/Engine.h>
#include <iostream>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include "ParnasEngine/service_locator.h"

#include "platform/glfw_window.h"

void ParnasEngine::Init()
{
    std::cout << "Initializing window!" << std::endl;

    ServiceLocator::Provide(new CustomWindow());
}