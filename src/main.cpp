#include <iostream>
#include <ParnasEngine/Engine.h>
#include <glm/glm.hpp>
#include <ParnasEngine/service_locator.h>
int main(int argc, char **argv)
{
    std::cout << "Hello, world" << std::endl;
    ParnasEngine::Init();

    ServiceLocator::GetWindow()->OpenWindow();

    while (!ServiceLocator::GetWindow()->Update())
    {
    }
}