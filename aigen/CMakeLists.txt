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

set(aigen_public_header 
	include/alibabacloud/aigen/AigenClient.h
	include/alibabacloud/aigen/AigenExport.h )

set(aigen_public_header_model 
	include/alibabacloud/aigen/model/GenerateCosplayImageRequest.h
	include/alibabacloud/aigen/model/GenerateCosplayImageResult.h
	include/alibabacloud/aigen/model/GenerateTextDeformationRequest.h
	include/alibabacloud/aigen/model/GenerateTextDeformationResult.h
	include/alibabacloud/aigen/model/GenerateTextTextureRequest.h
	include/alibabacloud/aigen/model/GenerateTextTextureResult.h
	include/alibabacloud/aigen/model/InteractiveFullSegmentationRequest.h
	include/alibabacloud/aigen/model/InteractiveFullSegmentationResult.h
	include/alibabacloud/aigen/model/InteractiveScribbleSegmentationRequest.h
	include/alibabacloud/aigen/model/InteractiveScribbleSegmentationResult.h )

set(aigen_src 
	src/AigenClient.cc
	src/model/GenerateCosplayImageRequest.cc
	src/model/GenerateCosplayImageResult.cc
	src/model/GenerateTextDeformationRequest.cc
	src/model/GenerateTextDeformationResult.cc
	src/model/GenerateTextTextureRequest.cc
	src/model/GenerateTextTextureResult.cc
	src/model/InteractiveFullSegmentationRequest.cc
	src/model/InteractiveFullSegmentationResult.cc
	src/model/InteractiveScribbleSegmentationRequest.cc
	src/model/InteractiveScribbleSegmentationResult.cc )

add_library(aigen ${LIB_TYPE}
	${aigen_public_header}
	${aigen_public_header_model}
	${aigen_src})

set_target_properties(aigen
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}aigen
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(aigen
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_AIGEN_LIBRARY)
endif()

target_include_directories(aigen
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(aigen
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(aigen
		jsoncpp)
	target_include_directories(aigen
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(aigen
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(aigen
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(aigen
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(aigen
		jsoncpp)
endif()

install(FILES ${aigen_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aigen)
install(FILES ${aigen_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aigen/model)
install(TARGETS aigen
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)