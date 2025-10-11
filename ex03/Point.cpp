/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:30:26 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/11 12:52:51 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():_x(0), _y(0){}

Point::Point(const float a, const float b):_x(a), _y(b){}

Point::Point(const Point& other):_x(other._x), _y(other._y){}

Point& Point::operator=(const Point &other)
{
	return *this;
}

Point::~Point(){}

Fixed Point::getX() const
{
	return _x;
}

Fixed Point::getY() const
{
	return _y;
}
