#include <vector>
#include <string>

/**
 * Finds a subset of vertices S in the n x n Zebra Graph that forms an induced cycle
 * of length at least floor(n^2 / e).
 *
 * @param n The dimension of the grid (n = 5 or n = 1001).
 * @return A vector of n strings of length n, where '1' at [r][c] indicates
 *         vertex (r, c) is in S, and '0' otherwise.
 */
std::vector<std::string> solveZebra(int n) {
    // Implement your logic here
    std::vector<std::string> result(n, std::string(n, '0'));

    return result;
}