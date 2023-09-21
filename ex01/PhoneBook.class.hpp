/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:28:07 by numartin          #+#    #+#             */
/*   Updated: 2023/09/21 16:09:42 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# define MAX_CONTACTS 8

# include "Contact.class.hpp"

class PhoneBook {
    public:
        int index;
        Contact contacts[MAX_CONTACTS];

        PhoneBook( void );
        ~PhoneBook( void );

        void    add( void );
        void    search( void ) const;
        void    printContactRow( int index ) const;
        // TODO Search Contacts
        void    showInfo( int index ) const;
};

#endif