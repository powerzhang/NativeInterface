#ifndef BODYMARKDEMO_H
#define BODYMARKDEMO_H
#include<string>
using namespace std;

class BodyMarkBean
{
public:
    BodyMarkBean();
    BodyMarkBean(string filename,bool isDefault,int page,int row,int column);
    ~BodyMarkBean();

public:
    string filename;
    string text;
    bool isDefault;
    int page;
    int row;
    int column;
};

#endif // BODYMARKDEMO_H
