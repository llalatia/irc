
#include "utils.hpp"

int run_irc(int port)
{
    
}

int main(int ac, char **av)
{
    if (!is_valid_argument(ac, av))
        return 1;
    int port = atoi(av[1]);
    if (!port_is_valid(port))
        return 1;
    run_irc(port);
    return 0;
}
