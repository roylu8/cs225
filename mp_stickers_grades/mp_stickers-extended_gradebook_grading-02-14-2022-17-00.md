---

This report was generated for **roylu2** using **59dbe32e19d630853631d6bac8c23ba68af95ea6** (latest commit as of **February 11th 2022, 11:59 pm**)

---




## Score: 53/61 (86.89%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c Image.cpp -o .objs/Image.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c StickerSheet.cpp -o .objs/StickerSheet.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part1.cpp -o .objs/tests/tests-part1.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part2.cpp -o .objs/tests/tests-part2.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/Image.o .objs/StickerSheet.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-part1.o .objs/tests/tests-part2.o .objs/cs225/catch/catchmain.o  -std=c++14 -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - Image lighten() lightens pixels by 0.1

- **Points**: 1 / 1





### ✓ - [1/1] - Image lighten() does not lighten a pixel above 1.0

- **Points**: 1 / 1





### ✓ - [1/1] - Image darken(0.2) darkens pixels by 0.2

- **Points**: 1 / 1





### ✓ - [1/1] - Image darken(0.2) does not darken a pixel below 0.0

- **Points**: 1 / 1





### ✓ - [1/1] - Image saturate() saturates a pixels by 0.1

- **Points**: 1 / 1





### ✓ - [1/1] - Image rotateColor(double) rotates the color

- **Points**: 1 / 1





### ✓ - [1/1] - Image rotateColor(double) keeps the hue in the range 0..360

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(2.0) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(0.5) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(2) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(0.5) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✗ - [0/1] - Image scale(10000\, 200) results in the correct width/height

- **Points**: 0 / 1


```
Original: img.width() * 2 == result.width()
Expanded: 720 (0x2d0) == 10000 (0x2710)
```


### ✗ - [0/1] - Image scale(720\, 10000) results in the correct width/height

- **Points**: 0 / 1

```
[Process timed out]
```
```
Unable to Grade (ETIMEDOUT): Your code did not finish within 10000ms.
```


### ✗ - [0/1] - Image scale(240\, 50) results in the correct width/height

- **Points**: 0 / 1


```
Original: img.width() * 0.5 == result.width()
Expanded: 180.0 == 240
```


### ✗ - [0/1] - Image scale(180\, 80) results in the correct width/height

- **Points**: 0 / 1


```
Original: img.height() * 0.5 == result.height()
Expanded: 50.0 == 80
```


### ✗ - [0/1] - Image scale(10000\, 200) scales pixel data in a reasonable way

- **Points**: 0 / 1


```
Original: result.getPixel(100, 100).h < 60
Expanded: 100.0 < 60
```


### ✗ - [0/1] - Image scale(720\, 10000) scales pixel data in a reasonable way

- **Points**: 0 / 1

```
[Process timed out]
```
```
Unable to Grade (ETIMEDOUT): Your code did not finish within 10000ms.
```


### ✗ - [0/1] - Image scale(240\, 50) scales pixel data in a reasonable way

- **Points**: 0 / 1


```
Original: result.getPixel(100, 20).h > 180
Expanded: 100.0 > 180
```


### ✗ - [0/1] - Image scale(180\, 80) scales pixel data in a reasonable way

- **Points**: 0 / 1


```
Original: result.getPixel(100, 20).h > 180
Expanded: 100.0 > 180
```


### ✓ - [3/3] - Image doesn't have any memory erorrs

- **Points**: 3 / 3

```
==113== Memcheck, a memory error detector
==113== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==113== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==113== Command: ./test -r xml "Image\ doesn't\ have\ any\ memory\ erorrs"
==113== 
==113== 
==113== HEAP SUMMARY:
==113==     in use at exit: 0 bytes in 0 blocks
==113==   total heap usage: 2,589 allocs, 2,589 frees, 333,480 bytes allocated
==113== 
==113== All heap blocks were freed -- no leaks are possible
==113== 
==113== For counts of detected and suppressed errors, rerun with: -v
==113== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - A basic StickerSheet works

- **Points**: 5 / 5





### ✓ - [1/1] - StickerSheet::changeMaxStickers() does not discard stickers when resized larger

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() does not discard original stickers when resized smaller

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() can increase the number of stickers on an image

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() discards stickers beyond the end of a smaller StickerSheet

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove the last sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove the first sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove all stickers

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns the sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns NULL for a non-existant sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns NULL for a removed sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::translate() translates a sticker's location

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::translate() returns false for a non-existant sticker

- **Points**: 1 / 1





### ✓ - [5/5] - A complex StickerSheet is correct

- **Points**: 5 / 5





### ✓ - [2/2] - StickerSheet's copy constructor makes an independent copy

- **Points**: 2 / 2





### ✓ - [2/2] - StickerSheet's assignment operator makes an independent copy

- **Points**: 2 / 2





### ✓ - [3/3] - StickerSheet doesn't have any memory errors

- **Points**: 3 / 3

```
==131== Memcheck, a memory error detector
==131== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==131== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==131== Command: ./test -r xml "StickerSheet\ doesn't\ have\ any\ memory\ errors"
==131== 
==131== 
==131== HEAP SUMMARY:
==131==     in use at exit: 0 bytes in 0 blocks
==131==   total heap usage: 3,445 allocs, 3,445 frees, 243,990,426 bytes allocated
==131== 
==131== All heap blocks were freed -- no leaks are possible
==131== 
==131== For counts of detected and suppressed errors, rerun with: -v
==131== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - myImage.png exists and contains stickers

- **Points**: 10 / 10





---