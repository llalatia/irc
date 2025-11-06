#include "utils.hpp"

bool is_valid_argument_number(int ac)
{
    if(ac != 3)
    {
        std::cout << "error: invalid argument number!" << std::endl;
        return false;
    }
    return true;
}

bool is_valid_port(std::string port)
{
    if (port.empty())
    {
        std::cout << "error: invalid port!" << std::endl;
        return false;
    }
    for(int i = 0; i< port.size(); i++)
    {
        if(!std::isdigit(port[i]))
        {
            std::cout << "error: invalid port!" << std::endl;
            return false;
        }
    }
    return true;
}

bool is_valid_password(std::string password)
{
    if(password.empty())
    {
        std::cout << "error: invalid password!" <<std::endl;
        return false;
    }
    return true;
}


bool is_valid_argument(int ac, char **av)
{
    if (!is_valid_argument_number(ac) || !is_valid_port(av[1]) || !is_valid_password(av[2]))
        return false;
    return true;
}

bool port_is_valid(int port) //la limite du port valide;
{
    if (port < 99999999)
    {
        std::cout<< "this port is over..." << std::endl;
        return false;
    }
    return true;
} 