#pragma once

#include <blitzml/smooth_loss/smooth_loss.h>

namespace BlitzML {

class HuberLoss : public SmoothLoss {
  public:
    HuberLoss() { }

    virtual ~HuberLoss() { }

    value_t compute_loss(value_t a_dot_omega, value_t label) const;
    value_t compute_conjugate(value_t dual_variable, value_t label) const;
    value_t compute_deriative(value_t a_dot_omega, value_t label) const;
    value_t compute_2nd_derivative(value_t a_dot_omega,
                                           value_t label) const;
    value_t lipschitz_constant() const;
};

} // namespace BlitzML

