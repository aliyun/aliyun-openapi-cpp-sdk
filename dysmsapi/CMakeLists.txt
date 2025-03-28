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

set(dysmsapi_public_header 
	include/alibabacloud/dysmsapi/DysmsapiClient.h
	include/alibabacloud/dysmsapi/DysmsapiExport.h )

set(dysmsapi_public_header_model 
	include/alibabacloud/dysmsapi/model/BatchSendMessageToGlobeRequest.h
	include/alibabacloud/dysmsapi/model/BatchSendMessageToGlobeResult.h
	include/alibabacloud/dysmsapi/model/ConversionDataRequest.h
	include/alibabacloud/dysmsapi/model/ConversionDataResult.h
	include/alibabacloud/dysmsapi/model/QueryMessageRequest.h
	include/alibabacloud/dysmsapi/model/QueryMessageResult.h
	include/alibabacloud/dysmsapi/model/SendMessageToGlobeRequest.h
	include/alibabacloud/dysmsapi/model/SendMessageToGlobeResult.h
	include/alibabacloud/dysmsapi/model/SendMessageWithTemplateRequest.h
	include/alibabacloud/dysmsapi/model/SendMessageWithTemplateResult.h
	include/alibabacloud/dysmsapi/model/SmsConversionRequest.h
	include/alibabacloud/dysmsapi/model/SmsConversionResult.h )

set(dysmsapi_src 
	src/DysmsapiClient.cc
	src/model/BatchSendMessageToGlobeRequest.cc
	src/model/BatchSendMessageToGlobeResult.cc
	src/model/ConversionDataRequest.cc
	src/model/ConversionDataResult.cc
	src/model/QueryMessageRequest.cc
	src/model/QueryMessageResult.cc
	src/model/SendMessageToGlobeRequest.cc
	src/model/SendMessageToGlobeResult.cc
	src/model/SendMessageWithTemplateRequest.cc
	src/model/SendMessageWithTemplateResult.cc
	src/model/SmsConversionRequest.cc
	src/model/SmsConversionResult.cc )

add_library(dysmsapi ${LIB_TYPE}
	${dysmsapi_public_header}
	${dysmsapi_public_header_model}
	${dysmsapi_src})

set_target_properties(dysmsapi
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dysmsapi
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dysmsapi
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DYSMSAPI_LIBRARY)
endif()

target_include_directories(dysmsapi
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dysmsapi
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dysmsapi
		jsoncpp)
	target_include_directories(dysmsapi
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dysmsapi
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dysmsapi
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dysmsapi
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dysmsapi
		jsoncpp)
endif()

install(FILES ${dysmsapi_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dysmsapi)
install(FILES ${dysmsapi_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dysmsapi/model)
install(TARGETS dysmsapi
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)