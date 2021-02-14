#include "Header.h"
#include <vector>
void main()
{
	Theme* theme = new LightTheme();

	vector<webpage*>site;
	site.push_back(new homepage(theme));
	site.push_back(new about(theme));
	site.push_back(new careers(theme));

	for (auto el : site)
	{
		cout << el->getContent() << endl;
		delete el;
	}
}