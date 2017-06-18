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
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main(void)
{
	ZombieEvent event;
	Zombie	*zombieHeap;
	Zombie	zombieStack("level 1", "Original");

	zombieStack.announce();
	std::cout << std::endl;

	event.setZombieType("spawn");
	std::cout << std::endl;
	zombieHeap = event.newZombie("Spawned");
	zombieHeap->announce();
	delete zombieHeap;
	std::cout << std::endl;

	std::cout << "Event started." << std::endl;
	event.setZombieType("lurkers");
	for (int i = 0; i < 5; i++) {
		zombieHeap = event.randomChump();
		delete zombieHeap;
	}
	std::cout << std::endl;

	std::cout << "Event started." << std::endl;
	event.setZombieType("chasers");
	for (int i = 0; i < 5; i++) {
		zombieHeap = event.randomChump();
		delete zombieHeap;
	}
	std::cout << std::endl;

	std::cout << "Event started." << std::endl;
	event.setZombieType("random");
	for (int i = 0; i < 5; i++) {
		zombieHeap = event.randomChump();
		delete zombieHeap;
	}
	std::cout << std::endl;
	return 0;
}
