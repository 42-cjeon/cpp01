/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:46:53 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 22:38:55 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "winner.hpp"

namespace winner {
Parser::Parser(int argc, char **argv)
    : argc_(argc), argv_(argv), status_(kPending) {}

void Parser::Parse(void) {
  if (argc_ != 4) {
    status_ = kWrongNumberOfArgs;
    return;
  }
  filename_ = argv_[1];
  s1_ = argv_[2];
  if (s1_ == "") {
    status_ = kEmptyS1;
    return;
  }
  s2_ = argv_[3];
  if (s2_ == "") {
    status_ = kEmptyS2;
    return;
  }
  status_ = kSuccess;
}

bool Parser::Ok(void) { return status_ == kSuccess; }

void Parser::ShowErrorMessage(void) {
  switch (status_) {
    case kWrongNumberOfArgs:
      std::cerr << "usage: winner [filename] [replace_from] [replace_to]"
                << std::endl;
      break;
    case kEmptyS1:
      std::cerr << argv_[0] << ": field [replace_from] must not empty string"
                << std::endl;
      break;
    case kEmptyS2:
      std::cerr << argv_[0] << ": field [replace_to] must not empty string"
                << std::endl;
      break;
    default:
      break;
  }
}

int Parser::status(void) { return status_; }

const std::string &Parser::filename(void) const { return filename_; }

const std::string &Parser::s1(void) const { return s1_; }

const std::string &Parser::s2(void) const { return s2_; }
}  // namespace winner
