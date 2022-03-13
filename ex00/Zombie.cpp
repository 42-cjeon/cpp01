/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 11:30:13 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 12:31:16 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(const std::string &name) : name_(name) {}

Zombie::~Zombie(void) {
  std::cout << name_ << ": destructor called.." << std::endl;
}

void Zombie::announce(void) const {
  std::cout << name_ << " BraiiiiiiinnnzzzZ..." << std::endl;
}
