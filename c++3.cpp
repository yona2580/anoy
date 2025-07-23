#include <iostream>
using namespace std;

class vehicle{
	protected:
		int speed;
		public:
			void setspeed(int s) {
				speed = s;
			}
			void getspeed(){
				cin>>speed;
				cout<<speed;
			}
			
};
class bike : public vehicle {
	public:
		void speed()   {
			cout<<"speed"<<endl;
		}
};
int main(){
	bike b;
	b.speed();
	return 0;
}