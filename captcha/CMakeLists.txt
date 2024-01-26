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

set(captcha_public_header 
	include/alibabacloud/captcha/CaptchaClient.h
	include/alibabacloud/captcha/CaptchaExport.h )

set(captcha_public_header_model 
	include/alibabacloud/captcha/model/VerifyCaptchaRequest.h
	include/alibabacloud/captcha/model/VerifyCaptchaResult.h
	include/alibabacloud/captcha/model/VerifyIntelligentCaptchaRequest.h
	include/alibabacloud/captcha/model/VerifyIntelligentCaptchaResult.h )

set(captcha_src 
	src/CaptchaClient.cc
	src/model/VerifyCaptchaRequest.cc
	src/model/VerifyCaptchaResult.cc
	src/model/VerifyIntelligentCaptchaRequest.cc
	src/model/VerifyIntelligentCaptchaResult.cc )

add_library(captcha ${LIB_TYPE}
	${captcha_public_header}
	${captcha_public_header_model}
	${captcha_src})

set_target_properties(captcha
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}captcha
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(captcha
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CAPTCHA_LIBRARY)
endif()

target_include_directories(captcha
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(captcha
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(captcha
		jsoncpp)
	target_include_directories(captcha
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(captcha
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(captcha
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(captcha
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(captcha
		jsoncpp)
endif()

install(FILES ${captcha_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/captcha)
install(FILES ${captcha_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/captcha/model)
install(TARGETS captcha
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)