/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:15:18 by sasalama          #+#    #+#             */
/*   Updated: 2023/06/13 14:45:23 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain *b;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &copy);
		Cat &operator=(const Cat &src);
		void makeSound(void) const;
};

class WrongCat: public AAnimal
{
	private:

	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat &copy);
		void makeSound(void) const;
		WrongCat &operator=(const WrongCat &src);
};

#endif