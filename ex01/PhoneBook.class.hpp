/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:28:07 by numartin          #+#    #+#             */
/*   Updated: 2023/09/14 18:15:27 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class PhoneBook {
    public:
        Contact * contacts[8];

        PhoneBook( void );
        ~PhoneBook( void );

        void    add( void );
        // TODO Search Contacts
        Contact *showInfo( int index ) const;
};

#endif