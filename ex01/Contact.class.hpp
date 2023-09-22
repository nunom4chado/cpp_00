/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:30:18 by numartin          #+#    #+#             */
/*   Updated: 2023/09/22 11:41:06 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

class Contact {
	public:
		Contact( void );
		~Contact( void );

		std::string getFirstName( void ) const;
		int			setFirstName( std::string name );

		std::string getLastName( void ) const;
		int			setLastName( std::string name );

		std::string getNickName( void ) const;
		int			setNickName( std::string name );

		std::string	getPhoneNumber( void ) const;
        int			setPhoneNumber( std::string number );

		std::string getSecret( void ) const;
		int			setSecret( std::string secret );

	private:
		std::string _firstName;
		std::string	_lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

#endif