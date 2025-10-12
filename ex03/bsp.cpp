/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:29:39 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/12 09:36:57 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	area1 = ((b.getX() - a.getX()) * (point.getY() - a.getY())) - ((b.getY() - a.getY()) * (point.getX() - a.getX()));
	Fixed	area2 = ((c.getX() - b.getX()) * (point.getY() - b.getY())) - ((c.getY() - b.getY()) * (point.getX() - b.getX()));
	Fixed	area3 = ((a.getX() - c.getX()) * (point.getY() - c.getY())) - ((a.getY() - c.getY()) * (point.getX() - c.getX()));
	if (area1 == 0 || area2 == 0 || area3 == 0)
		return false;
	if ((area1 > 0 && area2 > 0 && area3 > 0) || (area1 < 0 && area2 < 0 && area3 < 0))
		return true;
	return false;
}
