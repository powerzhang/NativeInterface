#include "bodymarkdemo.h"

BodyMarkBean::BodyMarkBean()
{

}
BodyMarkBean::BodyMarkBean(string filename,bool isDefault,int page,int row,int column)
{
    this->filename = filename;
    this->isDefault = isDefault;
    this->page = page;
    this->row = row;
    this->column = column;
}
BodyMarkBean::~BodyMarkBean()
{

}


