/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:41:20 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 17:07:55 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "winner.hpp"

namespace winner {
Replacer::Replacer(const std::string &filename) : status_(kPending) {
  infile_.open(filename);
  if (!infile_.good()) {
    status_ = kCannotOpenFile;
    return;
  }
  outfile_.open(filename + ".replace");
  if (!outfile_.good()) {
    status_ = kCannotOpenFile;
    return;
  }
}
Replacer::~Replacer(void) {
  if (infile_.is_open())
    infile_.close();
  if (outfile_.is_open())
    outfile_.close();
}

bool Replacer::Ok(void) {
  return status_ == kPending || status_ == kSuccess;
}

void Replacer::ShowErrorMessage(void) {
  switch (status_)
  {
  case kCannotOpenFile:
    std::cerr << "winner: Cannot open file" << std::endl;
    break;
  case kIOFail:
    std::cerr << "winner: I/O error occurred" << std::endl;
    break;
  default:
    break;
  }
}

void Replacer::Replace(const std::string &replace_from, const std::string &replace_to) {
  std::ostringstream ss;

  ss << infile_.rdbuf();  
  std::string file_contants;
  file_contants = ss.str();
  for (size_t last = 0, curr; ; last = curr + replace_from.length()) {
    curr = file_contants.find(replace_from, last);
    if (curr == std::string::npos) {
      outfile_ << file_contants.substr(last);
      break;
    }
    outfile_ << file_contants.substr(last, curr - last);
    outfile_ << replace_to;
  }
  if (outfile_.bad()) {
    status_ = kIOFail;
  } else {
    status_ = kSuccess;
  }
}
}
