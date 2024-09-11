/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaravan <acaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:02:03 by acaravan          #+#    #+#             */
/*   Updated: 2022/07/10 18:05:29 by acaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen karen;
	karen.complain("INFO");
	karen.complain("DEBUG");
	karen.complain("WARNING");
	karen.complain("ERROR");
}
