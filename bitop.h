#ifndef BITOP_H
#define BITOP_H

int bit_get(const unsigned char *bits, int pos); // gets the state of the bit at pos in buffer bits

void bit_set(unsigned char *bits, int pos, int state); //sets the state of the bit at pos, in buffer bits, to the value of state

void bitwise_xor(const unsigned char *bits1, const unsigned char *bits2, unsigned char *bitsx, int size); // xor of two buffers of the size_ and return the result in bitsx

void bit_rot_left(unsigned char *bits, int size, int count);


#endif // BITOP_H_INCLUDED
