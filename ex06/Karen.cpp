/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:07:58 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 22:30:55 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

#include <iostream>

void Karen::complain(std::string level) {
  const char *key[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  int i;
  for (i = 0; i < 4; i++) {
    if (key[i] == level) {
      break;
    }
  }
  switch (i) {
    case kDebug:
      std::cout << "[ DEBUG ]" << std::endl;
      debug();
    case kInfo:
      std::cout << "[ INFO ]" << std::endl;
      info();
    case kWarning:
      std::cout << "[ WARNING ]" << std::endl;
      warning();
    case kError:
      std::cout << "[ ERROR ]" << std::endl;
      error();
    default:
      break;
  }
}

void Karen::debug(void) {
  std::cout << "I love to get extra bacon for my "
               "7XL-double-cheese-triple-pickle-special-ketchup burger. "
               "I just love it!"
            << std::endl;
}

void Karen::info(void) {
  std::cout << "I cannot believe adding extra bacon cost more money. "
               "You don’t put enough! "
               "If you did I would not have to ask for it!"
            << std::endl;
}

void Karen::warning(void) {
  std::cout << "I think I deserve to have some extra bacon for free. "
               "I’ve been coming here for years "
               "and you just started working here last month."
            << std::endl;
}

void Karen::error(void) {
  std::cout << "This is unacceptable, I want to speak to the manager now."
            << std::endl;
}
