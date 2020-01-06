#include "meme.h"
#include <ctime>

motomoto::meme::meme(int index, bool custom_meme)
{
	if (custom_meme)
	{
		meme_text = memes[index];
	}
	else
	{
		std::srand(time(NULL));
		int meme_index = std::rand() % memes.size();
		meme_text = memes[meme_index];
	}
}


motomoto::meme::~meme()
{
}

std::string motomoto::meme::get_meme()
{
	return meme_text;
}

bool motomoto::meme::gen_meme(int index, bool custom_meme)
{
	if (custom_meme)
	{
		meme_text = memes[index];
	}
	else
	{
		std::srand(time(NULL));
		int meme_index = std::rand() % memes.size();
		meme_text = memes[meme_index];
	}
	return false;
}
