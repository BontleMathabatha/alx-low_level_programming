Copy code
#ifndef MAIN_H
#define MAIN_H

/**
 * Converts a binary string to an unsigned integer.
 * @param b Binary string to convert.
 * @return Converted unsigned integer.
 */
unsigned int binary_to_uint(const char *b);

/**
 * Prints the binary representation of a given unsigned long integer.
 * @param n Unsigned long integer to print in binary.
 */
void print_binary(unsigned long int n);

/**
 * Gets the value of a specific bit in an unsigned long integer.
 * @param n Unsigned long integer to extract the bit from.
 * @param index Index of the bit to retrieve.
 * @return Value of the specified bit (0 or 1).
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * Sets a specific bit in an unsigned long integer to 1.
 * @param n Pointer to the unsigned long integer.
 * @param index Index of the bit to set.
 * @return 1 if successful, -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * Clears a specific bit in an unsigned long integer (sets it to 0).
 * @param n Pointer to the unsigned long integer.
 * @param index Index of the bit to clear.
 * @return 1 if successful, -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * Calculates the number of bits that need to be flipped in order
 * to convert one unsigned long integer to another.
 * @param n First unsigned long integer.
 * @param m Second unsigned long integer.
 * @return Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * Converts a string to an integer.
 * @param s String to convert.
 * @return Converted integer.
 */
int _atoi(const char *s);

/**
 * Outputs a single character.
 * @param c Character to output.
 * @return On success, returns the character. On error, returns -1.
 */
int _putchar(char c);

/**
 * Determines the endianness of the system.
 * @return 0 for big-endian, 1 for little-endian.
 */
int get_endianness(void);

#endif
