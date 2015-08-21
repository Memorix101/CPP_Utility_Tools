#pragma once
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

class Console{

public:

	static int Write(std::string s)
	{
		std::cout << s;
		return 0;
	}


	static int WriteLine(std::string l)
	{
		std::cout << l + "\n";
		return 0;
	}

	template <typename TS>

	static std::string tostring(TS i)
	{
		return std::to_string(i);

	}
	
	template <typename TS>

	static std::string Read(TS i)
	{
		cin >> i;
		return
	}


};



