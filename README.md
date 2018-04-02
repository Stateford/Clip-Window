# Clip Window
-------------

Library to clip your mouse from leaving the specified window until stopped. Will only lock while the mouse while the window is active. Spawns in a thread so it's non-blocking and uses very low resources. Uses only the `STL`

### EXAMPLE
----------------

| METHOD  | TYPE | DESCRIPTION |
|:--------:|:-----------:|:----------|
| `clipWindow(HWND)` | `Constructor` | Initializes the class with the window you want watched |
| `.start()` | `void` | Starts locking to window when active |
| `.stop()`    | `void`  | Stops the window from being locked and stops the thread |

```cpp
#include <iostream>

#include <clipWindow.h>

int main()
{
    HWND handle = FindWindow(NULL, "New Text Document (3) - Notepad");
    clipWindow::clipWindow clip(handle);
    clip.start();
    while(true)
    {
        std::cout << "New line" << std::endl;
        Sleep(100);
    }

    return 0;
}
```

![resources](blob/res.png)
