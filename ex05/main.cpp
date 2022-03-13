/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:49:22 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 21:50:36 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void) {
  Karen karen;

  karen.complain("DEBUG");
  karen.complain("INFO");
  karen.complain("WARNING");
  karen.complain("ERROR");

  return 0;
}
