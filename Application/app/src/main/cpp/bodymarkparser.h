#ifndef BODYMARKPARSER_H
#define BODYMARKPARSER_H
#include<iostream>
#include <iterator>
#include<vector>
#include "bodymarkdemo.h"
#include "TinyXml2/tinyxml2.h"

using namespace tinyxml2;
using namespace std;

extern const char* xmlPath ;
extern const char* savePath ;

class BodyMarkParser
{
public:
    BodyMarkParser();
    void read(const char* filePath,vector<BodyMarkBean>& bodymarkBeanList);
    void write(const char* filePath,vector<BodyMarkBean>& bodymarkBeanList);
};

#endif // BODYMARKPARSER_H
