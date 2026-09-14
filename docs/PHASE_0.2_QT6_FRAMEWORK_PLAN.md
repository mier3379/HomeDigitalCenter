# HomeDigitalCenter Phase 0.2 - Qt6 C++ Framework Initialization

## Goal

建立 HomeDigitalCenter 本地 EXE 主框架，基于 Qt6 C++，整合 Jellyfin、APlayer、Readest、FFmpeg 模块。

## Architecture

```
HomeDigitalCenter.exe
        |
        +-- Qt6 UI Layer
        |
        +-- Core Framework
        |       |
        |       +-- Plugin Manager
        |       +-- Config Manager
        |       +-- Media Engine
        |
        +-- Modules
                |
                +-- Jellyfin Client
                +-- APlayer Module
                +-- Readest Module
                +-- FFmpeg Engine
```

## Phase 0.2 Tasks

- [ ] Create Qt6 CMake project
- [ ] Initialize application bootstrap
- [ ] Add Core Framework library
- [ ] Add module interface definition
- [ ] Add configuration system
- [ ] Prepare plugin architecture
- [ ] Prepare Windows EXE packaging

## Directory Proposal

```
HomeDigitalCenter/
├── app/
├── core/
├── modules/
│   ├── jellyfin/
│   ├── aplayer/
│   ├── readest/
│   └── ffmpeg/
├── resources/
├── docs/
└── CMakeLists.txt
```

## Next Milestone

Phase 0.2.1:
Qt6 application skeleton + CMake build system.
