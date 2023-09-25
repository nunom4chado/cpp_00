/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:14:18 by numartin          #+#    #+#             */
/*   Updated: 2023/09/25 15:10:31 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "phonebook.hpp"
#include <iostream>

Contact::Contact(void) : _firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _darkestSecret("")
{
    // std::cout << "Contact constructer called" << std::endl;
}

Contact::~Contact(void)
{
    // std::cout << "Contact destructer called" << std::endl;
}

/* ------------------------------- First Name ------------------------------- */
std::string Contact::getFirstName(void) const
{
    return this->_firstName;
}

int Contact::setFirstName(std::string name)
{
    if (is_str_empty(name))
        return 1;
    this->_firstName = name;
    return 0;
}

/* -------------------------------- Last Name ------------------------------- */
std::string Contact::getLastName(void) const
{
    return this->_lastName;
}

int Contact::setLastName(std::string name)
{
    if (is_str_empty(name))
        return 1;
    this->_lastName = name;
    return 0;
}

/* -------------------------------- NickName -------------------------------- */
std::string Contact::getNickName(void) const
{
    return this->_nickName;
}

int Contact::setNickName(std::string name)
{
    if (is_str_empty(name))
        return 1;
    this->_nickName = name;
    return 0;
}

/* ------------------------------ Phone Number ------------------------------ */
std::string Contact::getPhoneNumber(void) const
{
    return this->_phoneNumber;
}

int Contact::setPhoneNumber(std::string number)
{
    const int PHONE_DIGITS = 9;
    if (!is_valid_number(number) || number.length() != PHONE_DIGITS)
        return 1;
    this->_phoneNumber = number;
    return 0;
}

/* ----------------------------- Darkest Secret ----------------------------- */
std::string Contact::getSecret(void) const
{
    return this->_darkestSecret;
}

int Contact::setSecret(std::string secret)
{
    if (is_str_empty(secret))
        return 1;
    this->_darkestSecret = secret;
    return 0;
}