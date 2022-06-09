#include <exception>
#include <string>
class DeckFileNotFound :public std::exception
{
  private:
  std::string errorMessage;
  public: 
  virtual ~DeckFileNotFound()override=default ;
  virtual const char* what()  const override 
  {
    return errorMessage.c_str();
  }
};


class DeckFileFormatError :public std::exception
{
  private:
  std::string errorMessage;
  public: 
  virtual ~ DeckFileFormatError()override=default ;
  virtual const char* what()  const override 
  {
    return errorMessage.c_str();
  }
};

class DeckFileInvalidSize :public std::exception
{
  private:
  std::string errorMessage;
  public: 
  virtual ~ DeckFileInvalidSize()override=default ;
  virtual const char* what()  const override 
  {
    return errorMessage.c_str();
  }
};