/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 14:58:11 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/29 15:08:22 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;
	public:
		//constructor
		Fixed();
		//copy constrcutor
		Fixed(const Fixed& other);
		//copy assignment operator overload
		Fixed&	operator=(const Fixed& other);
		//destructor
		~Fixed();
		//member functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
