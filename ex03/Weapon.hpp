/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:50:04 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 14:28:41 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H_
#define WEAPON_H_

#include <string>

class Weapon {
 public:
  Weapon(const std::string &type);
  Weapon();
  void setType(const std::string &type);
  const std::string &getType(void) const;

 private:
  std::string type_;
};

#endif
