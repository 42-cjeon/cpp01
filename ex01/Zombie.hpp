/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 11:30:15 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 13:44:21 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H_
#define ZOMBIE_H_

#include <string>

class Zombie {
 public:
  void announce(void) const;
  void set_name(const std::string &name);
  Zombie();
  Zombie(const std::string &name);
  ~Zombie(void);

 private:
  std::string name_;
};

Zombie *zombieHorde(int n, std::string name);

#endif
