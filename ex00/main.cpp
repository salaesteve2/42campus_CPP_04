/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:37:01 by sasalama          #+#    #+#             */
/*   Updated: 2023/06/13 12:23:38 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void    ft_leaks(void)
{
    system("leaks -q polymorphism");
}

int main()
{
	atexit(ft_leaks);
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* x = new WrongCat();
	const Animal* y = new WrongDog();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;
	std::cout << y->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	x->makeSound();
	y->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete x;
	delete y;
	delete meta;
	return 0;
}
