#ifndef PERLIN_NOISE_H
#define PERLIN_NOISE_H

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

// c++11 adaptation of original perlin noise algorithm written by ken perlin in java. ref: https://cs.nyu.edu/~perlin/noise/
// with some light changes from https://solarianprogrammer.com/2012/07/18/perlin-noise-cpp-11/

class PerlinNoise
{
public:
    PerlinNoise();
    PerlinNoise(uint seed);     //in case you want to use a particular seed for our noise
    double noise(double x, double y, double z);

private:
    std::vector<int> perm;      //permutation vector
    double fade(double t);
    double lerp(double t, double a, double b);
    double grad(int hash, double x, double y, double z);
};

#endif