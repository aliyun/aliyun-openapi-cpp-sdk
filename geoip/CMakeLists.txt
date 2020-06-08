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

set(geoip_public_header 
	include/alibabacloud/geoip/GeoipClient.h
	include/alibabacloud/geoip/GeoipExport.h )

set(geoip_public_header_model 
	include/alibabacloud/geoip/model/DescribeGeoipInstanceRequest.h
	include/alibabacloud/geoip/model/DescribeGeoipInstanceResult.h
	include/alibabacloud/geoip/model/DescribeGeoipInstanceDataInfosRequest.h
	include/alibabacloud/geoip/model/DescribeGeoipInstanceDataInfosResult.h
	include/alibabacloud/geoip/model/DescribeGeoipInstanceDataUrlRequest.h
	include/alibabacloud/geoip/model/DescribeGeoipInstanceDataUrlResult.h
	include/alibabacloud/geoip/model/DescribeGeoipInstanceStatisticsRequest.h
	include/alibabacloud/geoip/model/DescribeGeoipInstanceStatisticsResult.h
	include/alibabacloud/geoip/model/DescribeGeoipInstancesRequest.h
	include/alibabacloud/geoip/model/DescribeGeoipInstancesResult.h
	include/alibabacloud/geoip/model/DescribeIpv4LocationRequest.h
	include/alibabacloud/geoip/model/DescribeIpv4LocationResult.h
	include/alibabacloud/geoip/model/DescribeIpv6LocationRequest.h
	include/alibabacloud/geoip/model/DescribeIpv6LocationResult.h )

set(geoip_src 
	src/GeoipClient.cc
	src/model/DescribeGeoipInstanceRequest.cc
	src/model/DescribeGeoipInstanceResult.cc
	src/model/DescribeGeoipInstanceDataInfosRequest.cc
	src/model/DescribeGeoipInstanceDataInfosResult.cc
	src/model/DescribeGeoipInstanceDataUrlRequest.cc
	src/model/DescribeGeoipInstanceDataUrlResult.cc
	src/model/DescribeGeoipInstanceStatisticsRequest.cc
	src/model/DescribeGeoipInstanceStatisticsResult.cc
	src/model/DescribeGeoipInstancesRequest.cc
	src/model/DescribeGeoipInstancesResult.cc
	src/model/DescribeIpv4LocationRequest.cc
	src/model/DescribeIpv4LocationResult.cc
	src/model/DescribeIpv6LocationRequest.cc
	src/model/DescribeIpv6LocationResult.cc )

add_library(geoip ${LIB_TYPE}
	${geoip_public_header}
	${geoip_public_header_model}
	${geoip_src})

set_target_properties(geoip
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}geoip
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(geoip
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_GEOIP_LIBRARY)
endif()

target_include_directories(geoip
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(geoip
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(geoip
		jsoncpp)
	target_include_directories(geoip
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(geoip
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(geoip
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(geoip
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(geoip
		jsoncpp)
endif()

install(FILES ${geoip_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/geoip)
install(FILES ${geoip_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/geoip/model)
install(TARGETS geoip
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)