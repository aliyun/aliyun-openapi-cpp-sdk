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

set(tesladam_public_header 
	include/alibabacloud/tesladam/TeslaDamClient.h
	include/alibabacloud/tesladam/TeslaDamExport.h )

set(tesladam_public_header_model 
	include/alibabacloud/tesladam/model/ActionRequest.h
	include/alibabacloud/tesladam/model/ActionResult.h
	include/alibabacloud/tesladam/model/ActionDiskCheckRequest.h
	include/alibabacloud/tesladam/model/ActionDiskCheckResult.h
	include/alibabacloud/tesladam/model/ActionDiskMaskRequest.h
	include/alibabacloud/tesladam/model/ActionDiskMaskResult.h
	include/alibabacloud/tesladam/model/ActionDiskRmaRequest.h
	include/alibabacloud/tesladam/model/ActionDiskRmaResult.h
	include/alibabacloud/tesladam/model/HostGetsRequest.h
	include/alibabacloud/tesladam/model/HostGetsResult.h )

set(tesladam_src 
	src/TeslaDamClient.cc
	src/model/ActionRequest.cc
	src/model/ActionResult.cc
	src/model/ActionDiskCheckRequest.cc
	src/model/ActionDiskCheckResult.cc
	src/model/ActionDiskMaskRequest.cc
	src/model/ActionDiskMaskResult.cc
	src/model/ActionDiskRmaRequest.cc
	src/model/ActionDiskRmaResult.cc
	src/model/HostGetsRequest.cc
	src/model/HostGetsResult.cc )

add_library(tesladam ${LIB_TYPE}
	${tesladam_public_header}
	${tesladam_public_header_model}
	${tesladam_src})

set_target_properties(tesladam
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tesladam
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(tesladam
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_TESLADAM_LIBRARY)
endif()

target_include_directories(tesladam
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(tesladam
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(tesladam
		jsoncpp)
	target_include_directories(tesladam
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(tesladam
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(tesladam
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(tesladam
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(tesladam
		jsoncpp)
endif()

install(FILES ${tesladam_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/tesladam)
install(FILES ${tesladam_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/tesladam/model)
install(TARGETS tesladam
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)