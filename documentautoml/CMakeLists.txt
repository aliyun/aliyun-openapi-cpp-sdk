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

set(documentautoml_public_header 
	include/alibabacloud/documentautoml/DocumentAutomlClient.h
	include/alibabacloud/documentautoml/DocumentAutomlExport.h )

set(documentautoml_public_header_model 
	include/alibabacloud/documentautoml/model/CreateModelAsyncPredictRequest.h
	include/alibabacloud/documentautoml/model/CreateModelAsyncPredictResult.h
	include/alibabacloud/documentautoml/model/GetModelAsyncPredictRequest.h
	include/alibabacloud/documentautoml/model/GetModelAsyncPredictResult.h
	include/alibabacloud/documentautoml/model/PredictClassifierModelRequest.h
	include/alibabacloud/documentautoml/model/PredictClassifierModelResult.h
	include/alibabacloud/documentautoml/model/PredictModelRequest.h
	include/alibabacloud/documentautoml/model/PredictModelResult.h
	include/alibabacloud/documentautoml/model/PredictTemplateModelRequest.h
	include/alibabacloud/documentautoml/model/PredictTemplateModelResult.h )

set(documentautoml_src 
	src/DocumentAutomlClient.cc
	src/model/CreateModelAsyncPredictRequest.cc
	src/model/CreateModelAsyncPredictResult.cc
	src/model/GetModelAsyncPredictRequest.cc
	src/model/GetModelAsyncPredictResult.cc
	src/model/PredictClassifierModelRequest.cc
	src/model/PredictClassifierModelResult.cc
	src/model/PredictModelRequest.cc
	src/model/PredictModelResult.cc
	src/model/PredictTemplateModelRequest.cc
	src/model/PredictTemplateModelResult.cc )

add_library(documentautoml ${LIB_TYPE}
	${documentautoml_public_header}
	${documentautoml_public_header_model}
	${documentautoml_src})

set_target_properties(documentautoml
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}documentautoml
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(documentautoml
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DOCUMENTAUTOML_LIBRARY)
endif()

target_include_directories(documentautoml
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(documentautoml
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(documentautoml
		jsoncpp)
	target_include_directories(documentautoml
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(documentautoml
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(documentautoml
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(documentautoml
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(documentautoml
		jsoncpp)
endif()

install(FILES ${documentautoml_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/documentautoml)
install(FILES ${documentautoml_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/documentautoml/model)
install(TARGETS documentautoml
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)