// Animation data for Trinket/Gemma + LED matrix backpack jewelry.
// Edit this file to change the animation; it's unlikely you'll need
// to edit the source code.

#define REPS 250 // Number of times to repeat the animation loop (1-255)

const uint8_t PROGMEM anim[] = {

  // Animation bitmaps.  Each frame of animation MUST contain
  // 8 lines of graphics data (there is no error checking for
  // length).  Each line should be prefixed with the letter 'B',
  // followed by exactly 8 binary digits (0 or 1), no more,
  // no less (again, no error checking).  '0' represents an
  // 'off' pixel, '1' an 'on' pixel.  End line with a comma.
  B00011000, // This is the first frame for alien #1
  B00100100, // If you squint you can kind of see the
  B01011010, // image in the 0's and 1's.
  B10011001,
  B10100101,
  B01011010,
  B00100100,
  B00011000,
  // The 9th line (required) is the time to display this frame,
  // in 1/100ths of a second (e.g. 100 = 1 sec, 25 = 1/4 sec,
  // etc.).  Range is 0 (no delay) to 255 (2.55 seconds).  If
  // longer delays are needed, make duplicate frames.
  100, // 0.25 seconds

  B00011000, // This is the second frame for alien #1
  B00100100,
  B01001010,
  B10111001,
  B10100101,
  B01011010,
  B00100100,
  B00011000,
  100, // 0.25 second delay

  // Frames 3 & 4 for alien #1 are duplicates of frames 1 & 2.
  // Rather than list them 'the tall way' again, the lines are merged here...
  B00011000, // This is the second frame for alien #1
  B00100100,
  B01000010,
  B10111101,
  B10000001,
  B01011010,
  B00100100,
  B00011000, 
  100,
  
  B00011000, // This is the second frame for alien #1
  B00100100,
  B01000010,
  B10111101,
  B10011001,
  B01100110,
  B00100100,
  B00011000, 
  100,

  B00011000, // This is the second frame for alien #1
  B00100100,
  B01100110,
  B10011001,
  B10011001,
  B01100110,
  B00100100,
  B00011000,
  100, // 0.25 second delay

  B00011000, // This is the second frame for alien #1
  B00100100,
  B01110010,
  B10111101,
  B10110101,
  B01111110,
  B00100100,
  B00011000,
  100,

  // Frames 3 & 4 for alien #2 are duplicates of frames 1 & 2
  B00000000, // This is the second frame for alien #1
  B00011000,
  B00100100,
  B01010010,
  B01011010,
  B00100100,
  B00011000,
  B00000000,
  100,
  
  B00000000, // This is the second frame for alien #1
  B00000000,
  B00000000,
  B00011000,
  B00011000,
  B00000000,
  B00000000,
  B00000000, 
  100,

};
