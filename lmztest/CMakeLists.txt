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

set(lmztest_public_header 
	include/alibabacloud/lmztest/LmzTestClient.h
	include/alibabacloud/lmztest/LmzTestExport.h )

set(lmztest_public_header_model 
	include/alibabacloud/lmztest/model/AAbckRequest.h
	include/alibabacloud/lmztest/model/AAbckResult.h
	include/alibabacloud/lmztest/model/AndBackRequest.h
	include/alibabacloud/lmztest/model/AndBackResult.h
	include/alibabacloud/lmztest/model/DataRateLimitTestRequest.h
	include/alibabacloud/lmztest/model/DataRateLimitTestResult.h
	include/alibabacloud/lmztest/model/DemoGrayReleaseTestRequest.h
	include/alibabacloud/lmztest/model/DemoGrayReleaseTestResult.h
	include/alibabacloud/lmztest/model/DemoGrayReleaseTestTwoRequest.h
	include/alibabacloud/lmztest/model/DemoGrayReleaseTestTwoResult.h
	include/alibabacloud/lmztest/model/DemoGreyReleaseTestRequest.h
	include/alibabacloud/lmztest/model/DemoGreyReleaseTestResult.h
	include/alibabacloud/lmztest/model/DemoHsfNineResponseRequest.h
	include/alibabacloud/lmztest/model/DemoHsfNineResponseResult.h
	include/alibabacloud/lmztest/model/DemoHsfSixTestRequest.h
	include/alibabacloud/lmztest/model/DemoHsfSixTestResult.h
	include/alibabacloud/lmztest/model/DemoHttpComplexResponseRequest.h
	include/alibabacloud/lmztest/model/DemoHttpComplexResponseResult.h
	include/alibabacloud/lmztest/model/DescribeDisksRequest.h
	include/alibabacloud/lmztest/model/DescribeDisksResult.h
	include/alibabacloud/lmztest/model/GetPackageStorageCredentialRequest.h
	include/alibabacloud/lmztest/model/GetPackageStorageCredentialResult.h
	include/alibabacloud/lmztest/model/GrayReleaseDemoRequest.h
	include/alibabacloud/lmztest/model/GrayReleaseDemoResult.h
	include/alibabacloud/lmztest/model/ListProductsByPopCodeRequest.h
	include/alibabacloud/lmztest/model/ListProductsByPopCodeResult.h
	include/alibabacloud/lmztest/model/LjxTestRequest.h
	include/alibabacloud/lmztest/model/LjxTestResult.h
	include/alibabacloud/lmztest/model/ReqBeanTestRequest.h
	include/alibabacloud/lmztest/model/ReqBeanTestResult.h
	include/alibabacloud/lmztest/model/RomeGetExecutionResultRequest.h
	include/alibabacloud/lmztest/model/RomeGetExecutionResultResult.h
	include/alibabacloud/lmztest/model/RpcHttpRequest.h
	include/alibabacloud/lmztest/model/RpcHttpResult.h
	include/alibabacloud/lmztest/model/TestPutApiAndGetApiRequest.h
	include/alibabacloud/lmztest/model/TestPutApiAndGetApiResult.h
	include/alibabacloud/lmztest/model/UpdateListenerRequest.h
	include/alibabacloud/lmztest/model/UpdateListenerResult.h )

set(lmztest_src 
	src/LmzTestClient.cc
	src/model/AAbckRequest.cc
	src/model/AAbckResult.cc
	src/model/AndBackRequest.cc
	src/model/AndBackResult.cc
	src/model/DataRateLimitTestRequest.cc
	src/model/DataRateLimitTestResult.cc
	src/model/DemoGrayReleaseTestRequest.cc
	src/model/DemoGrayReleaseTestResult.cc
	src/model/DemoGrayReleaseTestTwoRequest.cc
	src/model/DemoGrayReleaseTestTwoResult.cc
	src/model/DemoGreyReleaseTestRequest.cc
	src/model/DemoGreyReleaseTestResult.cc
	src/model/DemoHsfNineResponseRequest.cc
	src/model/DemoHsfNineResponseResult.cc
	src/model/DemoHsfSixTestRequest.cc
	src/model/DemoHsfSixTestResult.cc
	src/model/DemoHttpComplexResponseRequest.cc
	src/model/DemoHttpComplexResponseResult.cc
	src/model/DescribeDisksRequest.cc
	src/model/DescribeDisksResult.cc
	src/model/GetPackageStorageCredentialRequest.cc
	src/model/GetPackageStorageCredentialResult.cc
	src/model/GrayReleaseDemoRequest.cc
	src/model/GrayReleaseDemoResult.cc
	src/model/ListProductsByPopCodeRequest.cc
	src/model/ListProductsByPopCodeResult.cc
	src/model/LjxTestRequest.cc
	src/model/LjxTestResult.cc
	src/model/ReqBeanTestRequest.cc
	src/model/ReqBeanTestResult.cc
	src/model/RomeGetExecutionResultRequest.cc
	src/model/RomeGetExecutionResultResult.cc
	src/model/RpcHttpRequest.cc
	src/model/RpcHttpResult.cc
	src/model/TestPutApiAndGetApiRequest.cc
	src/model/TestPutApiAndGetApiResult.cc
	src/model/UpdateListenerRequest.cc
	src/model/UpdateListenerResult.cc )

add_library(lmztest ${LIB_TYPE}
	${lmztest_public_header}
	${lmztest_public_header_model}
	${lmztest_src})

set_target_properties(lmztest
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}lmztest
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(lmztest
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_LMZTEST_LIBRARY)
endif()

target_include_directories(lmztest
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(lmztest
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(lmztest
		jsoncpp)
	target_include_directories(lmztest
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(lmztest
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(lmztest
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(lmztest
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(lmztest
		jsoncpp)
endif()

install(FILES ${lmztest_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/lmztest)
install(FILES ${lmztest_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/lmztest/model)
install(TARGETS lmztest
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)