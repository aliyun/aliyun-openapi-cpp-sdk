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

set(democenter_public_header 
	include/alibabacloud/democenter/DemoCenterClient.h
	include/alibabacloud/democenter/DemoCenterExport.h )

set(democenter_public_header_model 
	include/alibabacloud/democenter/model/CreateDemoAccessTokenRequest.h
	include/alibabacloud/democenter/model/CreateDemoAccessTokenResult.h
	include/alibabacloud/democenter/model/DescribeDemoAccessTokenRequest.h
	include/alibabacloud/democenter/model/DescribeDemoAccessTokenResult.h
	include/alibabacloud/democenter/model/ExpireDemoAccessTokenRequest.h
	include/alibabacloud/democenter/model/ExpireDemoAccessTokenResult.h
	include/alibabacloud/democenter/model/GetDemoTrialAuthRequest.h
	include/alibabacloud/democenter/model/GetDemoTrialAuthResult.h )

set(democenter_src 
	src/DemoCenterClient.cc
	src/model/CreateDemoAccessTokenRequest.cc
	src/model/CreateDemoAccessTokenResult.cc
	src/model/DescribeDemoAccessTokenRequest.cc
	src/model/DescribeDemoAccessTokenResult.cc
	src/model/ExpireDemoAccessTokenRequest.cc
	src/model/ExpireDemoAccessTokenResult.cc
	src/model/GetDemoTrialAuthRequest.cc
	src/model/GetDemoTrialAuthResult.cc )

add_library(democenter ${LIB_TYPE}
	${democenter_public_header}
	${democenter_public_header_model}
	${democenter_src})

set_target_properties(democenter
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}democenter
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(democenter
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DEMOCENTER_LIBRARY)
endif()

target_include_directories(democenter
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(democenter
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(democenter
		jsoncpp)
	target_include_directories(democenter
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(democenter
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(democenter
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(democenter
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(democenter
		jsoncpp)
endif()

install(FILES ${democenter_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/democenter)
install(FILES ${democenter_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/democenter/model)
install(TARGETS democenter
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)