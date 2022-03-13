/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:35:42 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 13:44:38 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name) {
  Zombie *horde = new Zombie[n];

  for (int i = 0; i < n; i++) {
    horde[i].set_name(name);
  }
  return horde;
}
