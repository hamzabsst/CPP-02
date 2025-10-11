/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 14:57:59 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/11 11:35:17 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_value(0) {}

Fixed::Fixed(const int interger)
{
	//fixed_value = x ≪ 8 = x × 256
	_value = interger << _fractionalBits;
}

Fixed::Fixed(const float float_point)
{
	//fixed_value=round(float_value×2^8)
	_value = static_cast<int>(roundf(float_point * (1 << _fractionalBits)));
}

Fixed::Fixed(const Fixed& other):_value(other._value){}

Fixed& Fixed::operator=(const Fixed& other)
{
	this->_value = other._value;
	return *this;
}

Fixed::~Fixed(){}

int		Fixed::getRawBits(void) const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	//res = value / 256
	float	result;
	result = static_cast<float>(_value) / (1 << _fractionalBits);
	return result;
}

int Fixed::toInt(void) const
{
	//res = value >> 8;
	int	result;
	result = _value >> _fractionalBits;
	return (result);
}

std::ostream& operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return os;
}

bool	Fixed::operator>(const Fixed &other) const
{
	if (this->_value > other._value) return true;
	else return false;
}
bool	Fixed::operator<(const Fixed &other) const
{
	if (this->_value < other._value) return true;
	else return false;
}
bool	Fixed::operator>=(const Fixed &other) const
{
	if (this->_value >= other._value) return true;
	else return false;
}
bool	Fixed::operator<=(const Fixed &other) const
{
	if (this->_value <= other._value) return true;
	else return false;
}
bool	Fixed::operator==(const Fixed &other) const
{
	if (this->_value == other._value) return true;
	else return false;
}
bool	Fixed::operator!=(const Fixed &other) const
{
	if (this->_value != other._value) return true;
	else return false;
}


Fixed Fixed::operator+(const Fixed &other)
{
	Fixed result;
	result._value = this->_value + other._value;
	return result;
}
Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed result;
	result._value = this->_value - other._value;
	return result;
}
Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed result;
	result._value = this->_value * other._value;
	result._value = result._value / (1 << _fractionalBits);
	return result;
}
Fixed	Fixed::operator/(const Fixed &other)
{
	Fixed result;
	result._value = this->_value * (1 << _fractionalBits) / other._value;
	return result;
}


Fixed&	Fixed::operator++()
{
	this->_value = this->_value + 1;
	return *this;
}
Fixed&	Fixed::operator--()
{
	this->_value = this->_value - 1;
	return *this;
}
Fixed	Fixed::operator++(int)
{
	Fixed old = *this;
	this->_value = this->_value + 1;
	return old;
}
Fixed	Fixed::operator--(int)
{
	Fixed old = *this;
	this->_value = this->_value - 1;
	return old;
}


Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a._value > b._value) return b;
	else return a;
}
const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a._value > b._value) return b;
	else return a;
}
Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a._value > b._value) return a;
	else return b;
}
const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a._value > b._value) return a;
	else return b;
}
