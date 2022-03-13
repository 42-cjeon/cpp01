/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:49:55 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 14:28:43 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type_(type) {}

Weapon::Weapon(void) {}

void Weapon::setType(const std::string &type) { type_ = type; }

const std::string &Weapon::getType(void) const { return type_; }
