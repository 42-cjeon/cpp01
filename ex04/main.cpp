/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:31:50 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 22:38:38 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

#include "winner.hpp"

int main(int argc, char **argv) {
  winner::Parser parser(argc, argv);
  parser.Parse();
  if (!parser.Ok()) {
    parser.ShowErrorMessage();
    return 2;
  }
  winner::Replacer replacer(parser.filename());
  if (!replacer.Ok()) {
    replacer.ShowErrorMessage();
    return 1;
  }
  replacer.Replace(parser.s1(), parser.s2());
  if (!replacer.Ok()) {
    replacer.ShowErrorMessage();
    return 3;
  }
  return 0;
}
