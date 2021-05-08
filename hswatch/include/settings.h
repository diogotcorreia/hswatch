#include "app.h"
#include "tools.h"

class Settings: public App {

	public:

		void start();
		void display();
		void but_up_left();
		void but_up_right();
		void but_down_left();

		Settings(String,String,const unsigned char*);

	private:

		enum State {led, buzzer, vibrator, about} state;
};