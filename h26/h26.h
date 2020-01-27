/**
    @file h26.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H26_H_
#define H26_H_
#include <iostream>
#include <memory>
const size_t INITIAL_CAPACITY = 2;

struct FlexArray
{
    size_t size_ = 0;
    std::unique_ptr<int[]> data_;
};
/**
 * Read integers from a stream into a FlexArray.
 * @param[in] in the stream to read from.
 * @param[out] the FlexArray to store the data in
 * @return a reference to the modified FlexArray
 * @post size_ will contain the number of elements
 * @post data_ will contain exactly size_ elements
 * @post in will be at end of file or a non-integer
 */
FlexArray& readData(std::istream& in, FlexArray& a);

/**
 * Return a string representation of a FlexArray.
 * @param a the array to represent.
 * @return a comma separated, brace delimited contents.
 */
std::string toString(const FlexArray& a);

inline std::ostream& operator<<(std::ostream& out, const FlexArray& a)
{
    out << toString(a);
    return out;
}

inline std::istream& operator>>(std::istream& in, FlexArray& a)
{
    readData(in, a);
    return in;
}
#endif
