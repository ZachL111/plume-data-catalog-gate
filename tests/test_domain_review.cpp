#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{73, 35, 11, 82};
    assert(domain_review_score(item) == 230);
    assert(domain_review_lane(item) == "ship");
}
