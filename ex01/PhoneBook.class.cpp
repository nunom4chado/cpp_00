/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:54:32 by numartin          #+#    #+#             */
/*   Updated: 2023/09/20 12:12:07 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include "phonebook.hpp"

PhoneBook::PhoneBook( void ) {}
PhoneBook::~PhoneBook( void ) {}

void PhoneBook::add( void ) {
    Contact newContact;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    print_add_header();

    while(newContact.getFirstName() == "")
    {
        std::cout << "\t\t[First Name]: ";
        std::getline(std::cin, firstName);
        if (newContact.setFirstName(firstName) != 0)
            std::cout << "\t\t\tError: First name is required" << std::endl;
    }

    while(newContact.getLastName() == "")
    {
        std::cout << "\t\t[Last Name]: ";
        std::getline(std::cin, lastName);
        if (newContact.setLastName(lastName) != 0)
            std::cout << "\t\t\tError: Last name is required" << std::endl;
    }

    while(newContact.getNickName() == "")
    {
        std::cout << "\t\t[Nickname]: ";
        std::getline(std::cin, nickName);
        if (newContact.setNickName(nickName) != 0)
            std::cout << "\t\t\tError: Nickname is required" << std::endl;
    }

    while(newContact.getPhoneNumber() == "")
    {
        std::cout << "\t\t[Phone Number]: ";
        std::getline(std::cin, phoneNumber);
        if (newContact.setPhoneNumber(phoneNumber) != 0)
            std::cout << "\t\t\tError: Phone number is required and valid" << std::endl;
    }

    while(newContact.getSecret() == "")
    {
        std::cout << "\t\t[Darkest Secret]: ";
        std::getline(std::cin, darkestSecret);
        if (newContact.setSecret(darkestSecret) != 0)
            std::cout << "\t\t\tError: Darkest secret is required" << std::endl;
    }

    // TODO handle insertion when contact list is full
    this->contacts[0] = &newContact;

}

Contact * PhoneBook::showInfo( int index ) const {
    // TODO get contact info or display error message
    (void) index;
    return NULL;
}