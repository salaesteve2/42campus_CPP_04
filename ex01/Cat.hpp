/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:15:18 by sasalama          #+#    #+#             */
/*   Updated: 2023/06/13 14:45:05 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *b;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &copy);
		void makeSound(void) const;
		Cat &operator=(const Cat &src);
};

class WrongCat: public Animal
{
	private:

	public:
		WrongCat(void);
		~WrongCat(void);
		void makeSound(void) const;
		WrongCat(const WrongCat &copy);
		WrongCat &operator=(const WrongCat &src);
};

#endif