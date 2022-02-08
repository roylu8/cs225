#include "Image.h"
#include "StickerSheet.h"

int main()
{

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
  Image alma, s1, s2, s3, s4;
  alma.readFromFile("alma.png");
  s1.readFromFile("balloons.png");
  s2.readFromFile("balloons.png");
  s3.readFromFile("balloons.png");
  s4.readFromFile("i.png");

  StickerSheet myImage(alma, 4);
  myImage.addSticker(s1, 100, 150);
  myImage.addSticker(s2, 500, 20);
  myImage.addSticker(s3, 650, 250);
  s4.scale(0.5);
  myImage.addSticker(s4, 20, 425);

  (myImage.render()).writeToFile("myImage.png");

  return 0;
}
