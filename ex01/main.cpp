/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:37:01 by sasalama          #+#    #+#             */
/*   Updated: 2023/06/29 10:38:09 by sasalama         ###   ########.fr       */
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
	Animal* j = new Dog();
	Animal* i = new Cat();
	Animal* x = i;
	Animal* y(j);
	x->makeSound();
	y->makeSound();
	delete j;//should not create a leak
	delete i;
	return 0;
}
