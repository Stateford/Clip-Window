#pragma once

#ifdef CLIPWINDOW_EXPORTS  
#define CLIPWINDOW_API __declspec(dllexport)   
#else  
#define CLIPWINDOW_API __declspec(dllimport)   
#endif  

#include <Windows.h>
#include <shared_mutex>

namespace clipWindow
{
	// This class is exported from the MathLibrary.dll  
	class clipWindow
	{
	private:
		HWND _window;
		bool _isLive;
		void cursorLock();

		std::shared_mutex _mu;
	public:
		CLIPWINDOW_API clipWindow(HWND);
		CLIPWINDOW_API clipWindow(HANDLE);
		CLIPWINDOW_API void start();
		CLIPWINDOW_API void stop();
	};
}