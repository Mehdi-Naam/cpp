#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <iomanip>
#include <ctime>

void	pmergeme(std::vector<int> &_vec);
void	display(std::vector<int> &_vec, std::deque<int> &_dq, double clck_dq, double clck);
void	pmergeme_dq(std::deque<int> &_dq);
double	time_su(clock_t	&start, clock_t	&end);
void	temp(int &tmp, std::vector<int> &_vec);
void	temp(int &tmp, std::deque<int> &_vec);
int		parsing(std::deque<int> &_dq);
int		parsing(std::vector<int> &_vec);

#endif
