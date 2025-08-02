#include <iostream>
#include <vector>
#include <chrono>
#include <limits>
#include <cmath>

using namespace std;

class LCG {
public:
    LCG(uint32_t seed) : value(seed) {}
    uint32_t next() {
        value = (a * value + c) % m;
        return value;
    }
private:
    uint64_t value;
    const static uint32_t a = 1664525;
    const static uint32_t c = 1013904223;
    const static uint64_t m = static_cast<uint64_t>(std::pow(2, 32));
};

long long max_subarray_sum(int n, uint32_t seed, int min_val, int max_val) {
    LCG lcg_gen(seed);
    vector<int> random_numbers(n);
    int range = max_val - min_val + 1;
    for (int i = 0; i < n; ++i) {
        random_numbers[i] = lcg_gen.next() % range + min_val;
    }

    long long max_sum = std::numeric_limits<long long>::min();
    for (int i = 0; i < n; ++i) {
        long long current_sum = 0;
        for (int j = i; j < n; ++j) {
            current_sum += random_numbers[j];
            if (current_sum > max_sum)
                max_sum = current_sum;
        }
    }
    return max_sum;
}

long long total_max_subarray_sum(int n, uint32_t initial_seed, int min_val, int max_val) {
    long long total_sum = 0;
    LCG lcg_gen(initial_seed);
    for (int i = 0; i < 20; ++i) {
        uint32_t seed = lcg_gen.next();
        total_sum += max_subarray_sum(n, seed, min_val, max_val);
    }
    return total_sum;
}

int main() {
    int n = 10000;
    uint32_t initial_seed = 42;
    int min_val = -10;
    int max_val = 10;

    using namespace std::chrono;
    auto start_time = high_resolution_clock::now();
    long long result = total_max_subarray_sum(n, initial_seed, min_val, max_val);
    auto end_time = high_resolution_clock::now();

    double execution_time = duration<double>(end_time - start_time).count();

    cout << "Total Maximum Subarray Sum (20 runs): " << result << endl;
    cout << "Execution Time: " << fixed << setprecision(6) << execution_time << " seconds" << endl;

    return 0;
}
