class HTMLElementWithAttributes : public HTMLElement
{
public:
  HTMLElementWithAttributes(std::string str):HTMLElement(str)
  {
    for (int i=str.find('<');i<str.find(">");i++)
    {
      std::string key,value;
      if (str[i]==' ')
      {
        i++;
        while (str[i]!='=')
        {
          key+=str[i];
          i++;
        }
        i+=2;
        while (str[i]!='"')
        {
        value+=str[i];
        i++;
        }
      }
      //attributes.insert(std::pair<std::string,std::string>(key,value));
      attributes[key]=value;
      key.clear(),value.clear();
    }
  }
  std::string getTagName()
  {
    return tagName;
  }
  std::string getContent()
  {
    return content;
  }
  std::list<std::string> getAttributes()
  {
    std::list<std::string> kkey;
    for (std::map<std::string,std::string>::iterator it=attributes.begin();it!=attributes.end();it++)
      kkey.push_back(it->first);
    return kkey;
  }
  std::string operator[](std::string key)
  {
    return attributes[key];
  }
private:
  std::map<std::string,std::string> attributes;
};
int main()
{
  std::string str;
  getline(std::cin,str);
  HTMLElementWithAttributes html(str);
  std::cout << html.getTagName();
  std::list<std::string> key = html.getAttributes();
  for(std::string k : key)
    std::cout<<html[k]<<std::endl;
  return 0;
}
