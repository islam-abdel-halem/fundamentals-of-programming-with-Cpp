#include <string>

unsigned int strCount(const std::string& word, char letter){
  int count =0;
  for(int i=0;i < size(word);i++){
    if(word[i]==letter)
      count++;
  }
  return count; 
}