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
	include/alibabacloud/vcs/model/AddMonitorRequest.h
	include/alibabacloud/vcs/model/AddMonitorResult.h
	include/alibabacloud/vcs/model/CreateCorpRequest.h
	include/alibabacloud/vcs/model/CreateCorpResult.h
	include/alibabacloud/vcs/model/DeleteDeviceRequest.h
	include/alibabacloud/vcs/model/DeleteDeviceResult.h
	include/alibabacloud/vcs/model/DeleteRecordsRequest.h
	include/alibabacloud/vcs/model/DeleteRecordsResult.h
	include/alibabacloud/vcs/model/GetBodyOptionsRequest.h
	include/alibabacloud/vcs/model/GetBodyOptionsResult.h
	include/alibabacloud/vcs/model/GetDeviceLiveUrlRequest.h
	include/alibabacloud/vcs/model/GetDeviceLiveUrlResult.h
	include/alibabacloud/vcs/model/GetDeviceVideoUrlRequest.h
	include/alibabacloud/vcs/model/GetDeviceVideoUrlResult.h
	include/alibabacloud/vcs/model/GetFaceOptionsRequest.h
	include/alibabacloud/vcs/model/GetFaceOptionsResult.h
	include/alibabacloud/vcs/model/GetInventoryRequest.h
	include/alibabacloud/vcs/model/GetInventoryResult.h
	include/alibabacloud/vcs/model/GetMonitorResultRequest.h
	include/alibabacloud/vcs/model/GetMonitorResultResult.h
	include/alibabacloud/vcs/model/GetPersonDetailRequest.h
	include/alibabacloud/vcs/model/GetPersonDetailResult.h
	include/alibabacloud/vcs/model/ListCorpsRequest.h
	include/alibabacloud/vcs/model/ListCorpsResult.h
	include/alibabacloud/vcs/model/ListDevicesRequest.h
	include/alibabacloud/vcs/model/ListDevicesResult.h
	include/alibabacloud/vcs/model/ListPersonsRequest.h
	include/alibabacloud/vcs/model/ListPersonsResult.h
	include/alibabacloud/vcs/model/RecognizeFaceQualityRequest.h
	include/alibabacloud/vcs/model/RecognizeFaceQualityResult.h
	include/alibabacloud/vcs/model/RecognizeImageRequest.h
	include/alibabacloud/vcs/model/RecognizeImageResult.h
	include/alibabacloud/vcs/model/SearchBodyRequest.h
	include/alibabacloud/vcs/model/SearchBodyResult.h
	include/alibabacloud/vcs/model/SearchFaceRequest.h
	include/alibabacloud/vcs/model/SearchFaceResult.h
	include/alibabacloud/vcs/model/StopMonitorRequest.h
	include/alibabacloud/vcs/model/StopMonitorResult.h
	include/alibabacloud/vcs/model/UpdateCorpRequest.h
	include/alibabacloud/vcs/model/UpdateCorpResult.h
	include/alibabacloud/vcs/model/UpdateDeviceRequest.h
	include/alibabacloud/vcs/model/UpdateDeviceResult.h
	include/alibabacloud/vcs/model/UpdateMonitorRequest.h
	include/alibabacloud/vcs/model/UpdateMonitorResult.h )

set(vcs_src 
	src/VcsClient.cc
	src/model/AddDeviceRequest.cc
	src/model/AddDeviceResult.cc
	src/model/AddMonitorRequest.cc
	src/model/AddMonitorResult.cc
	src/model/CreateCorpRequest.cc
	src/model/CreateCorpResult.cc
	src/model/DeleteDeviceRequest.cc
	src/model/DeleteDeviceResult.cc
	src/model/DeleteRecordsRequest.cc
	src/model/DeleteRecordsResult.cc
	src/model/GetBodyOptionsRequest.cc
	src/model/GetBodyOptionsResult.cc
	src/model/GetDeviceLiveUrlRequest.cc
	src/model/GetDeviceLiveUrlResult.cc
	src/model/GetDeviceVideoUrlRequest.cc
	src/model/GetDeviceVideoUrlResult.cc
	src/model/GetFaceOptionsRequest.cc
	src/model/GetFaceOptionsResult.cc
	src/model/GetInventoryRequest.cc
	src/model/GetInventoryResult.cc
	src/model/GetMonitorResultRequest.cc
	src/model/GetMonitorResultResult.cc
	src/model/GetPersonDetailRequest.cc
	src/model/GetPersonDetailResult.cc
	src/model/ListCorpsRequest.cc
	src/model/ListCorpsResult.cc
	src/model/ListDevicesRequest.cc
	src/model/ListDevicesResult.cc
	src/model/ListPersonsRequest.cc
	src/model/ListPersonsResult.cc
	src/model/RecognizeFaceQualityRequest.cc
	src/model/RecognizeFaceQualityResult.cc
	src/model/RecognizeImageRequest.cc
	src/model/RecognizeImageResult.cc
	src/model/SearchBodyRequest.cc
	src/model/SearchBodyResult.cc
	src/model/SearchFaceRequest.cc
	src/model/SearchFaceResult.cc
	src/model/StopMonitorRequest.cc
	src/model/StopMonitorResult.cc
	src/model/UpdateCorpRequest.cc
	src/model/UpdateCorpResult.cc
	src/model/UpdateDeviceRequest.cc
	src/model/UpdateDeviceResult.cc
	src/model/UpdateMonitorRequest.cc
	src/model/UpdateMonitorResult.cc )

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