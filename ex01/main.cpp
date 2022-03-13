/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:34:46 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 13:18:29 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

const int kMaxZombies = 100;

int main(void) {
  Zombie *horde = zombieHorde(kMaxZombies, "horde");
  for (int i = 0; i < kMaxZombies; i++) {
    horde[i].announce();
  }
  delete[] horde;
  return 0;
}
