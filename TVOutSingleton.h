#ifndef TVOUTSINGLETON_H
#define TVOUTSINGLETON_H
#include <TVout.h>
#include <video_gen.h>
#include <fontALL.h>
class TVOutSingleton {
  public:
  	TVOutSingleton();
  	~TVOutSingleton();
  	static TVOutSingleton* getInstance();
  	TVout getTVOut();
  private:
  	static TVOutSingleton* m_sing;
  	TVout m_tv;
};
#endif

