/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:59:08 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/12 16:12:26 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *a;
    int N = 2;
    a = zombieHorde(N, "bro");
    for (int i = 0; i < N; i++)
        a[i].announce();
    delete [] a;
    return (0);
}