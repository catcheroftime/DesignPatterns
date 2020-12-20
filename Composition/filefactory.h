#ifndef FILEFACTORY_H
#define FILEFACTORY_H

#include "leaf.h"

class FileFactory
{
public:
    static FileFactory& getInstance()
    {
        static FileFactory value;
        return value;
    }

    File * getFile(std::string type, std::string title)
    {
        if ( type == "video") {
            return new VideoFile(title);
        } else if ( type == "docm") {
            return new DocmFile(title);
        } else if ( type == "image") {
            return new ImageFile(title);
        } else {
            return nullptr;
        }
    }

private:
    FileFactory() = default;
    FileFactory(const FileFactory& other)=delete;
    FileFactory& operator=(const FileFactory&)=delete;
};

#endif // FILEFACTORY_H
