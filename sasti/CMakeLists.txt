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

set(sasti_public_header 
	include/alibabacloud/sasti/SastiClient.h
	include/alibabacloud/sasti/SastiExport.h )

set(sasti_public_header_model 
	include/alibabacloud/sasti/model/DescribeDomainReportRequest.h
	include/alibabacloud/sasti/model/DescribeDomainReportResult.h
	include/alibabacloud/sasti/model/DescribeFileReportRequest.h
	include/alibabacloud/sasti/model/DescribeFileReportResult.h
	include/alibabacloud/sasti/model/DescribeIpReportRequest.h
	include/alibabacloud/sasti/model/DescribeIpReportResult.h
	include/alibabacloud/sasti/model/GetGraphQueryTemplatesRequest.h
	include/alibabacloud/sasti/model/GetGraphQueryTemplatesResult.h )

set(sasti_src 
	src/SastiClient.cc
	src/model/DescribeDomainReportRequest.cc
	src/model/DescribeDomainReportResult.cc
	src/model/DescribeFileReportRequest.cc
	src/model/DescribeFileReportResult.cc
	src/model/DescribeIpReportRequest.cc
	src/model/DescribeIpReportResult.cc
	src/model/GetGraphQueryTemplatesRequest.cc
	src/model/GetGraphQueryTemplatesResult.cc )

add_library(sasti ${LIB_TYPE}
	${sasti_public_header}
	${sasti_public_header_model}
	${sasti_src})

set_target_properties(sasti
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}sasti
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(sasti
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SASTI_LIBRARY)
endif()

target_include_directories(sasti
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(sasti
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(sasti
		jsoncpp)
	target_include_directories(sasti
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(sasti
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(sasti
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(sasti
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(sasti
		jsoncpp)
endif()

install(FILES ${sasti_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sasti)
install(FILES ${sasti_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sasti/model)
install(TARGETS sasti
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)