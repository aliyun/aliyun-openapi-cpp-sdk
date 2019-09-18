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
	include/alibabacloud/jarvis/model/CreateAccessWhiteListGroupRequest.h
	include/alibabacloud/jarvis/model/CreateAccessWhiteListGroupResult.h
	include/alibabacloud/jarvis/model/CreateAllEcsWhiteListRequest.h
	include/alibabacloud/jarvis/model/CreateAllEcsWhiteListResult.h
	include/alibabacloud/jarvis/model/CreateCdnIpRequest.h
	include/alibabacloud/jarvis/model/CreateCdnIpResult.h
	include/alibabacloud/jarvis/model/CreateCdnSubscriptionRequest.h
	include/alibabacloud/jarvis/model/CreateCdnSubscriptionResult.h
	include/alibabacloud/jarvis/model/CreateConsoleAccessWhiteListRequest.h
	include/alibabacloud/jarvis/model/CreateConsoleAccessWhiteListResult.h
	include/alibabacloud/jarvis/model/CreateCpmcPunishFeedBackRequest.h
	include/alibabacloud/jarvis/model/CreateCpmcPunishFeedBackResult.h
	include/alibabacloud/jarvis/model/CreateIpWhiteBaselineRequest.h
	include/alibabacloud/jarvis/model/CreateIpWhiteBaselineResult.h
	include/alibabacloud/jarvis/model/CreateUidWhiteBaselineRequest.h
	include/alibabacloud/jarvis/model/CreateUidWhiteBaselineResult.h
	include/alibabacloud/jarvis/model/CreateUidWhiteListGroupRequest.h
	include/alibabacloud/jarvis/model/CreateUidWhiteListGroupResult.h
	include/alibabacloud/jarvis/model/DeleteAccessWhiteListGroupRequest.h
	include/alibabacloud/jarvis/model/DeleteAccessWhiteListGroupResult.h
	include/alibabacloud/jarvis/model/DeleteCdnIpRequest.h
	include/alibabacloud/jarvis/model/DeleteCdnIpResult.h
	include/alibabacloud/jarvis/model/DeleteCdnSubscriptionRequest.h
	include/alibabacloud/jarvis/model/DeleteCdnSubscriptionResult.h
	include/alibabacloud/jarvis/model/DeleteConsoleAccessWhiteListRequest.h
	include/alibabacloud/jarvis/model/DeleteConsoleAccessWhiteListResult.h
	include/alibabacloud/jarvis/model/DeleteIpWhiteBaselineRequest.h
	include/alibabacloud/jarvis/model/DeleteIpWhiteBaselineResult.h
	include/alibabacloud/jarvis/model/DeleteUidWhiteBaselineRequest.h
	include/alibabacloud/jarvis/model/DeleteUidWhiteBaselineResult.h
	include/alibabacloud/jarvis/model/DeleteUidWhiteListGroupRequest.h
	include/alibabacloud/jarvis/model/DeleteUidWhiteListGroupResult.h
	include/alibabacloud/jarvis/model/DeleteWhiteListConditionalRequest.h
	include/alibabacloud/jarvis/model/DeleteWhiteListConditionalResult.h
	include/alibabacloud/jarvis/model/DeleteWhiteListDbItemConditionalRequest.h
	include/alibabacloud/jarvis/model/DeleteWhiteListDbItemConditionalResult.h
	include/alibabacloud/jarvis/model/DescribeAccessWhiteListEipListRequest.h
	include/alibabacloud/jarvis/model/DescribeAccessWhiteListEipListResult.h
	include/alibabacloud/jarvis/model/DescribeAccessWhiteListGroupRequest.h
	include/alibabacloud/jarvis/model/DescribeAccessWhiteListGroupResult.h
	include/alibabacloud/jarvis/model/DescribeAccessWhiteListSlbListRequest.h
	include/alibabacloud/jarvis/model/DescribeAccessWhiteListSlbListResult.h
	include/alibabacloud/jarvis/model/DescribeAccessWhitelistEcsListRequest.h
	include/alibabacloud/jarvis/model/DescribeAccessWhitelistEcsListResult.h
	include/alibabacloud/jarvis/model/DescribeCdnCertifyRequest.h
	include/alibabacloud/jarvis/model/DescribeCdnCertifyResult.h
	include/alibabacloud/jarvis/model/DescribeCdnIpListRequest.h
	include/alibabacloud/jarvis/model/DescribeCdnIpListResult.h
	include/alibabacloud/jarvis/model/DescribeCdnSubscriptionRequest.h
	include/alibabacloud/jarvis/model/DescribeCdnSubscriptionResult.h
	include/alibabacloud/jarvis/model/DescribeCdnVendorRequest.h
	include/alibabacloud/jarvis/model/DescribeCdnVendorResult.h
	include/alibabacloud/jarvis/model/DescribeConsoleAccessWhiteListRequest.h
	include/alibabacloud/jarvis/model/DescribeConsoleAccessWhiteListResult.h
	include/alibabacloud/jarvis/model/DescribeCpmcPunishListRequest.h
	include/alibabacloud/jarvis/model/DescribeCpmcPunishListResult.h
	include/alibabacloud/jarvis/model/DescribeDdosDefenseInfoRequest.h
	include/alibabacloud/jarvis/model/DescribeDdosDefenseInfoResult.h
	include/alibabacloud/jarvis/model/DescribeEcsListPageRequest.h
	include/alibabacloud/jarvis/model/DescribeEcsListPageResult.h
	include/alibabacloud/jarvis/model/DescribeIpWhiteBaselineRequest.h
	include/alibabacloud/jarvis/model/DescribeIpWhiteBaselineResult.h
	include/alibabacloud/jarvis/model/DescribePhoneInfoRequest.h
	include/alibabacloud/jarvis/model/DescribePhoneInfoResult.h
	include/alibabacloud/jarvis/model/DescribePunishListRequest.h
	include/alibabacloud/jarvis/model/DescribePunishListResult.h
	include/alibabacloud/jarvis/model/DescribeResetRecordListRequest.h
	include/alibabacloud/jarvis/model/DescribeResetRecordListResult.h
	include/alibabacloud/jarvis/model/DescribeResetRecordQueryCountRequest.h
	include/alibabacloud/jarvis/model/DescribeResetRecordQueryCountResult.h
	include/alibabacloud/jarvis/model/DescribeRiskListDetailRequest.h
	include/alibabacloud/jarvis/model/DescribeRiskListDetailResult.h
	include/alibabacloud/jarvis/model/DescribeRiskTrendRequest.h
	include/alibabacloud/jarvis/model/DescribeRiskTrendResult.h
	include/alibabacloud/jarvis/model/DescribeSpecialEcsRequest.h
	include/alibabacloud/jarvis/model/DescribeSpecialEcsResult.h
	include/alibabacloud/jarvis/model/DescribeUidGcLevelRequest.h
	include/alibabacloud/jarvis/model/DescribeUidGcLevelResult.h
	include/alibabacloud/jarvis/model/DescribeUidWhiteBaselineRequest.h
	include/alibabacloud/jarvis/model/DescribeUidWhiteBaselineResult.h
	include/alibabacloud/jarvis/model/DescribeUidWhiteListGroupRequest.h
	include/alibabacloud/jarvis/model/DescribeUidWhiteListGroupResult.h
	include/alibabacloud/jarvis/model/ModifyAccessWhiteListAutoShareRequest.h
	include/alibabacloud/jarvis/model/ModifyAccessWhiteListAutoShareResult.h
	include/alibabacloud/jarvis/model/ModifyIpWhiteBaselineRequest.h
	include/alibabacloud/jarvis/model/ModifyIpWhiteBaselineResult.h
	include/alibabacloud/jarvis/model/ModifyUidWhiteBaselineRequest.h
	include/alibabacloud/jarvis/model/ModifyUidWhiteBaselineResult.h
	include/alibabacloud/jarvis/model/ModifyUidWhiteListAutoShareRequest.h
	include/alibabacloud/jarvis/model/ModifyUidWhiteListAutoShareResult.h )

set(jarvis_src 
	src/JarvisClient.cc
	src/model/CreateAccessWhiteListGroupRequest.cc
	src/model/CreateAccessWhiteListGroupResult.cc
	src/model/CreateAllEcsWhiteListRequest.cc
	src/model/CreateAllEcsWhiteListResult.cc
	src/model/CreateCdnIpRequest.cc
	src/model/CreateCdnIpResult.cc
	src/model/CreateCdnSubscriptionRequest.cc
	src/model/CreateCdnSubscriptionResult.cc
	src/model/CreateConsoleAccessWhiteListRequest.cc
	src/model/CreateConsoleAccessWhiteListResult.cc
	src/model/CreateCpmcPunishFeedBackRequest.cc
	src/model/CreateCpmcPunishFeedBackResult.cc
	src/model/CreateIpWhiteBaselineRequest.cc
	src/model/CreateIpWhiteBaselineResult.cc
	src/model/CreateUidWhiteBaselineRequest.cc
	src/model/CreateUidWhiteBaselineResult.cc
	src/model/CreateUidWhiteListGroupRequest.cc
	src/model/CreateUidWhiteListGroupResult.cc
	src/model/DeleteAccessWhiteListGroupRequest.cc
	src/model/DeleteAccessWhiteListGroupResult.cc
	src/model/DeleteCdnIpRequest.cc
	src/model/DeleteCdnIpResult.cc
	src/model/DeleteCdnSubscriptionRequest.cc
	src/model/DeleteCdnSubscriptionResult.cc
	src/model/DeleteConsoleAccessWhiteListRequest.cc
	src/model/DeleteConsoleAccessWhiteListResult.cc
	src/model/DeleteIpWhiteBaselineRequest.cc
	src/model/DeleteIpWhiteBaselineResult.cc
	src/model/DeleteUidWhiteBaselineRequest.cc
	src/model/DeleteUidWhiteBaselineResult.cc
	src/model/DeleteUidWhiteListGroupRequest.cc
	src/model/DeleteUidWhiteListGroupResult.cc
	src/model/DeleteWhiteListConditionalRequest.cc
	src/model/DeleteWhiteListConditionalResult.cc
	src/model/DeleteWhiteListDbItemConditionalRequest.cc
	src/model/DeleteWhiteListDbItemConditionalResult.cc
	src/model/DescribeAccessWhiteListEipListRequest.cc
	src/model/DescribeAccessWhiteListEipListResult.cc
	src/model/DescribeAccessWhiteListGroupRequest.cc
	src/model/DescribeAccessWhiteListGroupResult.cc
	src/model/DescribeAccessWhiteListSlbListRequest.cc
	src/model/DescribeAccessWhiteListSlbListResult.cc
	src/model/DescribeAccessWhitelistEcsListRequest.cc
	src/model/DescribeAccessWhitelistEcsListResult.cc
	src/model/DescribeCdnCertifyRequest.cc
	src/model/DescribeCdnCertifyResult.cc
	src/model/DescribeCdnIpListRequest.cc
	src/model/DescribeCdnIpListResult.cc
	src/model/DescribeCdnSubscriptionRequest.cc
	src/model/DescribeCdnSubscriptionResult.cc
	src/model/DescribeCdnVendorRequest.cc
	src/model/DescribeCdnVendorResult.cc
	src/model/DescribeConsoleAccessWhiteListRequest.cc
	src/model/DescribeConsoleAccessWhiteListResult.cc
	src/model/DescribeCpmcPunishListRequest.cc
	src/model/DescribeCpmcPunishListResult.cc
	src/model/DescribeDdosDefenseInfoRequest.cc
	src/model/DescribeDdosDefenseInfoResult.cc
	src/model/DescribeEcsListPageRequest.cc
	src/model/DescribeEcsListPageResult.cc
	src/model/DescribeIpWhiteBaselineRequest.cc
	src/model/DescribeIpWhiteBaselineResult.cc
	src/model/DescribePhoneInfoRequest.cc
	src/model/DescribePhoneInfoResult.cc
	src/model/DescribePunishListRequest.cc
	src/model/DescribePunishListResult.cc
	src/model/DescribeResetRecordListRequest.cc
	src/model/DescribeResetRecordListResult.cc
	src/model/DescribeResetRecordQueryCountRequest.cc
	src/model/DescribeResetRecordQueryCountResult.cc
	src/model/DescribeRiskListDetailRequest.cc
	src/model/DescribeRiskListDetailResult.cc
	src/model/DescribeRiskTrendRequest.cc
	src/model/DescribeRiskTrendResult.cc
	src/model/DescribeSpecialEcsRequest.cc
	src/model/DescribeSpecialEcsResult.cc
	src/model/DescribeUidGcLevelRequest.cc
	src/model/DescribeUidGcLevelResult.cc
	src/model/DescribeUidWhiteBaselineRequest.cc
	src/model/DescribeUidWhiteBaselineResult.cc
	src/model/DescribeUidWhiteListGroupRequest.cc
	src/model/DescribeUidWhiteListGroupResult.cc
	src/model/ModifyAccessWhiteListAutoShareRequest.cc
	src/model/ModifyAccessWhiteListAutoShareResult.cc
	src/model/ModifyIpWhiteBaselineRequest.cc
	src/model/ModifyIpWhiteBaselineResult.cc
	src/model/ModifyUidWhiteBaselineRequest.cc
	src/model/ModifyUidWhiteBaselineResult.cc
	src/model/ModifyUidWhiteListAutoShareRequest.cc
	src/model/ModifyUidWhiteListAutoShareResult.cc )

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