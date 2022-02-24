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

set(eipanycast_public_header 
	include/alibabacloud/eipanycast/EipanycastClient.h
	include/alibabacloud/eipanycast/EipanycastExport.h )

set(eipanycast_public_header_model 
	include/alibabacloud/eipanycast/model/AllocateAnycastEipAddressRequest.h
	include/alibabacloud/eipanycast/model/AllocateAnycastEipAddressResult.h
	include/alibabacloud/eipanycast/model/AssociateAnycastEipAddressRequest.h
	include/alibabacloud/eipanycast/model/AssociateAnycastEipAddressResult.h
	include/alibabacloud/eipanycast/model/DescribeAnycastEipAddressRequest.h
	include/alibabacloud/eipanycast/model/DescribeAnycastEipAddressResult.h
	include/alibabacloud/eipanycast/model/DescribeAnycastPopLocationsRequest.h
	include/alibabacloud/eipanycast/model/DescribeAnycastPopLocationsResult.h
	include/alibabacloud/eipanycast/model/DescribeAnycastServerRegionsRequest.h
	include/alibabacloud/eipanycast/model/DescribeAnycastServerRegionsResult.h
	include/alibabacloud/eipanycast/model/ListAnycastEipAddressesRequest.h
	include/alibabacloud/eipanycast/model/ListAnycastEipAddressesResult.h
	include/alibabacloud/eipanycast/model/ModifyAnycastEipAddressAttributeRequest.h
	include/alibabacloud/eipanycast/model/ModifyAnycastEipAddressAttributeResult.h
	include/alibabacloud/eipanycast/model/ModifyAnycastEipAddressSpecRequest.h
	include/alibabacloud/eipanycast/model/ModifyAnycastEipAddressSpecResult.h
	include/alibabacloud/eipanycast/model/ReleaseAnycastEipAddressRequest.h
	include/alibabacloud/eipanycast/model/ReleaseAnycastEipAddressResult.h
	include/alibabacloud/eipanycast/model/UnassociateAnycastEipAddressRequest.h
	include/alibabacloud/eipanycast/model/UnassociateAnycastEipAddressResult.h
	include/alibabacloud/eipanycast/model/UpdateAnycastEipAddressAssociationsRequest.h
	include/alibabacloud/eipanycast/model/UpdateAnycastEipAddressAssociationsResult.h )

set(eipanycast_src 
	src/EipanycastClient.cc
	src/model/AllocateAnycastEipAddressRequest.cc
	src/model/AllocateAnycastEipAddressResult.cc
	src/model/AssociateAnycastEipAddressRequest.cc
	src/model/AssociateAnycastEipAddressResult.cc
	src/model/DescribeAnycastEipAddressRequest.cc
	src/model/DescribeAnycastEipAddressResult.cc
	src/model/DescribeAnycastPopLocationsRequest.cc
	src/model/DescribeAnycastPopLocationsResult.cc
	src/model/DescribeAnycastServerRegionsRequest.cc
	src/model/DescribeAnycastServerRegionsResult.cc
	src/model/ListAnycastEipAddressesRequest.cc
	src/model/ListAnycastEipAddressesResult.cc
	src/model/ModifyAnycastEipAddressAttributeRequest.cc
	src/model/ModifyAnycastEipAddressAttributeResult.cc
	src/model/ModifyAnycastEipAddressSpecRequest.cc
	src/model/ModifyAnycastEipAddressSpecResult.cc
	src/model/ReleaseAnycastEipAddressRequest.cc
	src/model/ReleaseAnycastEipAddressResult.cc
	src/model/UnassociateAnycastEipAddressRequest.cc
	src/model/UnassociateAnycastEipAddressResult.cc
	src/model/UpdateAnycastEipAddressAssociationsRequest.cc
	src/model/UpdateAnycastEipAddressAssociationsResult.cc )

add_library(eipanycast ${LIB_TYPE}
	${eipanycast_public_header}
	${eipanycast_public_header_model}
	${eipanycast_src})

set_target_properties(eipanycast
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}eipanycast
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(eipanycast
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_EIPANYCAST_LIBRARY)
endif()

target_include_directories(eipanycast
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(eipanycast
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(eipanycast
		jsoncpp)
	target_include_directories(eipanycast
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(eipanycast
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(eipanycast
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(eipanycast
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(eipanycast
		jsoncpp)
endif()

install(FILES ${eipanycast_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eipanycast)
install(FILES ${eipanycast_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eipanycast/model)
install(TARGETS eipanycast
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)