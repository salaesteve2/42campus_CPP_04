/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:07:25 by sasalama          #+#    #+#             */
/*   Updated: 2023/06/13 15:01:50 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal(void);
		virtual ~AAnimal(void);
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(const AAnimal &src);
		std::string	getType(void) const;
		virtual void makeSound(void) const = 0;
};

std::ostream &operator<<(std::ostream &os, const AAnimal &another);

#endif