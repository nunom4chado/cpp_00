/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:53:53 by numartin          #+#    #+#             */
/*   Updated: 2023/09/21 17:00:50 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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

std::string    formatCell( std::string text ) {
    if (text.length() > 10) {
        text.resize(9);
        text.append(".");
        return text;
    }
    return text;
}