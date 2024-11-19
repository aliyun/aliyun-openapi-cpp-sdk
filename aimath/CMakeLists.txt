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

set(aimath_public_header 
	include/alibabacloud/aimath/AIMathClient.h
	include/alibabacloud/aimath/AIMathExport.h )

set(aimath_public_header_model 
	include/alibabacloud/aimath/model/GenAnalysisRequest.h
	include/alibabacloud/aimath/model/GenAnalysisResult.h
	include/alibabacloud/aimath/model/GenStepRequest.h
	include/alibabacloud/aimath/model/GenStepResult.h
	include/alibabacloud/aimath/model/GlobalConfirmRequest.h
	include/alibabacloud/aimath/model/GlobalConfirmResult.h
	include/alibabacloud/aimath/model/UpdateAnalysisRequest.h
	include/alibabacloud/aimath/model/UpdateAnalysisResult.h
	include/alibabacloud/aimath/model/UpdateStepRequest.h
	include/alibabacloud/aimath/model/UpdateStepResult.h )

set(aimath_src 
	src/AIMathClient.cc
	src/model/GenAnalysisRequest.cc
	src/model/GenAnalysisResult.cc
	src/model/GenStepRequest.cc
	src/model/GenStepResult.cc
	src/model/GlobalConfirmRequest.cc
	src/model/GlobalConfirmResult.cc
	src/model/UpdateAnalysisRequest.cc
	src/model/UpdateAnalysisResult.cc
	src/model/UpdateStepRequest.cc
	src/model/UpdateStepResult.cc )

add_library(aimath ${LIB_TYPE}
	${aimath_public_header}
	${aimath_public_header_model}
	${aimath_src})

set_target_properties(aimath
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}aimath
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(aimath
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_AIMATH_LIBRARY)
endif()

target_include_directories(aimath
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(aimath
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(aimath
		jsoncpp)
	target_include_directories(aimath
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(aimath
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(aimath
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(aimath
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(aimath
		jsoncpp)
endif()

install(FILES ${aimath_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aimath)
install(FILES ${aimath_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aimath/model)
install(TARGETS aimath
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)