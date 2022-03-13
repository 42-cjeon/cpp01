/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:00:21 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 14:25:26 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H_
#define HUMAN_B_H_

#include "Weapon.hpp"

class HumanB {
 public:
  HumanB(const std::string &name);
  void attack(void) const;
  void setWeapon(const Weapon &weapon);

 private:
  const std::string name_;
  const Weapon *weapon_;
};

#endif
