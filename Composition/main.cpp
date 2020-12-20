#include <iostream>

using namespace std;

#include "component.h"
#include "composite.h"
#include "filefactory.h"

#define SAFE_DELETE(x) {if(x){ delete x; x= nullptr;}}

int main()
{
    Component *root_folder = new Folder("Demo");

    Component *video_folder = new Folder("视频");
    Component *video =FileFactory::getInstance().getFile("video", "xiamu.mp4");
    video_folder->Add(video);

    Component *image_folder = new Folder("图片");
    Component *image = FileFactory::getInstance().getFile("image", "function.png");
    image_folder->Add(image);

    Component *docm_folder = new Folder("文档");
    Component *docm = FileFactory::getInstance().getFile("docm", "组成模式.md");
    docm_folder->Add(docm);

    root_folder->Add(video_folder);
    root_folder->Add(image_folder);
    root_folder->Add(docm_folder);

    std::cout << "展示树结构:"<< std::endl;
    root_folder->Show();

    std::cout << string(20, '-')<< std::endl;
    std::cout << "依次打开文件:"<< std::endl;
    video->Open();
    image->Open();
    docm->Open();

    std::cout << string(20, '-')<< std::endl;
    std::cout << "展示文件夹下的文件名称:"<< std::endl;
    video_folder->Open();
    image_folder->Open();
    docm_folder->Open();

    std::cout << string(20, '-')<< std::endl;
    std::cout << "析构："<< std::endl;
    SAFE_DELETE(root_folder);

    return 0;
}
