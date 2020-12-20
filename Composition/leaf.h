#ifndef LEAF_H
#define LEAF_H

#include "component.h"
#include <iostream>

class File : public Component
{
public:
    File(std::string title) : Component(title) {}
    ~File() {}

    virtual void Show(int iDepth)  { std::cout << string(iDepth,'-') << m_title << std::endl; }
    virtual void Open() = 0;
};

class VideoFile : public File
{
public:
    VideoFile(std::string title) : File(title) {}
    ~VideoFile() { std::cout << __func__ << std::endl; }

    void Open() { std::cout << "视频文件使用 vlc 打开" << std::endl; }
};

class DocmFile : public File
{
public:
    DocmFile(std::string title) : File(title) {}
    ~DocmFile() { std::cout << __func__ << std::endl; }

    void Open() { std::cout << "文本文件使用 记事本 打开" << std::endl; }
};

class ImageFile : public File
{
public:
    ImageFile(std::string title) : File(title) {}
    ~ImageFile() { std::cout << __func__ << std::endl; }

    void Open() { std::cout << "图片文件使用 相片 打开" << std::endl; }
};

#endif // LEAF_H
