/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:07:27 by sasalama          #+#    #+#             */
/*   Updated: 2023/06/29 10:21:42 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal created" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal eliminated" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	this->_type = copy._type;
	std::cout << "Copy contructed called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &src)
{
	this->_type = src._type;
	std::cout << "AAnimal Assignation operator called" << std::endl;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (_type);
}

std::ostream &operator<<(std::ostream &os, const AAnimal &another)
{
	os << another.getType();
	return (os);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Sound default" << std::endl;
}
