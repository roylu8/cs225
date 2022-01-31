/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#pragma once

#include "cs225/PNG.h"
#include "Image.h"
#include "cs225/HSLAPixel.h"

using namespace cs225;
using namespace std;

class StickerSheet
{
public:
    StickerSheet(const Image &picture, unsigned max);
    ~StickerSheet();
    StickerSheet(const StickerSheet &other);
    void clear();
    void copy(const StickerSheet &other);
    const StickerSheet &operator=(const StickerSheet &other);
    void changeMaxStickers(unsigned max);
    int addSticker(Image &sticker, unsigned x, unsigned y);
    bool translate(unsigned index, unsigned x, unsigned y);
    void removeSticker(unsigned index);
    Image *getSticker(unsigned index);
    Image render() const;

private:
    unsigned max_;
    Image baseImage_;
    unsigned *xCoords_;
    unsigned *yCoords_;
    Image **allStickers_;
    unsigned numStickers_;
};