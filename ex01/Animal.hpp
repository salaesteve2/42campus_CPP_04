/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:07:25 by sasalama          #+#    #+#             */
/*   Updated: 2023/06/13 14:42:58 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &src);
		std::string	getType(void) const;
		virtual void makeSound(void) const;
};

std::ostream &operator<<(std::ostream &os, const Animal &another);

#endif