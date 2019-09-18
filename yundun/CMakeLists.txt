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

set(yundun_public_header 
	include/alibabacloud/yundun/YundunClient.h
	include/alibabacloud/yundun/YundunExport.h )

set(yundun_public_header_model 
	include/alibabacloud/yundun/model/AllMalwareNumRequest.h
	include/alibabacloud/yundun/model/AllMalwareNumResult.h
	include/alibabacloud/yundun/model/CurrentDdosAttackNumRequest.h
	include/alibabacloud/yundun/model/CurrentDdosAttackNumResult.h
	include/alibabacloud/yundun/model/TodayAegisOnlineRateRequest.h
	include/alibabacloud/yundun/model/TodayAegisOnlineRateResult.h
	include/alibabacloud/yundun/model/TodayAllkbpsRequest.h
	include/alibabacloud/yundun/model/TodayAllkbpsResult.h
	include/alibabacloud/yundun/model/TodayAllppsRequest.h
	include/alibabacloud/yundun/model/TodayAllppsResult.h
	include/alibabacloud/yundun/model/TodayBackdoorRequest.h
	include/alibabacloud/yundun/model/TodayBackdoorResult.h
	include/alibabacloud/yundun/model/TodayCrackInterceptRequest.h
	include/alibabacloud/yundun/model/TodayCrackInterceptResult.h
	include/alibabacloud/yundun/model/TodayMalwareNumRequest.h
	include/alibabacloud/yundun/model/TodayMalwareNumResult.h
	include/alibabacloud/yundun/model/TodayqpsByRegionRequest.h
	include/alibabacloud/yundun/model/TodayqpsByRegionResult.h
	include/alibabacloud/yundun/model/WebAttackNumRequest.h
	include/alibabacloud/yundun/model/WebAttackNumResult.h )

set(yundun_src 
	src/YundunClient.cc
	src/model/AllMalwareNumRequest.cc
	src/model/AllMalwareNumResult.cc
	src/model/CurrentDdosAttackNumRequest.cc
	src/model/CurrentDdosAttackNumResult.cc
	src/model/TodayAegisOnlineRateRequest.cc
	src/model/TodayAegisOnlineRateResult.cc
	src/model/TodayAllkbpsRequest.cc
	src/model/TodayAllkbpsResult.cc
	src/model/TodayAllppsRequest.cc
	src/model/TodayAllppsResult.cc
	src/model/TodayBackdoorRequest.cc
	src/model/TodayBackdoorResult.cc
	src/model/TodayCrackInterceptRequest.cc
	src/model/TodayCrackInterceptResult.cc
	src/model/TodayMalwareNumRequest.cc
	src/model/TodayMalwareNumResult.cc
	src/model/TodayqpsByRegionRequest.cc
	src/model/TodayqpsByRegionResult.cc
	src/model/WebAttackNumRequest.cc
	src/model/WebAttackNumResult.cc )

add_library(yundun ${LIB_TYPE}
	${yundun_public_header}
	${yundun_public_header_model}
	${yundun_src})

set_target_properties(yundun
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}yundun
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(yundun
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_YUNDUN_LIBRARY)
endif()

target_include_directories(yundun
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(yundun
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(yundun
		jsoncpp)
	target_include_directories(yundun
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(yundun
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(yundun
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(yundun
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(yundun
		jsoncpp)
endif()

install(FILES ${yundun_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/yundun)
install(FILES ${yundun_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/yundun/model)
install(TARGETS yundun
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)