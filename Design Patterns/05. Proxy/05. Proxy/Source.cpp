#include "Header.h"



SecureProxy::SecureProxy()
{
}


SecureProxy::~SecureProxy()
{
	delete door;
}

int main()
{
	Door* door = new Door();

	SecureProxy* proxy = new SecureProxy(door);

	proxy->close();

	proxy->open("user", "456");
	proxy->open("Alex", "890");
	proxy->close();
	proxy->open("Alex", "890");
	system("pause");
	return 0;
}