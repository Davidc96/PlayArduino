#include "TVOutSingleton.h"
TVOutSingleton* TVOutSingleton::m_sing = NULL;
TVOutSingleton::TVOutSingleton(){
	//TV BEGIN
  m_tv.begin(PAL, 120, 96);
  m_tv.select_font(font6x8);
  
}
TVOutSingleton::~TVOutSingleton(){}
static TVOutSingleton* TVOutSingleton::getInstance()
{
	TVOutSingleton::m_sing;
	if(!m_sing)
	{
		m_sing = new TVOutSingleton();
	}
	return m_sing;
}
TVout TVOutSingleton::getTVOut()
{
	return m_tv;
}

