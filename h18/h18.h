/**
    @file h18.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H18_H_
#define H18_H_
#include <vector>
#include <string>

using pos_type = std::istream::pos_type; // type of stream position
struct Word
{
    std::string word;
    std::vector<pos_type> positions;
};

/**
    Reads any stream until end-of-file. Returns a vector of misspelled words,
    but not those words that have been excluded.
    @param in the stream to read from
    @param dictionary vector of string containing correct-spelled words.
    @param excluded vector of string containing words to ignore.
    @return a vector of misspelled words, along with their position in the
        original file.
*/
std::vector<Word> spellCheck(std::istream& in,
                    const std::vector<std::string>& dictionary,
                    const std::vector<std::string>& excluded);

#endif
