#ifndef PERLIN_NOISE_H
#define PERLIN_NOISE_H

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

// c++11 adaptation of original perlin noise algorithm written by ken perlin in java. ref: https://cs.nyu.edu/~perlin/noise/

namespace momo{

class PerlinNoise
{
public:
    PerlinNoise();
    PerlinNoise(uint seed);
    double noise(double x, double y, double z);

private:
    std::vector<int> perm;
    double fade(double t);
    double lerp(double t, double a, double b);
    double grad(int hash, double x, double y, double z);
};

}

#endif