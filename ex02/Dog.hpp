/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:15:14 by sasalama          #+#    #+#             */
/*   Updated: 2023/06/13 14:45:30 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain *b;
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &copy);
		Dog &operator=(const Dog &src);
		void makeSound(void) const;
};

class WrongDog: public AAnimal
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