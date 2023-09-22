/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:53:53 by numartin          #+#    #+#             */
/*   Updated: 2023/09/22 15:53:06 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

bool    is_str_empty( std::string string) {
    for (unsigned i = 0; i < string.length(); i++) {
        if (!isspace(string[i]))
            return false;
    }
    return true;
}

bool    is_valid_number( std::string string ) {
    for (unsigned i = 0; i < string.length(); i++) {
        if (!isdigit(string[i]))
            return false;
    }
    return true;
}

int ft_stoi( std::string string) {
    int nb;
    std::stringstream ss(string);
    ss >> nb;
    return (nb);
}

int ft_min( int a, int b) {
    if (a < b)
        return a;
    return b;
}

std::string    formatCell( std::string text ) {
    if (text.length() > 10) {
        text.resize(9);
        text.append(".");
        return text;
    }
    return text;
}

void    pressAnyKeyToContinue( void ) {
    std::cout << std::endl;
    std::cout << "Press any key to continue ...";
    std::cin.get();
}