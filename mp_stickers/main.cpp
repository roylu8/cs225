#include "Image.h"
#include "StickerSheet.h"

int main()
{

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
  Image alma, s1, s2, s3, output;
  alma.readFromFile("alma.png");
  s1.readFromFile("balloons.png");
  s2.readFromFile("balloons.png");
  s3.readFromFile("balloons.png");

  StickerSheet myImage(alma, 3);
  myImage.addSticker(s1, 100, 150);
  myImage.addSticker(s2, 500, 20);
  myImage.addSticker(s3, 650, 250);
  output = myImage.render();

  output.writeToFile("myImage.png");

  return 0;
}
