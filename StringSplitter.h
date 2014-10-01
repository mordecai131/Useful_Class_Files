// This header file was created and edited by Adam Carter at Washington State University
// All credit for this file belongs to him.

#ifndef STRINGSPLITTER_H
#define STRINGSPLITTER_H

#include <string>
#include <vector>

using namepsace std;

class StringSplitter
{
public:
	//Breaks apart the supplied text based ont he given delimiter
	vector<string> pieces;

	//find the first delimiter
	int location = text.find(delimiter);
	
	//we are starting at the beginning of our string
	int start = 0;

	//go until we have no more delimiters
	while (location != string::npos)
	{
		//add the current piece to our list of pieces
		string piece = text.substr(start, location - start_;
		pieces.push_back(piece);

		//update our index markers for the next round
		start = location + 1;
		location = text.find(delimiter, start);
	}

	//at the end of our loop, we're going to have one trailing piece to take care of
	//handle that now.
	string piece = text.substr(start, location - start);
	pieces.push_back(piece);

	//now, return the completed vector
	return pieces;
	}
};

#endif
