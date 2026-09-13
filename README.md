# HomeDigitalCenter
## Qt C++ 离线家庭数字中心设计规划


版本:
V1.0


---

# 1. 项目定位

# 2. 设计目标

# 3. 系统总体架构

# 4. Qt技术路线

# 5. 软件模块设计

## Core核心模块

## Media媒体模块

## Book阅读模块

## Music音乐模块

## Photo图片模块

## TTS朗读模块


# 6. 项目目录结构

# 7. Git仓库整合规划


homejellyfin
      |
      ↓
VideoEngine


Book-readest
      |
      ↓
BookEngine


homeAPlayer
      |
      ↓
MusicEngine


jellyfin-ffmpeg
      |
      ↓
FFmpeg Engine



# 8. Qt工程结构


CMakeLists.txt

src/

include/

modules/

plugins/

resources/


# 9. 核心类设计


ApplicationManager

ModuleManager

LibraryScanner

MediaDatabase

ResourceManager


# 10. 数据库设计(SQLite)


Media

Movie

Music

Book

Photo

History


# 11. 文件智能识别系统


视频:

mp4
mkv


音乐:

mp3


书籍:

epub
pdf
docx
odt
txt


图片:

jpg
png
webp


# 12. 本地封面系统


poster.jpg

cover.jpg

folder.jpg


自动生成缩略图


# 13. 模块动态加载设计


启动:

Core


选择:

加载模块


退出:

释放模块



# 14. 视频播放设计


1080P

720P

360P


FFmpeg

硬解支持


# 15. 阅读系统设计


EPUB

PDF

DOCX

ODT

TXT


# 16. 音乐系统设计


MP3

播放列表

标签读取


# 17. 图片系统设计


缩略图

浏览

幻灯片


# 18. TTS语音系统


离线调用

按需启动


# 19. 资源管理策略


待机:

CPU <1%

RAM 200-500MB


播放:

按需增加


# 20. UI设计


Qt Widgets / QML


首页

影视

音乐

图书

图片


# 21. 编译环境


Qt6

CMake

MSVC


# 22. 发布结构


HomeDigitalCenter.exe

dll

ffmpeg

data

library


# 23. 开发路线


Phase 1

核心框架


Phase 2

媒体


Phase 3

阅读


Phase 4

智能化


# 24. 长期扩展


AI搜索

OCR

本地大模型

知识库


