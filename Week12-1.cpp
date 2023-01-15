#include <iostream>
using namespace std;
class HTMLElement
{
private:
    std::string tagName,content;
public:
  HTMLElement(string s)
  {
      tagName = s.substr(1,s.find('>') -1);
      s.erase(s.find('/')-1);
      content = s.substr(s.find('>') +1);
  }
  std::string getTagName()
  {
    return tagName;
  }
  std::string getContent()
  {
    return content;
  }
};
int main() {
  std::string str;
  getline(std::cin,str);
  HTMLElement html(str);
  std::cout<<html.getTagName()<<std::endl;
  std::cout<<html.getContent()<<std::endl;
  return 0;
}
