/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   winner.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:31:47 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/13 17:03:15 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

namespace winner {
class Parser {
  public:
    Parser(int argc, char **argv);
    void Parse(void);
    bool Ok(void);
    void ShowErrorMessage(void);
    int status(void);
    const std::string &filename(void) const;
    const std::string &s1(void) const;
    const std::string &s2(void) const;
  private:
    static const int kSuccess = 0;
    static const int kPending = 1;
    static const int kWrongNumberOfArgs = 2;
    static const int kEmptyS1 = 3;
    static const int kEmptyS2 = 4;

    std::string filename_;
    std::string s1_;
    std::string s2_;
    int argc_;
    char **argv_;
    int status_;
};

class Replacer {
  public:
    Replacer(const std::string &filename);
    ~Replacer();
    bool Ok(void);
    void ShowErrorMessage(void);
    void Replace(const std::string &replace_from, const std::string &replace_to);
  
  private:
    static const int kSuccess = 0;
    static const int kPending = 1;
    static const int kCannotOpenFile = 2;
    static const int kIOFail = 4;

    int status_;
    const std::string filename_;
    std::ifstream infile_;
    std::ofstream outfile_;
};
}
