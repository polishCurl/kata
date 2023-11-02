#include "ship.hpp"

Ship::Ship(int draft, int crew) : draft_{draft}, crew_{crew} {}

bool Ship::isWorthIt() const {
  return draft_ - (crew_ * kCrewMemberWeight) >= kDraftThresWorthIt;
}