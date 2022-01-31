#include "StickerSheet.h"

StickerSheet::StickerSheet(const Image &picture, unsigned max)
{
    max_ = max;
    baseImage_ = picture;
    xCoords_ = new unsigned[max];
    yCoords_ = new unsigned[max];
    allStickers_ = new Image *[max];
    for (unsigned i = 0; i < max; i++)
    {
        allStickers_[i] = NULL;
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
    delete[] xCoords_;
    delete[] yCoords_;
    for (unsigned i = 0; i < max_; i++)
    {
        delete allStickers_[i];
    }
    delete[] allStickers_;
}
void StickerSheet::copy(const StickerSheet &other)
{
    max_ = other.max_;
    baseImage_ = other.baseImage_;
    numStickers_ = other.numStickers_;
    xCoords_ = new unsigned[max_];
    yCoords_ = new unsigned[max_];
    allStickers_ = new Image *[max_];
    for (unsigned i = 0; i < max_; i++)
    {
        allStickers_[i] = NULL;
    }
    for (unsigned i = 0; i < numStickers_; i++)
    {
        xCoords_[i] = other.xCoords_[i];
        yCoords_[i] = other.yCoords_[i];
        allStickers_[i] = new Image();
        *allStickers_[i] = *other.allStickers_[i];
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
}
int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y)
{
}
bool StickerSheet::translate(unsigned index, unsigned x, unsigned y)
{
}
void StickerSheet::removeSticker(unsigned index)
{
}
Image *StickerSheet::getSticker(unsigned index)
{
}
Image StickerSheet::render() const
{
}