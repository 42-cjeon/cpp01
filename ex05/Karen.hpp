/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:08:01 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 22:30:06 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H_
#define KAREN_H_

#include <string>

class Karen {
 public:
  void complain(std::string level);

 private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};

#endif
