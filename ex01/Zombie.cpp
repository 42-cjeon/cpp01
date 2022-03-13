/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 11:30:13 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 13:44:05 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(const std::string &name) : name_(name) {}
Zombie::Zombie(void) {}

Zombie::~Zombie(void) {
  std::cout << name_ << ": destructor called.." << std::endl;
}

void Zombie::set_name(const std::string &name) { name_ = name; }

void Zombie::announce(void) const {
  std::cout << name_ << " BraiiiiiiinnnzzzZ..." << std::endl;
}
