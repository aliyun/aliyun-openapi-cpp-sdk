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

set(jarvis_public_header 
	include/alibabacloud/jarvis/JarvisClient.h
	include/alibabacloud/jarvis/JarvisExport.h )

set(jarvis_public_header_model 
	include/alibabacloud/jarvis/model/DeleteUidWhiteListGroupRequest.h
	include/alibabacloud/jarvis/model/DeleteUidWhiteListGroupResult.h
	include/alibabacloud/jarvis/model/CreateCpmcPunishFeedBackRequest.h
	include/alibabacloud/jarvis/model/CreateCpmcPunishFeedBackResult.h
	include/alibabacloud/jarvis/model/CreateAccessWhiteListGroupRequest.h
	include/alibabacloud/jarvis/model/CreateAccessWhiteListGroupResult.h
	include/alibabacloud/jarvis/model/DescribeAccessWhitelistEcsListRequest.h
	include/alibabacloud/jarvis/model/DescribeAccessWhitelistEcsListResult.h
	include/alibabacloud/jarvis/model/DescribeResetRecordListRequest.h
	include/alibabacloud/jarvis/model/DescribeResetRecordListResult.h
	include/alibabacloud/jarvis/model/ModifyUidWhiteListAutoShareRequest.h
	include/alibabacloud/jarvis/model/ModifyUidWhiteListAutoShareResult.h
	include/alibabacloud/jarvis/model/ModifyAccessWhiteListAutoShareRequest.h
	include/alibabacloud/jarvis/model/ModifyAccessWhiteListAutoShareResult.h
	include/alibabacloud/jarvis/model/CreateUidWhiteListGroupRequest.h
	include/alibabacloud/jarvis/model/CreateUidWhiteListGroupResult.h
	include/alibabacloud/jarvis/model/DescribeCpmcPunishListRequest.h
	include/alibabacloud/jarvis/model/DescribeCpmcPunishListResult.h
	include/alibabacloud/jarvis/model/DescribeUidGcLevelRequest.h
	include/alibabacloud/jarvis/model/DescribeUidGcLevelResult.h
	include/alibabacloud/jarvis/model/DeleteAccessWhiteListGroupRequest.h
	include/alibabacloud/jarvis/model/DeleteAccessWhiteListGroupResult.h
	include/alibabacloud/jarvis/model/DescribeAccessWhiteListGroupRequest.h
	include/alibabacloud/jarvis/model/DescribeAccessWhiteListGroupResult.h
	include/alibabacloud/jarvis/model/DescribeResetRecordQueryCountRequest.h
	include/alibabacloud/jarvis/model/DescribeResetRecordQueryCountResult.h
	include/alibabacloud/jarvis/model/DescribeUidWhiteListGroupRequest.h
	include/alibabacloud/jarvis/model/DescribeUidWhiteListGroupResult.h
	include/alibabacloud/jarvis/model/DescribeRiskTrendRequest.h
	include/alibabacloud/jarvis/model/DescribeRiskTrendResult.h )

set(jarvis_src 
	src/JarvisClient.cc
	src/model/DeleteUidWhiteListGroupRequest.cc
	src/model/DeleteUidWhiteListGroupResult.cc
	src/model/CreateCpmcPunishFeedBackRequest.cc
	src/model/CreateCpmcPunishFeedBackResult.cc
	src/model/CreateAccessWhiteListGroupRequest.cc
	src/model/CreateAccessWhiteListGroupResult.cc
	src/model/DescribeAccessWhitelistEcsListRequest.cc
	src/model/DescribeAccessWhitelistEcsListResult.cc
	src/model/DescribeResetRecordListRequest.cc
	src/model/DescribeResetRecordListResult.cc
	src/model/ModifyUidWhiteListAutoShareRequest.cc
	src/model/ModifyUidWhiteListAutoShareResult.cc
	src/model/ModifyAccessWhiteListAutoShareRequest.cc
	src/model/ModifyAccessWhiteListAutoShareResult.cc
	src/model/CreateUidWhiteListGroupRequest.cc
	src/model/CreateUidWhiteListGroupResult.cc
	src/model/DescribeCpmcPunishListRequest.cc
	src/model/DescribeCpmcPunishListResult.cc
	src/model/DescribeUidGcLevelRequest.cc
	src/model/DescribeUidGcLevelResult.cc
	src/model/DeleteAccessWhiteListGroupRequest.cc
	src/model/DeleteAccessWhiteListGroupResult.cc
	src/model/DescribeAccessWhiteListGroupRequest.cc
	src/model/DescribeAccessWhiteListGroupResult.cc
	src/model/DescribeResetRecordQueryCountRequest.cc
	src/model/DescribeResetRecordQueryCountResult.cc
	src/model/DescribeUidWhiteListGroupRequest.cc
	src/model/DescribeUidWhiteListGroupResult.cc
	src/model/DescribeRiskTrendRequest.cc
	src/model/DescribeRiskTrendResult.cc )

add_library(jarvis ${LIB_TYPE}
	${jarvis_public_header}
	${jarvis_public_header_model}
	${jarvis_src})

set_target_properties(jarvis
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}jarvis
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(jarvis
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_JARVIS_LIBRARY)
endif()

target_include_directories(jarvis
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(jarvis
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(jarvis
		jsoncpp)
	target_include_directories(jarvis
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(jarvis
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(jarvis
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(jarvis
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(jarvis
		jsoncpp)
endif()

install(FILES ${jarvis_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/jarvis)
install(FILES ${jarvis_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/jarvis/model)
install(TARGETS jarvis
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)