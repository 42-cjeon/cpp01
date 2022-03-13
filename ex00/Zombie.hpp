/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 11:30:15 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 12:33:50 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H_
#define ZOMBIE_H_

#include <string>

class Zombie {
 public:
  void announce(void) const;
  Zombie(const std::string& name);
  ~Zombie(void);

 private:
  const std::string name_;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
