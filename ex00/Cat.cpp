/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:15:16 by sasalama          #+#    #+#             */
/*   Updated: 2023/06/29 10:21:27 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat eliminated" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	this->_type = copy._type;
	std::cout << "Copy contructed called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	this->_type = src._type;
	std::cout << "Cat Assignation operator called" << std::endl;
	return (*this);
}

WrongCat::WrongCat(void)
{
	_type = "Dog";
	std::cout << "Dog created" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Dog eliminated" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
	std::cout << "Copy contructed called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
		*this = src;
	std::cout << "WrongCat Assignation operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Guau!" << std::endl;
}
