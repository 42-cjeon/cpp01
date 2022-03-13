/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:53:28 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 14:12:48 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H_
#define HUMAN_A_H_

#include "Weapon.hpp"

class HumanA {
 public:
  HumanA(const std::string &name, const Weapon &weapon);
  void attack(void) const;

 private:
  const std::string name_;
  const Weapon &weapon_;
};

#endif
