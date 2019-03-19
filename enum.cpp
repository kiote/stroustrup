#include <iostream>
using namespace std;

enum class Color
{
  red,
  blue,
  green
};
enum class Traffic_light
{
  green,
  yellow,
  red
};

Color col = Color::red;

Traffic_light &operator++(Traffic_light &t)
{
  switch (t)
  {
  case Traffic_light::green:
    return t = Traffic_light::yellow;

  case Traffic_light::yellow:
    return t = Traffic_light::red;

  case Traffic_light::red:
    return t = Traffic_light::green;
  }
};

int main()
{
  Traffic_light light = Traffic_light::red;
  Traffic_light next = ++light;
  cout << "light:";
  switch (next)
  {
  case Traffic_light::green:
    cout << "green";
    break;
  case Traffic_light::yellow:
    cout << "yellow";
    break;
  case Traffic_light::red:
    cout << "red";
    break;
  }
  return 0;
}
