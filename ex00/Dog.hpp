/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:15:14 by sasalama          #+#    #+#             */
/*   Updated: 2023/06/13 14:47:24 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	private:

	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &copy);
		void makeSound(void) const;
		Dog &operator=(const Dog &src);
};

class WrongDog: public Animal
{
	private:

	public:
		WrongDog(void);
		~WrongDog(void);
		WrongDog(const WrongDog &copy);
		void makeSound(void) const;
		WrongDog &operator=(const WrongDog &src);
};

#endif