#ifndef FACTORS_H
#define FACTORS_H

#include <vector>
#include <stdlib.h>
#include <stdio.h>

void factorize_file(const std::string& file_path);
std::vector<std::pair<int, int>> factorize(int number);

#endif /* FACTORS_H */
