#include "StickerSheet.h"

StickerSheet::StickerSheet(const Image &picture, unsigned max)
{
    max_ = max;
    baseImage_ = picture;
    allStickers_ = new sticker[max];
    for (unsigned i = 0; i < max; i++)
    {
        allStickers_[i].im = NULL;
    }
    numStickers_ = 0;
}
StickerSheet::~StickerSheet()
{
    clear();
}
StickerSheet::StickerSheet(const StickerSheet &other)
{
    copy(other);
}
void StickerSheet::clear()
{

    for (unsigned i = 0; i < numStickers_; i++)
    {
        delete allStickers_[i].im;
    }
    delete[] allStickers_;
}
void StickerSheet::copy(const StickerSheet &other)
{
    max_ = other.max_;
    baseImage_ = other.baseImage_;
    numStickers_ = other.numStickers_;
    allStickers_ = new sticker[max_];
    for (unsigned i = 0; i < max_; i++)
    {
        allStickers_[i].im = NULL;
    }
    for (unsigned i = 0; i < numStickers_; i++)
    {
        allStickers_[i].im = new Image(*(other.allStickers_[i].im));
        allStickers_[i].x = other.allStickers_[i].x;
        allStickers_[i].y = other.allStickers_[i].y;
    }
}
const StickerSheet &StickerSheet::operator=(const StickerSheet &other)
{
    clear();
    copy(other);
    return *this;
}
void StickerSheet::changeMaxStickers(unsigned max)
{
    sticker *copy = allStickers_;
    allStickers_ = new sticker[max];
    if (max > numStickers_)
    {
        for (unsigned i = 0; i < numStickers_; i++)
        {
            allStickers_[i] = copy[i];
            allStickers_[i].im = new Image(*(copy[i].im));
            delete copy[i].im;
        }
    }
    else
    {
        for (unsigned i = 0; i < max; i++)
        {
            allStickers_[i] = copy[i];
            allStickers_[i].im = new Image(*(copy[i].im));
            delete copy[i].im;
        }
        for (unsigned i = max; i < numStickers_; i++)
        {
            delete copy[i].im;
        }
        numStickers_ = max;
    }
    delete[] copy;
    max_ = max;
}
int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y)
{
    if (numStickers_ == max_)
        return -1;
    allStickers_[numStickers_].im = new Image(sticker);
    allStickers_[numStickers_].x = x;
    allStickers_[numStickers_].y = y;
    numStickers_++;
    return numStickers_ - 1;
}
bool StickerSheet::translate(unsigned index, unsigned x, unsigned y)
{
    if (index < max_ && allStickers_[index].im != NULL)
    {
        allStickers_[index].x = x;
        allStickers_[index].y = y;
        return true;
    }
    return false;
}
void StickerSheet::removeSticker(unsigned index)
{
    if (index < max_ && allStickers_[index].im != NULL)
    {
        delete allStickers_[index].im;
        for (unsigned i = index; i < numStickers_; i++)
        {
            allStickers_[i] = allStickers_[i + 1];
        }
        allStickers_[numStickers_].im = NULL;
        numStickers_--;
    }
}
Image *StickerSheet::getSticker(unsigned index)
{
    if (index < max_ && allStickers_[index].im != NULL)
    {
        return allStickers_[index].im;
    }
    return NULL;
}
Image StickerSheet::render() const
{
    Image finalImage;
    unsigned maxWidth = baseImage_.width(), maxHeight = baseImage_.height();

    for (unsigned i = 0; i < numStickers_; i++)
    {
        if (allStickers_[i].im != NULL)
        {
            if (allStickers_[i].x + allStickers_[i].im->width() > maxWidth)
            {
                maxWidth = allStickers_[i].x + allStickers_[i].im->width();
            }
            if (allStickers_[i].y + allStickers_[i].im->height() > maxHeight)
            {
                maxHeight = allStickers_[i].y + allStickers_[i].im->height();
            }
        }
    }
    finalImage = baseImage_;
    finalImage.resize(maxWidth, maxHeight);

    for (unsigned i = 0; i < numStickers_; i++)
    {
        if (allStickers_[i].im != NULL)
        {
            for (unsigned w = allStickers_[i].x; w < allStickers_[i].x + allStickers_[i].im->width(); w++)
            {
                for (unsigned h = allStickers_[i].y; h < allStickers_[i].y + allStickers_[i].im->height(); h++)
                {
                    if (allStickers_[i].im->getPixel(w - allStickers_[i].x, h - allStickers_[i].y).a != 0)
                    {
                        finalImage.getPixel(w, h) = allStickers_[i].im->getPixel(w - allStickers_[i].x, h - allStickers_[i].y);
                    }
                }
            }
        }
    }
    return finalImage;
}