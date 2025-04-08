# External ImGui Overlay
A basic but easy to modify base for any external ImGui projects. Does not inject or hook functions, but does by default create handle to target process. Feel free to submit issues or pull requests. I've tried my best to keep the code relatively clean and organized, which I feel like I've done quite a decent job at. Happy coding :)

## How do I use this code?
1. Either clone the repository using Git, or download using the green button on the top right
2. Once downloaded, open the .sln file using [Visual Studio 2022](https://visualstudio.microsoft.com/vs/) (2019 and below should work, but I use 2022)
3. Make sure build mode is set to **Release and x64**!
4. Press Ctrl + Shift + B to build the project
5. Navigate to `"C:\your\path\here\External ImGui Base\x64\Release\"`, where you will find the executable

## Detections
Though this application doesn't inject into the target or hook any functions in the target, it does create a handle to the target process, as stated before. Be careful, because any decent anticheat will strip said handle, or ban you for it. If this is a security concern for you, either implement a kernel driver (fairly simple for any decent programmer) or modify the program so it no longer creates a handle.

## FAQ
#### I'm getting errors when building the project!
Make sure you're compiling in Release and x64. If the errors persist, create an Issue on the repository.
#### I can't see the menu over my target process!
Make sure the target process is not running in Fullscreen, but rather Windowed or Windowed Borderless (or anything of the sort)
#### I have a question which is not listed here!
Create an issue on the repository.

## License
The MIT License (MIT)

Copyright (c) 2025 43apple

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
