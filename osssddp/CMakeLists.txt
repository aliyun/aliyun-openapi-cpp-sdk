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

set(osssddp_public_header 
	include/alibabacloud/osssddp/OssSddpClient.h
	include/alibabacloud/osssddp/OssSddpExport.h )

set(osssddp_public_header_model 
	include/alibabacloud/osssddp/model/GetSddpVersionRequest.h
	include/alibabacloud/osssddp/model/GetSddpVersionResult.h
	include/alibabacloud/osssddp/model/UpgradeSddpVersionRequest.h
	include/alibabacloud/osssddp/model/UpgradeSddpVersionResult.h )

set(osssddp_src 
	src/OssSddpClient.cc
	src/model/GetSddpVersionRequest.cc
	src/model/GetSddpVersionResult.cc
	src/model/UpgradeSddpVersionRequest.cc
	src/model/UpgradeSddpVersionResult.cc )

add_library(osssddp ${LIB_TYPE}
	${osssddp_public_header}
	${osssddp_public_header_model}
	${osssddp_src})

set_target_properties(osssddp
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}osssddp
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(osssddp
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_OSSSDDP_LIBRARY)
endif()

target_include_directories(osssddp
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(osssddp
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(osssddp
		jsoncpp)
	target_include_directories(osssddp
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(osssddp
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(osssddp
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(osssddp
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(osssddp
		jsoncpp)
endif()

install(FILES ${osssddp_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/osssddp)
install(FILES ${osssddp_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/osssddp/model)
install(TARGETS osssddp
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)