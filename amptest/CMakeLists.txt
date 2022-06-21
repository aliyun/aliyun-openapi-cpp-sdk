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

set(amptest_public_header 
	include/alibabacloud/amptest/AmpTestClient.h
	include/alibabacloud/amptest/AmpTestExport.h )

set(amptest_public_header_model 
	include/alibabacloud/amptest/model/CreateRulesRequest.h
	include/alibabacloud/amptest/model/CreateRulesResult.h
	include/alibabacloud/amptest/model/HuichengTestGrayRequest.h
	include/alibabacloud/amptest/model/HuichengTestGrayResult.h
	include/alibabacloud/amptest/model/HuichengTestGrayEightRequest.h
	include/alibabacloud/amptest/model/HuichengTestGrayEightResult.h
	include/alibabacloud/amptest/model/HuichengTestGrayFifthRequest.h
	include/alibabacloud/amptest/model/HuichengTestGrayFifthResult.h
	include/alibabacloud/amptest/model/HuichengTestGrayNineRequest.h
	include/alibabacloud/amptest/model/HuichengTestGrayNineResult.h
	include/alibabacloud/amptest/model/HuichengTestGraySecondRequest.h
	include/alibabacloud/amptest/model/HuichengTestGraySecondResult.h
	include/alibabacloud/amptest/model/HuichengTestGraySevenRequest.h
	include/alibabacloud/amptest/model/HuichengTestGraySevenResult.h
	include/alibabacloud/amptest/model/HuichengTestGraySixRequest.h
	include/alibabacloud/amptest/model/HuichengTestGraySixResult.h
	include/alibabacloud/amptest/model/HuichengTestGrayTenRequest.h
	include/alibabacloud/amptest/model/HuichengTestGrayTenResult.h
	include/alibabacloud/amptest/model/HuichengTestGrayThirdRequest.h
	include/alibabacloud/amptest/model/HuichengTestGrayThirdResult.h
	include/alibabacloud/amptest/model/HuichengTestResourceOwnerIdRequest.h
	include/alibabacloud/amptest/model/HuichengTestResourceOwnerIdResult.h
	include/alibabacloud/amptest/model/HuichengetRequest.h
	include/alibabacloud/amptest/model/HuichengetResult.h
	include/alibabacloud/amptest/model/HuichengetestRequest.h
	include/alibabacloud/amptest/model/HuichengetestResult.h )

set(amptest_src 
	src/AmpTestClient.cc
	src/model/CreateRulesRequest.cc
	src/model/CreateRulesResult.cc
	src/model/HuichengTestGrayRequest.cc
	src/model/HuichengTestGrayResult.cc
	src/model/HuichengTestGrayEightRequest.cc
	src/model/HuichengTestGrayEightResult.cc
	src/model/HuichengTestGrayFifthRequest.cc
	src/model/HuichengTestGrayFifthResult.cc
	src/model/HuichengTestGrayNineRequest.cc
	src/model/HuichengTestGrayNineResult.cc
	src/model/HuichengTestGraySecondRequest.cc
	src/model/HuichengTestGraySecondResult.cc
	src/model/HuichengTestGraySevenRequest.cc
	src/model/HuichengTestGraySevenResult.cc
	src/model/HuichengTestGraySixRequest.cc
	src/model/HuichengTestGraySixResult.cc
	src/model/HuichengTestGrayTenRequest.cc
	src/model/HuichengTestGrayTenResult.cc
	src/model/HuichengTestGrayThirdRequest.cc
	src/model/HuichengTestGrayThirdResult.cc
	src/model/HuichengTestResourceOwnerIdRequest.cc
	src/model/HuichengTestResourceOwnerIdResult.cc
	src/model/HuichengetRequest.cc
	src/model/HuichengetResult.cc
	src/model/HuichengetestRequest.cc
	src/model/HuichengetestResult.cc )

add_library(amptest ${LIB_TYPE}
	${amptest_public_header}
	${amptest_public_header_model}
	${amptest_src})

set_target_properties(amptest
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}amptest
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(amptest
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_AMPTEST_LIBRARY)
endif()

target_include_directories(amptest
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(amptest
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(amptest
		jsoncpp)
	target_include_directories(amptest
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(amptest
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(amptest
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(amptest
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(amptest
		jsoncpp)
endif()

install(FILES ${amptest_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/amptest)
install(FILES ${amptest_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/amptest/model)
install(TARGETS amptest
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)