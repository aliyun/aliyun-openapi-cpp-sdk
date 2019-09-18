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

set(appmallsservice_public_header 
	include/alibabacloud/appmallsservice/AppMallsServiceClient.h
	include/alibabacloud/appmallsservice/AppMallsServiceExport.h )

set(appmallsservice_public_header_model 
	include/alibabacloud/appmallsservice/model/GetMessagesRequest.h
	include/alibabacloud/appmallsservice/model/GetMessagesResult.h
	include/alibabacloud/appmallsservice/model/RemoveMessagesRequest.h
	include/alibabacloud/appmallsservice/model/RemoveMessagesResult.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmGetCinemasRequest.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmGetCinemasResult.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmGetHotShowsRequest.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmGetHotShowsResult.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmGetRegionListRequest.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmGetRegionListResult.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmGetSchedulesRequest.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmGetSchedulesResult.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmGetSeatsRequest.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmGetSeatsResult.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmGetShowCommentsRequest.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmGetShowCommentsResult.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmGetSoonShowsRequest.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmGetSoonShowsResult.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmIssueOrderRequest.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmIssueOrderResult.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmLockSeatRequest.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmLockSeatResult.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmUnLockSeatRequest.h
	include/alibabacloud/appmallsservice/model/TaobaoFilmUnLockSeatResult.h )

set(appmallsservice_src 
	src/AppMallsServiceClient.cc
	src/model/GetMessagesRequest.cc
	src/model/GetMessagesResult.cc
	src/model/RemoveMessagesRequest.cc
	src/model/RemoveMessagesResult.cc
	src/model/TaobaoFilmGetCinemasRequest.cc
	src/model/TaobaoFilmGetCinemasResult.cc
	src/model/TaobaoFilmGetHotShowsRequest.cc
	src/model/TaobaoFilmGetHotShowsResult.cc
	src/model/TaobaoFilmGetRegionListRequest.cc
	src/model/TaobaoFilmGetRegionListResult.cc
	src/model/TaobaoFilmGetSchedulesRequest.cc
	src/model/TaobaoFilmGetSchedulesResult.cc
	src/model/TaobaoFilmGetSeatsRequest.cc
	src/model/TaobaoFilmGetSeatsResult.cc
	src/model/TaobaoFilmGetShowCommentsRequest.cc
	src/model/TaobaoFilmGetShowCommentsResult.cc
	src/model/TaobaoFilmGetSoonShowsRequest.cc
	src/model/TaobaoFilmGetSoonShowsResult.cc
	src/model/TaobaoFilmIssueOrderRequest.cc
	src/model/TaobaoFilmIssueOrderResult.cc
	src/model/TaobaoFilmLockSeatRequest.cc
	src/model/TaobaoFilmLockSeatResult.cc
	src/model/TaobaoFilmUnLockSeatRequest.cc
	src/model/TaobaoFilmUnLockSeatResult.cc )

add_library(appmallsservice ${LIB_TYPE}
	${appmallsservice_public_header}
	${appmallsservice_public_header_model}
	${appmallsservice_src})

set_target_properties(appmallsservice
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}appmallsservice
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(appmallsservice
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_APPMALLSSERVICE_LIBRARY)
endif()

target_include_directories(appmallsservice
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(appmallsservice
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(appmallsservice
		jsoncpp)
	target_include_directories(appmallsservice
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(appmallsservice
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(appmallsservice
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(appmallsservice
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(appmallsservice
		jsoncpp)
endif()

install(FILES ${appmallsservice_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/appmallsservice)
install(FILES ${appmallsservice_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/appmallsservice/model)
install(TARGETS appmallsservice
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)