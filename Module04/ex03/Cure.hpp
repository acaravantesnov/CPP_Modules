/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaravan <acaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:53:00 by acaravan          #+#    #+#             */
/*   Updated: 2022/07/21 13:09:50 by acaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &cure);
		~Cure();
		Cure	&operator=(Cure const &cure);
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
