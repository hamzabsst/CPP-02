/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 14:58:11 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/11 12:59:46 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
class Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;
	public:
		Fixed();
		Fixed(const int interger);
		Fixed(const float float_point);
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed &other);
		//comparison operators
		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;
		//arithmetic operators
		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;
		//increment/decrement
		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		//public overloaded member functions
		static 			Fixed&	min(Fixed &a, Fixed &b);
		static const	Fixed&	min(const Fixed &a, const Fixed &b);
		static			Fixed&	max(Fixed &a, Fixed &b);
		static const 	Fixed&	max(const Fixed &a, const Fixed &b);
		//destructor
		~Fixed();
		//member functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);
