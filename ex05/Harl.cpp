/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:55:53 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/09 12:55:55 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << "[DEBUG]: love having extra bacon for my "
              << "7XL-double-cheese-triple-pickle-special-ketchup burger.I really do ! "
              << std::endl;
}
void Harl::info(void)
{
    std::cout << "[INFO]: I cannot believe adding extra bacon costs more money. You didn’t"
              << "put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
              << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[WARNING]: I think I deserve to have some extra bacon for free."
              << " I’ve been coming for years whereas you started working here since last month."
              << std::endl;
}
void Harl::error(void)
{
    std::cout << "[ERROR]: This is unacceptable! I want to speak to the manager now."
              << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*fs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"debug", "info", "warning", "error"};
    int i;
    for (i = 0; i < 4; i++)
    {
        if (!level.compare(levels[i]))
        {
            (this->*fs[i])();
            break;
        }
    }
}