#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>

#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include "Image.h"

using namespace cs225;

void Image::darken()
{
    for (unsigned x = 0; x < width(); x++)
    {
        for (unsigned y = 0; y < height(); y++)
        {
            HSLAPixel &pixel = getPixel(x, y);
            pixel.l = fmax(0.0, pixel.l - 0.1);
        }
    }
}
void Image::darken(double amount)
{
    for (unsigned x = 0; x < width(); x++)
    {
        for (unsigned y = 0; y < height(); y++)
        {
            HSLAPixel &pixel = getPixel(x, y);
            pixel.l = fmax(0.0, pixel.l - amount);
        }
    }
}
void Image::lighten()
{
    for (unsigned x = 0; x < width(); x++)
    {
        for (unsigned y = 0; y < height(); y++)
        {
            HSLAPixel &pixel = getPixel(x, y);
            pixel.l = fmin(1.0, pixel.l + 0.1);
        }
    }
}
void Image::lighten(double amount)
{
    for (unsigned x = 0; x < width(); x++)
    {
        for (unsigned y = 0; y < height(); y++)
        {
            HSLAPixel &pixel = getPixel(x, y);
            pixel.l = fmin(1.0, pixel.l + amount);
        }
    }
}
void Image::saturate()
{
    for (unsigned x = 0; x < width(); x++)
    {
        for (unsigned y = 0; y < height(); y++)
        {
            HSLAPixel &pixel = getPixel(x, y);
            pixel.s = fmin(1.0, pixel.s + 0.1);
        }
    }
}
void Image::saturate(double amount)
{
    for (unsigned x = 0; x < width(); x++)
    {
        for (unsigned y = 0; y < height(); y++)
        {
            HSLAPixel &pixel = getPixel(x, y);
            pixel.s = fmin(1.0, pixel.s + amount);
        }
    }
}
void Image::desaturate()
{
    for (unsigned x = 0; x < width(); x++)
    {
        for (unsigned y = 0; y < height(); y++)
        {
            HSLAPixel &pixel = getPixel(x, y);
            pixel.s = fmax(0.0, pixel.l - 0.1);
        }
    }
}
void Image::desaturate(double amount)
{
    for (unsigned x = 0; x < width(); x++)
    {
        for (unsigned y = 0; y < height(); y++)
        {
            HSLAPixel &pixel = getPixel(x, y);
            pixel.s = fmax(0.0, pixel.l - amount);
        }
    }
}
void Image::grayscale()
{
    for (unsigned x = 0; x < width(); x++)
    {
        for (unsigned y = 0; y < height(); y++)
        {
            HSLAPixel &pixel = getPixel(x, y);
            pixel.s = 0;
        }
    }
}
void Image::rotateColor(double degrees)
{
    for (unsigned x = 0; x < width(); x++)
    {
        for (unsigned y = 0; y < height(); y++)
        {
            HSLAPixel &pixel = getPixel(x, y);
            if (pixel.h + degrees > 360)
            {
                pixel.h = pixel.h + degrees - 360;
            }
            else if (pixel.h + degrees < 0)
            {
                pixel.h = pixel.h + degrees + 360;
            }
            else
            {
                pixel.h += degrees;
            }
        }
    }
}
void Image::illinify()
{
    for (unsigned x = 0; x < width(); x++)
    {
        for (unsigned y = 0; y < height(); y++)
        {
            HSLAPixel &pixel = getPixel(x, y);
            if (pixel.h >= 113 && pixel.h < 294)
            {
                pixel.h = 216;
            }
            else
            {
                pixel.h = 11;
            }
        }
    }
}
void Image::scale(double factor)
{
    unsigned newWidth = factor * width();
    unsigned newHeight = factor * height();
    PNG originalImage(*this);
    resize(newWidth, newHeight);

    for (unsigned x = 0; x < newWidth; x++)
    {
        for (unsigned y = 0; y < newHeight; y++)
        {
            HSLAPixel &pixelOld = originalImage.getPixel(x / factor, y / factor);
            HSLAPixel &pixelNew = getPixel(x, y);

            pixelNew = pixelOld;
        }
    }
}
void Image::scale(unsigned w, unsigned h)
{
    PNG originalImage(*this);
    resize(w, h);

    for (unsigned x = 0; x < w; x++)
    {
        for (unsigned y = 0; y < h; y++)
        {
            HSLAPixel &pixelOld = originalImage.getPixel((unsigned int)(x / (w / (double)width())), (unsigned int)(y / (h / (double)height())));
            HSLAPixel &pixelNew = getPixel(x, y);

            pixelNew = pixelOld;
        }
    }
}