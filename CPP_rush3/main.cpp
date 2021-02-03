#include "iostream"
#include "module/MyGKrellm.hpp"

int main(int ac, char **av)
{
    MyGKrellm app(ac, av);
    return app.start();
}

// FIX CPU value -> htop
// FIX display (mettr mo Go par exemple)
// faire graph