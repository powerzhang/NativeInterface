#include "bodymarkparser.h"
#include "TinyXml2/tinyxml2.h"
#include "LogUtils.h"

//const char* xmlPath = "C:\\Users\\qustzj\\Documents\\TinyXml2Test\\TinyXml2Test\\Body\ Mark\\ABD.xml";
const char* xmlPath = "mnt/user/0/primary/ABD.xml";
const char* savePath = "mnt/user/0/primary/ABD1.xml";

BodyMarkParser::BodyMarkParser()
{

}
void BodyMarkParser::read(const char* filePath,vector<BodyMarkBean> &bodymarkBeanList){
    LOGD("NativeInterface filePath %s",filePath);

         XMLDocument doc;
         if(doc.LoadFile(filePath)!=0)
         {
             LOGD("NativeInterface %s,%d","load xml file failed",doc.LoadFile(filePath));
             return ;
         }

        XMLElement* preset = doc.RootElement();
        XMLElement *bodymark = preset->FirstChildElement("bodymark");
        LOGD("NativeInterface %s","load bodymark xml file success");
        XMLElement *element = bodymark->FirstChildElement("element");
        while(element){
            string text = element->GetText();
           const char* filename = element->Attribute("filename");
           bool isDefault = element->BoolAttribute("default");
           int page = element->IntAttribute("page");
           int row = element->IntAttribute("row");
           int column = element->IntAttribute("column");
            BodyMarkBean bodymarkbean;
            bodymarkbean.text = text;
            bodymarkbean.filename = filename;
            bodymarkbean.isDefault = isDefault;
            bodymarkbean.page = page;
            bodymarkbean.row = row;
            bodymarkbean.column = column;
            bodymarkBeanList.push_back(bodymarkbean);

            element = element->NextSiblingElement();
        }
}
void BodyMarkParser::write(const char* filePath,vector<BodyMarkBean>& bodymarkBeanList){
    XMLDocument doc;

    XMLElement* root = doc.NewElement( "preset" );
    doc.InsertEndChild( root );
    XMLElement* bodymarkElement = doc.NewElement( "bodymark" );

    for(BodyMarkBean bodyMarkBean : bodymarkBeanList){
        XMLElement* element = doc.NewElement( "element" );

        element->SetText(bodyMarkBean.text.c_str());
        element->SetAttribute("filename",bodyMarkBean.filename.c_str());
        element->SetAttribute("default",bodyMarkBean.isDefault);
        element->SetAttribute("page",bodyMarkBean.page);
        element->SetAttribute("row",bodyMarkBean.row);
        element->SetAttribute("column",bodyMarkBean.column);
        bodymarkElement->InsertEndChild(element);
    }

    root->InsertEndChild(bodymarkElement);
    XMLError xx = doc.SaveFile( filePath );
    LOGD("NativeInterface xx : %d",xx);
}
