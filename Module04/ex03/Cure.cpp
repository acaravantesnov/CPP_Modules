/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaravan <acaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:52:55 by acaravan          #+#    #+#             */
/*   Updated: 2022/07/21 13:12:00 by acaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	type = "cure";
}

Cure::Cure(const Cure &cure)
{
	this->type = cure.type;
}

Cure::~Cure()
{
	
}

Cure	&Cure::operator=(Cure const &cure)
{
	if (this != &cure)
		this->type = cure.type;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria* mat = new Cure(*this);
	return (mat);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
