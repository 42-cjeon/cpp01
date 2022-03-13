/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:17:17 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 13:42:18 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
  std::string thought("HI THIS IS BRAIN");
  
  std::string *thought_ptr = &thought;
  std::string &thought_ref = thought;

  std::cout.setf(std::ios::hex, std::ios::basefield);
  std::cout.setf(std::ios::showbase);
  std::cout << "Address of str: " << reinterpret_cast<std::uintptr_t>(&thought) << std::endl;
  std::cout << "Address of str [represented by PTR]: " << reinterpret_cast<std::uintptr_t>(thought_ptr) << std::endl;
  std::cout << "Address of str [represented by REF]: " << reinterpret_cast<std::uintptr_t>(&thought_ref) << std::endl;

  std::cout << "str [represented by PTR]: " << *thought_ptr << std::endl;
  std::cout << "str [represented by REF]: " << thought_ref << std::endl;

  return 0;
}
