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

set(snsuapi_public_header 
	include/alibabacloud/snsuapi/SnsuapiClient.h
	include/alibabacloud/snsuapi/SnsuapiExport.h )

set(snsuapi_public_header_model 
	include/alibabacloud/snsuapi/model/BandOfferOrderRequest.h
	include/alibabacloud/snsuapi/model/BandOfferOrderResult.h
	include/alibabacloud/snsuapi/model/BandPrecheckRequest.h
	include/alibabacloud/snsuapi/model/BandPrecheckResult.h
	include/alibabacloud/snsuapi/model/BandStartSpeedUpRequest.h
	include/alibabacloud/snsuapi/model/BandStartSpeedUpResult.h
	include/alibabacloud/snsuapi/model/BandStatusQueryRequest.h
	include/alibabacloud/snsuapi/model/BandStatusQueryResult.h
	include/alibabacloud/snsuapi/model/BandStopSpeedUpRequest.h
	include/alibabacloud/snsuapi/model/BandStopSpeedUpResult.h
	include/alibabacloud/snsuapi/model/MobileStartSpeedUpRequest.h
	include/alibabacloud/snsuapi/model/MobileStartSpeedUpResult.h
	include/alibabacloud/snsuapi/model/MobileStatusQueryRequest.h
	include/alibabacloud/snsuapi/model/MobileStatusQueryResult.h
	include/alibabacloud/snsuapi/model/MobileStopSpeedUpRequest.h
	include/alibabacloud/snsuapi/model/MobileStopSpeedUpResult.h )

set(snsuapi_src 
	src/SnsuapiClient.cc
	src/model/BandOfferOrderRequest.cc
	src/model/BandOfferOrderResult.cc
	src/model/BandPrecheckRequest.cc
	src/model/BandPrecheckResult.cc
	src/model/BandStartSpeedUpRequest.cc
	src/model/BandStartSpeedUpResult.cc
	src/model/BandStatusQueryRequest.cc
	src/model/BandStatusQueryResult.cc
	src/model/BandStopSpeedUpRequest.cc
	src/model/BandStopSpeedUpResult.cc
	src/model/MobileStartSpeedUpRequest.cc
	src/model/MobileStartSpeedUpResult.cc
	src/model/MobileStatusQueryRequest.cc
	src/model/MobileStatusQueryResult.cc
	src/model/MobileStopSpeedUpRequest.cc
	src/model/MobileStopSpeedUpResult.cc )

add_library(snsuapi ${LIB_TYPE}
	${snsuapi_public_header}
	${snsuapi_public_header_model}
	${snsuapi_src})

set_target_properties(snsuapi
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}snsuapi
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(snsuapi
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SNSUAPI_LIBRARY)
endif()

target_include_directories(snsuapi
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(snsuapi
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(snsuapi
		jsoncpp)
	target_include_directories(snsuapi
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(snsuapi
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(snsuapi
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(snsuapi
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(snsuapi
		jsoncpp)
endif()

install(FILES ${snsuapi_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/snsuapi)
install(FILES ${snsuapi_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/snsuapi/model)
install(TARGETS snsuapi
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)