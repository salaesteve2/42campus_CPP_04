/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:49:15 by sasalama          #+#    #+#             */
/*   Updated: 2023/06/29 10:21:55 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain eliminated" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	int x;

	x = 0;
	while (x < 100)
	{
		this->_ideas[x] = copy._ideas[x];
		x++;
	}
	std::cout << "Copy contructed called" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	int x;

	x = 0;
	while (x < 100)
	{
		this->_ideas[x] = src._ideas[x];
		x++;
	}
	std::cout << "Brain Assignation operator called" << std::endl;
	return (*this);
}
