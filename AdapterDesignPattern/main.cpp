#include <iostream>
#include <vector>
#include <memory>
#include <cmath>

using namespace std;

// Intent is to adapt this interface
class RoundPeg
{
  int radius_{};
public:
  RoundPeg(int radius) : radius_(radius) {}
  virtual int radius() const { return radius_;};
  virtual ~RoundPeg() = default;
};

// client code
class RoundHole
{
  int radius_{};
public:
  RoundHole(int radius) : radius_(radius) {}
  int radius() const {return radius_;}
  bool fits(RoundPeg& round_peg)
  {
    return radius_ >= round_peg.radius();
  }
};

class SquarePeg
{
  int width_{};
public:
  SquarePeg(int width) : width_(width) {}
  int width() const { return width_;}
};

class SquarePegAdapter : public RoundPeg
{
  SquarePeg& square_peg_;
public:
  SquarePegAdapter(SquarePeg& square_peg) : RoundPeg(square_peg.width() / sqrt(2)), square_peg_(square_peg) {}
  int radius() const override
  {
    return square_peg_.width() / sqrt(2);
  }

};

int main()
{
  RoundHole hole(5);
  RoundPeg rpeg(5);
  cout << boolalpha;
  cout << hole.fits(rpeg) << endl;  // fits true
  SquarePeg small_sqpeg(5);
  SquarePeg large_sqpeg(10);

  SquarePegAdapter small_sqpeg_adapter(small_sqpeg);
  SquarePegAdapter large_sqpeg_adapter(large_sqpeg);
  
  cout << hole.fits(small_sqpeg_adapter) << endl;  // fits true
  cout << hole.fits(large_sqpeg_adapter) << endl;  // doesn't fit, false

  return 0;
}
