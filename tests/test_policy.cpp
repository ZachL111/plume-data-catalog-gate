#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{77, 85, 20, 6, 8};
    assert(score_signal(signal_case_1) == 163);
    assert(classify_signal(signal_case_1) == "accept");
    Signal signal_case_2{96, 75, 20, 12, 7};
    assert(score_signal(signal_case_2) == 150);
    assert(classify_signal(signal_case_2) == "review");
    Signal signal_case_3{86, 94, 19, 5, 9};
    assert(score_signal(signal_case_3) == 205);
    assert(classify_signal(signal_case_3) == "accept");
}
