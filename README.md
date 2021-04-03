C++ Crash Course
===

This project is simply my code and development work based on the book _C++ Crash Course_ by Josh Lospinoso, (ISBN:  978-1-59327-888-5), published by No Starch Press.

c_cpp_properties.json
===
Since we don't commit things like editor configs, here is the editor config I'm using to properly setup my include paths.  In the near future this may need adjustment.

```json
{
    "configurations": [
        {
            "name": "Mac",
            "includePath": [
                "${workspaceFolder}/**",
                "/Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/usr/include",
                "/Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/usr/include/i386",
                "/Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/usr/include/machine",
                "/Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/System/Library/Frameworks/Kernel.framework/Versions/A",
                "/Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/System/Library/Frameworks/Kernel.framework/Versions/A/Headers/i386",
                "/Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/System/Library/Frameworks/Kernel.framework/Versions/A/Headers/machine"
            ],
            "defines": [],
            "macFrameworkPath": [
                "/Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/System/Library/Frameworks"
            ],
            "compilerPath": "/usr/bin/clang++",
            "cStandard": "c11",
            "cppStandard": "c++11",
            "intelliSenseMode": "macos-clang-x64",
            "compilerArgs": [
                "-std=c++11 -stdlib=libc++"
            ]
        }
    ],
    "version": 4
}
```

Makefiles
===

While not a requirement maybe, a Makefile is a nice way to tell everyone, including your computer, how this thing was linked, assembled, and compiled in the first place.



