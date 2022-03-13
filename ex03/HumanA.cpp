/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:05:14 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 14:13:36 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(const std::string &name, const Weapon &weapon)
    : name_(name), weapon_(weapon) {}

void HumanA::attack(void) const {
  std::cout << name_ << " attacks with his " << weapon_.getType() << std::endl;
}
