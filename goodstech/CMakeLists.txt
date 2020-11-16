#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(goodstech_public_header 
	include/alibabacloud/goodstech/GoodstechClient.h
	include/alibabacloud/goodstech/GoodstechExport.h )

set(goodstech_public_header_model 
	include/alibabacloud/goodstech/model/ClassifyCommodityRequest.h
	include/alibabacloud/goodstech/model/ClassifyCommodityResult.h
	include/alibabacloud/goodstech/model/RecognizeFurnitureAttributeRequest.h
	include/alibabacloud/goodstech/model/RecognizeFurnitureAttributeResult.h
	include/alibabacloud/goodstech/model/RecognizeFurnitureSpuRequest.h
	include/alibabacloud/goodstech/model/RecognizeFurnitureSpuResult.h )

set(goodstech_src 
	src/GoodstechClient.cc
	src/model/ClassifyCommodityRequest.cc
	src/model/ClassifyCommodityResult.cc
	src/model/RecognizeFurnitureAttributeRequest.cc
	src/model/RecognizeFurnitureAttributeResult.cc
	src/model/RecognizeFurnitureSpuRequest.cc
	src/model/RecognizeFurnitureSpuResult.cc )

add_library(goodstech ${LIB_TYPE}
	${goodstech_public_header}
	${goodstech_public_header_model}
	${goodstech_src})

set_target_properties(goodstech
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}goodstech
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(goodstech
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_GOODSTECH_LIBRARY)
endif()

target_include_directories(goodstech
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(goodstech
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(goodstech
		jsoncpp)
	target_include_directories(goodstech
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(goodstech
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(goodstech
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(goodstech
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(goodstech
		jsoncpp)
endif()

install(FILES ${goodstech_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/goodstech)
install(FILES ${goodstech_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/goodstech/model)
install(TARGETS goodstech
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)