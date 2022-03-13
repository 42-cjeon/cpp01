/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:08:01 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 22:31:06 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H_
#define KAREN_H_

#include <string>

class Karen {
 public:
  void complain(std::string level);

 private:
  static const int kDebug = 0;
  static const int kInfo = 1;
  static const int kWarning = 2;
  static const int kError = 3;

  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};

#endif
