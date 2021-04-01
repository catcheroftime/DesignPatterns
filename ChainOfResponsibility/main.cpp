#include <leader.h>

#define SAFE_DELETE(p) if(p) { delete p; p=nullptr;}

int main()
{
    ProjectLeader *projectLeader = new ProjectLeader;
    projectLeader->askForLeave(2);

    projectLeader->askForLeave(5);

    GroupLeader *groupLeader = new GroupLeader;
    projectLeader->setSupLeader(groupLeader);
    projectLeader->askForLeave(5);

    projectLeader->askForLeave(10);

    SAFE_DELETE(groupLeader);
    SAFE_DELETE(projectLeader)
    return 0;
}
