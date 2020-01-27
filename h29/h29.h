/**
    @file h29.h
    @author Your name here
    @version Your information here
*/
#ifndef H29_H_
#define H29_H_
#include <vector>
#include <string>
#include <cassert>

using UC = unsigned char;
struct Pixel {UC red=0, green=0, blue=0, alpha=255;};
const Pixel GRAY{128, 128, 128, 255};
const Pixel TRANSPARENT{0, 0, 0, 0};

class Image
{
public:
    Image() = default;
    explicit Image(const std::string& path);
    Image(unsigned width, unsigned height);

    unsigned width() const;
    unsigned height() const;
    unsigned size() const;

    Pixel* begin();
    Pixel* end();

    void fill(const Pixel& color);

    bool load(const std::string& path);
    bool save(const std::string& path);
private:
    unsigned m_width{0}, m_height{0};
    vector<Pixel> m_pixels;
};

// Functions from stb_image and stb_image_write
// These are C functions
extern "C" {
unsigned char* stbi_load(const char* fileName,
    int* width, int* height, int* bitsPerChannel,
    int desiredBpp=4);

 int stbi_write_png(const char* fName, int width, int height,
    int comp, const void *data, int stride);
 int stbi_write_bmp(const char* fName, int width, int height,
    int comp, const void *data);
 int stbi_write_jpg(const char* fName, int width, int height,
    int comp, const void *data, int quality);

 void stbi_image_free (void *);
};

#endif
