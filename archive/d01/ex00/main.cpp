/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruteflow <bruteflow@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 11:31:28 by bruteflow         #+#    #+#             */
/*   Updated: 2017/06/12 12:41:34 by bruteflow        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

int main(void)
{
	Pony *ponyOnTheHeap = new Pony("Pony on the heap", "blue", "purple");
	Pony poneOnTheStack("Pony on the stack", "red", "satin");
	ponyOnTheHeap->ponyIntroduce();
	poneOnTheStack.ponyIntroduce();
	delete ponyOnTheHeap;
	return 0;
}
