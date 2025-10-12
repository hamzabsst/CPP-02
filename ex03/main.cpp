/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 18:09:49 by hbousset          #+#    #+#             */
/*   Updated: 2025/10/12 09:52:24 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(5.0f, 10.0f);
	std::cout << "=== Triangle vertices ===" << std::endl;
	std::cout << "A: (0, 0)" << std::endl;
	std::cout << "B: (10, 0)" << std::endl;
	std::cout << "C: (5, 10)" << std::endl;
	std::cout << std::endl;
	Point inside(5.0f, 5.0f);
	std::cout << "Point (5, 5) - Inside: " << (bsp(a, b, c, inside) ? "TRUE ✓" : "FALSE ✗") << std::endl;
	Point outside(15.0f, 5.0f);
	std::cout << "Point (15, 5) - Outside: " << (bsp(a, b, c, outside) ? "TRUE ✗" : "FALSE ✓") << std::endl;
	Point onVertexA(0.0f, 0.0f);
	std::cout << "Point (0, 0) - On vertex A: " << (bsp(a, b, c, onVertexA) ? "TRUE ✗" : "FALSE ✓") << std::endl;
	Point onVertexB(10.0f, 0.0f);	Point inside2(6.0f, 3.0f);
	std::cout << "Point (6, 3) - Inside: " << (bsp(a, b, c, inside2) ? "TRUE ✓" : "FALSE ✓") << std::endl;
	Point below(5.0f, -5.0f);
	std::cout << "Point (5, -5) - Below: " << (bsp(a, b, c, below) ? "TRUE ✗" : "FALSE ✓") << std::endl;
	Point above(5.0f, 15.0f);
	std::cout << "Point (5, 15) - Above: " << (bsp(a, b, c, above) ? "TRUE ✗" : "FALSE ✓") << std::endl;
	return 0;
}
