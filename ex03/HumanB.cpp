/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:09:01 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/14 16:41:47 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(const std::string &name) : name_(name), weapon_(NULL) {}

void HumanB::setWeapon(const Weapon &weapon) { weapon_ = &weapon; }

void HumanB::attack(void) const {
  if (weapon_) {
    std::cout << name_ << " attacks with his " << weapon_->getType() << std::endl;
  } else {
    std::cout << name_ << " attacks with his own fist" << std::endl;
  }
}
