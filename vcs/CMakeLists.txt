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

set(vcs_public_header 
	include/alibabacloud/vcs/VcsClient.h
	include/alibabacloud/vcs/VcsExport.h )

set(vcs_public_header_model 
	include/alibabacloud/vcs/model/AddDeviceRequest.h
	include/alibabacloud/vcs/model/AddDeviceResult.h
	include/alibabacloud/vcs/model/CreateCorpRequest.h
	include/alibabacloud/vcs/model/CreateCorpResult.h
	include/alibabacloud/vcs/model/DeleteDeviceRequest.h
	include/alibabacloud/vcs/model/DeleteDeviceResult.h
	include/alibabacloud/vcs/model/GetDeviceLiveUrlRequest.h
	include/alibabacloud/vcs/model/GetDeviceLiveUrlResult.h
	include/alibabacloud/vcs/model/GetInventoryRequest.h
	include/alibabacloud/vcs/model/GetInventoryResult.h
	include/alibabacloud/vcs/model/ListCorpsRequest.h
	include/alibabacloud/vcs/model/ListCorpsResult.h
	include/alibabacloud/vcs/model/ListDevicesRequest.h
	include/alibabacloud/vcs/model/ListDevicesResult.h
	include/alibabacloud/vcs/model/RecognizeImageRequest.h
	include/alibabacloud/vcs/model/RecognizeImageResult.h
	include/alibabacloud/vcs/model/SearchFaceRequest.h
	include/alibabacloud/vcs/model/SearchFaceResult.h
	include/alibabacloud/vcs/model/UpdateCorpRequest.h
	include/alibabacloud/vcs/model/UpdateCorpResult.h
	include/alibabacloud/vcs/model/UpdateDeviceRequest.h
	include/alibabacloud/vcs/model/UpdateDeviceResult.h )

set(vcs_src 
	src/VcsClient.cc
	src/model/AddDeviceRequest.cc
	src/model/AddDeviceResult.cc
	src/model/CreateCorpRequest.cc
	src/model/CreateCorpResult.cc
	src/model/DeleteDeviceRequest.cc
	src/model/DeleteDeviceResult.cc
	src/model/GetDeviceLiveUrlRequest.cc
	src/model/GetDeviceLiveUrlResult.cc
	src/model/GetInventoryRequest.cc
	src/model/GetInventoryResult.cc
	src/model/ListCorpsRequest.cc
	src/model/ListCorpsResult.cc
	src/model/ListDevicesRequest.cc
	src/model/ListDevicesResult.cc
	src/model/RecognizeImageRequest.cc
	src/model/RecognizeImageResult.cc
	src/model/SearchFaceRequest.cc
	src/model/SearchFaceResult.cc
	src/model/UpdateCorpRequest.cc
	src/model/UpdateCorpResult.cc
	src/model/UpdateDeviceRequest.cc
	src/model/UpdateDeviceResult.cc )

add_library(vcs ${LIB_TYPE}
	${vcs_public_header}
	${vcs_public_header_model}
	${vcs_src})

set_target_properties(vcs
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}vcs
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(vcs
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_VCS_LIBRARY)
endif()

target_include_directories(vcs
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(vcs
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(vcs
		jsoncpp)
	target_include_directories(vcs
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(vcs
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(vcs
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(vcs
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(vcs
		jsoncpp)
endif()

install(FILES ${vcs_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/vcs)
install(FILES ${vcs_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/vcs/model)
install(TARGETS vcs
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)