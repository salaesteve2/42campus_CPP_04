/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:15:12 by sasalama          #+#    #+#             */
/*   Updated: 2023/06/29 10:21:39 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	b = new Brain();
	std::cout << "Dog created" << std::endl;
}

Dog::~Dog(void)
{
	delete b;
	std::cout << "Dog eliminated" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	this->_type = copy._type;
	this->b = new Brain;
	*this->b = *copy.b;
	std::cout << "Copy contructed called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	this->_type = src._type;
	if (this->b)
	{
		delete this->b;
		this->b = new Brain;
		*this->b = *src.b;
	}
	std::cout << "Dog Assignation operator called" << std::endl;
	return (*this);
}

WrongDog::WrongDog(void)
{
	_type = "Cat";
	std::cout << "Cat created" << std::endl;
}

WrongDog::~WrongDog(void)
{
	std::cout << "Cat eliminated" << std::endl;
}

WrongDog::WrongDog(const WrongDog &copy)
{
	*this = copy;
	std::cout << "Copy contructed called" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &src)
{
	if (this != &src)
		*this = src;
	std::cout << "WrongDog Assignation operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Guau!" << std::endl;
}

void	WrongDog::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
}
