/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:37:01 by sasalama          #+#    #+#             */
/*   Updated: 2023/06/29 10:08:04 by sasalama         ###   ########.fr       */
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
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	j->makeSound();
	i->makeSound();
	delete j;//should not create a leak
	delete i;
	return 0;
}
