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
	include/alibabacloud/dysmsapi/model/AddSmsSignRequest.h
	include/alibabacloud/dysmsapi/model/AddSmsSignResult.h
	include/alibabacloud/dysmsapi/model/AddSmsTemplateRequest.h
	include/alibabacloud/dysmsapi/model/AddSmsTemplateResult.h
	include/alibabacloud/dysmsapi/model/DeleteSmsSignRequest.h
	include/alibabacloud/dysmsapi/model/DeleteSmsSignResult.h
	include/alibabacloud/dysmsapi/model/DeleteSmsTemplateRequest.h
	include/alibabacloud/dysmsapi/model/DeleteSmsTemplateResult.h
	include/alibabacloud/dysmsapi/model/ModifySmsSignRequest.h
	include/alibabacloud/dysmsapi/model/ModifySmsSignResult.h
	include/alibabacloud/dysmsapi/model/ModifySmsTemplateRequest.h
	include/alibabacloud/dysmsapi/model/ModifySmsTemplateResult.h
	include/alibabacloud/dysmsapi/model/QuerySendDetailsRequest.h
	include/alibabacloud/dysmsapi/model/QuerySendDetailsResult.h
	include/alibabacloud/dysmsapi/model/QuerySmsProdStatusRequest.h
	include/alibabacloud/dysmsapi/model/QuerySmsProdStatusResult.h
	include/alibabacloud/dysmsapi/model/QuerySmsSignRequest.h
	include/alibabacloud/dysmsapi/model/QuerySmsSignResult.h
	include/alibabacloud/dysmsapi/model/QuerySmsTemplateRequest.h
	include/alibabacloud/dysmsapi/model/QuerySmsTemplateResult.h
	include/alibabacloud/dysmsapi/model/SendBatchSmsRequest.h
	include/alibabacloud/dysmsapi/model/SendBatchSmsResult.h
	include/alibabacloud/dysmsapi/model/SendSmsRequest.h
	include/alibabacloud/dysmsapi/model/SendSmsResult.h )

set(dysmsapi_src 
	src/DysmsapiClient.cc
	src/model/AddSmsSignRequest.cc
	src/model/AddSmsSignResult.cc
	src/model/AddSmsTemplateRequest.cc
	src/model/AddSmsTemplateResult.cc
	src/model/DeleteSmsSignRequest.cc
	src/model/DeleteSmsSignResult.cc
	src/model/DeleteSmsTemplateRequest.cc
	src/model/DeleteSmsTemplateResult.cc
	src/model/ModifySmsSignRequest.cc
	src/model/ModifySmsSignResult.cc
	src/model/ModifySmsTemplateRequest.cc
	src/model/ModifySmsTemplateResult.cc
	src/model/QuerySendDetailsRequest.cc
	src/model/QuerySendDetailsResult.cc
	src/model/QuerySmsProdStatusRequest.cc
	src/model/QuerySmsProdStatusResult.cc
	src/model/QuerySmsSignRequest.cc
	src/model/QuerySmsSignResult.cc
	src/model/QuerySmsTemplateRequest.cc
	src/model/QuerySmsTemplateResult.cc
	src/model/SendBatchSmsRequest.cc
	src/model/SendBatchSmsResult.cc
	src/model/SendSmsRequest.cc
	src/model/SendSmsResult.cc )

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