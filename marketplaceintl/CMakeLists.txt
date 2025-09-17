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

set(marketplaceintl_public_header 
	include/alibabacloud/marketplaceintl/MarketplaceIntlClient.h
	include/alibabacloud/marketplaceintl/MarketplaceIntlExport.h )

set(marketplaceintl_public_header_model 
	include/alibabacloud/marketplaceintl/model/DescribePushMeteringDataRequest.h
	include/alibabacloud/marketplaceintl/model/DescribePushMeteringDataResult.h
	include/alibabacloud/marketplaceintl/model/DescribeSellerInstancesRequest.h
	include/alibabacloud/marketplaceintl/model/DescribeSellerInstancesResult.h
	include/alibabacloud/marketplaceintl/model/NoticeInstanceUserRequest.h
	include/alibabacloud/marketplaceintl/model/NoticeInstanceUserResult.h
	include/alibabacloud/marketplaceintl/model/PushMeteringDataRequest.h
	include/alibabacloud/marketplaceintl/model/PushMeteringDataResult.h )

set(marketplaceintl_src 
	src/MarketplaceIntlClient.cc
	src/model/DescribePushMeteringDataRequest.cc
	src/model/DescribePushMeteringDataResult.cc
	src/model/DescribeSellerInstancesRequest.cc
	src/model/DescribeSellerInstancesResult.cc
	src/model/NoticeInstanceUserRequest.cc
	src/model/NoticeInstanceUserResult.cc
	src/model/PushMeteringDataRequest.cc
	src/model/PushMeteringDataResult.cc )

add_library(marketplaceintl ${LIB_TYPE}
	${marketplaceintl_public_header}
	${marketplaceintl_public_header_model}
	${marketplaceintl_src})

set_target_properties(marketplaceintl
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}marketplaceintl
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(marketplaceintl
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_MARKETPLACEINTL_LIBRARY)
endif()

target_include_directories(marketplaceintl
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(marketplaceintl
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(marketplaceintl
		jsoncpp)
	target_include_directories(marketplaceintl
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(marketplaceintl
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(marketplaceintl
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(marketplaceintl
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(marketplaceintl
		jsoncpp)
endif()

install(FILES ${marketplaceintl_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/marketplaceintl)
install(FILES ${marketplaceintl_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/marketplaceintl/model)
install(TARGETS marketplaceintl
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)