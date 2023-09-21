/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:59:55 by numartin          #+#    #+#             */
/*   Updated: 2023/09/21 16:22:24 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

void	print_main_header( void );
void	print_add_header( void );
void	print_search_header( void );

std::string     formatCell( std::string text );

bool    is_str_empty( std::string string);
bool    is_valid_number( std::string string );

#endif