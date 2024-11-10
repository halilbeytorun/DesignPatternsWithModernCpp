//// Virtual proxy

#include <iostream>
#include <vector>
#include <memory>
#include <stack>
#include <algorithm>

#include <string>

// Virtual proxy example.
struct Image
{
    virtual void draw() = 0;
};

struct Bitmap : Image
{
    Bitmap(const std::string& filename)
    {
        std::cout << "loading bitmap " << filename << std::endl;
    }
    // no need to load bitmap before draw function is called
    void draw() override
    {
        std::cout << "drawing bitmap " << std::endl;
    }
};
// file will be loaded if only draw function is called!
struct LazyBitmap : Image
{
    LazyBitmap(const std::string& filename) : filename_(filename) {}
    void draw() override
    {
        if(!bmp)
            bmp = new Bitmap(filename_);
        bmp->draw();
    }
private:
    std::string filename_;
    Bitmap* bmp{nullptr};
};

/// @brief Does not know if the object is proxy or not.
/// @param image 
void useImage(Image& image)
{
  image.draw();
}


int main()
{
  Bitmap actual("testfilename");
  LazyBitmap proxy("otherfile");

  std::cout << "calling function using the actual object\n";
  useImage(actual);
  std::cout << "called the function\n";

  std::cout << "calling function using the proxy object\n";
  useImage(proxy);
  std::cout << "called the function\n";
}

