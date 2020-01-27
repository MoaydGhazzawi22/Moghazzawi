#ifndef H09_H
#define H09_H

#include <string>
/**
 * Converts an integer to its equivalent Roman digit.
 * @param n value of this digit
 * @param ones Roman symbol for ones
 * @param fives Roman symbol for ones
 * @param tens Roman symbol for tens
 * @return the Roman digit as a string.
 */
std::string digit(int n, const std::string& symbols);

/**
 * Converts an Arabic number to its Roman equivalent.
 * @param n the number to convert.
 * @return a string reprenting the Roman numeral.
 *
 * @pre the number must be a positive number in range.
 * @post if the number cannot be converted it return an error message
 */
std::string toRoman(int n);

/**
 * Converts individual decimal digit to Roman.
 * These are inline functions (already written.)
 */
inline string ones(int n) { return digit(n, "IVX"); }
inline string tens(int n) { return digit(n, "XLC"); }
inline string hundreds(int n) { return digit(n, "CDM"); }

#endif