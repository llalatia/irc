#ifndef UTILS_HPP
# define UTILS_HPP

# include <string>
# include <iostream>
# include <cctype>

bool is_valid_argument_number(int ac);
bool is_valid_port(std::string port);
bool is_valid_password(std::string password);
bool is_valid_argument(int ac, char **av);
bool port_is_valid(int port);

#endif