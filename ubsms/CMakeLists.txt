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

set(ubsms_public_header 
	include/alibabacloud/ubsms/UbsmsClient.h
	include/alibabacloud/ubsms/UbsmsExport.h )

set(ubsms_public_header_model 
	include/alibabacloud/ubsms/model/DescribeBusinessStatusRequest.h
	include/alibabacloud/ubsms/model/DescribeBusinessStatusResult.h
	include/alibabacloud/ubsms/model/NotifyUserBusinessCommandRequest.h
	include/alibabacloud/ubsms/model/NotifyUserBusinessCommandResult.h
	include/alibabacloud/ubsms/model/SetUserBusinessStatusRequest.h
	include/alibabacloud/ubsms/model/SetUserBusinessStatusResult.h )

set(ubsms_src 
	src/UbsmsClient.cc
	src/model/DescribeBusinessStatusRequest.cc
	src/model/DescribeBusinessStatusResult.cc
	src/model/NotifyUserBusinessCommandRequest.cc
	src/model/NotifyUserBusinessCommandResult.cc
	src/model/SetUserBusinessStatusRequest.cc
	src/model/SetUserBusinessStatusResult.cc )

add_library(ubsms ${LIB_TYPE}
	${ubsms_public_header}
	${ubsms_public_header_model}
	${ubsms_src})

set_target_properties(ubsms
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ubsms
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ubsms
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_UBSMS_LIBRARY)
endif()

target_include_directories(ubsms
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ubsms
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ubsms
		jsoncpp)
	target_include_directories(ubsms
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ubsms
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ubsms
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ubsms
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ubsms
		jsoncpp)
endif()

install(FILES ${ubsms_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ubsms)
install(FILES ${ubsms_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ubsms/model)
install(TARGETS ubsms
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)