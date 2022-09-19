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

set(threedvision_public_header 
	include/alibabacloud/threedvision/ThreedvisionClient.h
	include/alibabacloud/threedvision/ThreedvisionExport.h )

set(threedvision_public_header_model 
	include/alibabacloud/threedvision/model/EstimateMonocularImageDepthRequest.h
	include/alibabacloud/threedvision/model/EstimateMonocularImageDepthResult.h
	include/alibabacloud/threedvision/model/EstimateMonocularVideoDepthRequest.h
	include/alibabacloud/threedvision/model/EstimateMonocularVideoDepthResult.h
	include/alibabacloud/threedvision/model/EstimateStereoImageDepthRequest.h
	include/alibabacloud/threedvision/model/EstimateStereoImageDepthResult.h
	include/alibabacloud/threedvision/model/GetAsyncJobResultRequest.h
	include/alibabacloud/threedvision/model/GetAsyncJobResultResult.h
	include/alibabacloud/threedvision/model/ReconstructBodyBySingleImageRequest.h
	include/alibabacloud/threedvision/model/ReconstructBodyBySingleImageResult.h
	include/alibabacloud/threedvision/model/ReconstructThreeDMultiViewRequest.h
	include/alibabacloud/threedvision/model/ReconstructThreeDMultiViewResult.h )

set(threedvision_src 
	src/ThreedvisionClient.cc
	src/model/EstimateMonocularImageDepthRequest.cc
	src/model/EstimateMonocularImageDepthResult.cc
	src/model/EstimateMonocularVideoDepthRequest.cc
	src/model/EstimateMonocularVideoDepthResult.cc
	src/model/EstimateStereoImageDepthRequest.cc
	src/model/EstimateStereoImageDepthResult.cc
	src/model/GetAsyncJobResultRequest.cc
	src/model/GetAsyncJobResultResult.cc
	src/model/ReconstructBodyBySingleImageRequest.cc
	src/model/ReconstructBodyBySingleImageResult.cc
	src/model/ReconstructThreeDMultiViewRequest.cc
	src/model/ReconstructThreeDMultiViewResult.cc )

add_library(threedvision ${LIB_TYPE}
	${threedvision_public_header}
	${threedvision_public_header_model}
	${threedvision_src})

set_target_properties(threedvision
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}threedvision
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(threedvision
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_THREEDVISION_LIBRARY)
endif()

target_include_directories(threedvision
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(threedvision
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(threedvision
		jsoncpp)
	target_include_directories(threedvision
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(threedvision
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(threedvision
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(threedvision
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(threedvision
		jsoncpp)
endif()

install(FILES ${threedvision_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/threedvision)
install(FILES ${threedvision_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/threedvision/model)
install(TARGETS threedvision
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)