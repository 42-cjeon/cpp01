/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 11:30:05 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 12:30:40 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

int main(void) {
  Zombie *pstack;
  {
    Zombie stack("stack");
    stack.announce();
    pstack = &stack;
  }
  Zombie *pheap;
  {
    Zombie *heap = newZombie("heap");
    heap->announce();
    pheap = heap;
  }
  // pstack->announce(); -> invalid address
  pheap->announce();
  delete pheap;

  randomChump("random");
}
