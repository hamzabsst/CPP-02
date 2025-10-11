/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 14:58:11 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/11 09:57:09 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
//Copy constructor: Used when creating a new object from an existing one.
//Copy assignment operator: Used when assigning one existing object to another.
class Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;
	public:
		//default constructor
		Fixed();
		//int constructor
		Fixed(const int interger);
		//float constructor
		Fixed(const float float_point);
		//copy constrcutor
		Fixed(const Fixed& other);
		//copy assignment operator overload
		Fixed&	operator=(const Fixed& other);
		//overload of the insertion («) operator
		friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
		//destructor
		~Fixed();
		//member functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};
