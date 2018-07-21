#cmake版本要求
cmake_minimum_required (VERSION 2.8)

#project name
project (cvtest)

#src目录
AUX_SOURCE_DIRECTORY (src DIR_SRCS)

#环境变量
SET (MAINSRC ${DIR_SRCS})

find_package(OpenCV REQUIRED)

#生成可执行文件
ADD_EXECUTABLE (main ${MAINSRC})

set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)

#链接库文件
target_link_libraries(main ${OpenCV_LIBS})