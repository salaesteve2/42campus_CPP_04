/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:07:27 by sasalama          #+#    #+#             */
/*   Updated: 2023/06/29 10:21:22 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal created" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal eliminated" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	this->_type = copy._type;
	std::cout << "Copy contructed called" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
	this->_type = src._type;
	std::cout << "Animal Assignation operator called" << std::endl;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (_type);
}

std::ostream &operator<<(std::ostream &os, const Animal &another)
{
	os << another.getType();
	return (os);
}

void	Animal::makeSound(void) const
{
	std::cout << "...." << std::endl;
}
