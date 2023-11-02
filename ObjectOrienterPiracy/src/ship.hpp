#ifndef OBJECT_ORIENTED_PIRACY_SRC_SHIP_H_
#define OBJECT_ORIENTED_PIRACY_SRC_SHIP_H_

class Ship {
 public:
  Ship(int draft, int crew);
  bool isWorthIt() const;

 private:
  const int draft_;
  const int crew_;

  static constexpr float kDraftThresWorthIt{20};
  static constexpr float kCrewMemberWeight{1.5};
};

#endif  // OBJECT_ORIENTED_PIRACY_SRC_SHIP_H_