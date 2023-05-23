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

set(computenestsupplier_public_header 
	include/alibabacloud/computenestsupplier/ComputeNestSupplierClient.h
	include/alibabacloud/computenestsupplier/ComputeNestSupplierExport.h )

set(computenestsupplier_public_header_model 
	include/alibabacloud/computenestsupplier/model/CreateArtifactRequest.h
	include/alibabacloud/computenestsupplier/model/CreateArtifactResult.h
	include/alibabacloud/computenestsupplier/model/CreateServiceRequest.h
	include/alibabacloud/computenestsupplier/model/CreateServiceResult.h
	include/alibabacloud/computenestsupplier/model/DeleteArtifactRequest.h
	include/alibabacloud/computenestsupplier/model/DeleteArtifactResult.h
	include/alibabacloud/computenestsupplier/model/DeleteServiceRequest.h
	include/alibabacloud/computenestsupplier/model/DeleteServiceResult.h
	include/alibabacloud/computenestsupplier/model/GetArtifactRequest.h
	include/alibabacloud/computenestsupplier/model/GetArtifactResult.h
	include/alibabacloud/computenestsupplier/model/GetArtifactRepositoryCredentialsRequest.h
	include/alibabacloud/computenestsupplier/model/GetArtifactRepositoryCredentialsResult.h
	include/alibabacloud/computenestsupplier/model/GetServiceRequest.h
	include/alibabacloud/computenestsupplier/model/GetServiceResult.h
	include/alibabacloud/computenestsupplier/model/GetServiceEstimateCostRequest.h
	include/alibabacloud/computenestsupplier/model/GetServiceEstimateCostResult.h
	include/alibabacloud/computenestsupplier/model/GetServiceInstanceRequest.h
	include/alibabacloud/computenestsupplier/model/GetServiceInstanceResult.h
	include/alibabacloud/computenestsupplier/model/GetUploadCredentialsRequest.h
	include/alibabacloud/computenestsupplier/model/GetUploadCredentialsResult.h
	include/alibabacloud/computenestsupplier/model/ListArtifactVersionsRequest.h
	include/alibabacloud/computenestsupplier/model/ListArtifactVersionsResult.h
	include/alibabacloud/computenestsupplier/model/ListArtifactsRequest.h
	include/alibabacloud/computenestsupplier/model/ListArtifactsResult.h
	include/alibabacloud/computenestsupplier/model/ListServiceInstancesRequest.h
	include/alibabacloud/computenestsupplier/model/ListServiceInstancesResult.h
	include/alibabacloud/computenestsupplier/model/ListServiceUsagesRequest.h
	include/alibabacloud/computenestsupplier/model/ListServiceUsagesResult.h
	include/alibabacloud/computenestsupplier/model/ListServicesRequest.h
	include/alibabacloud/computenestsupplier/model/ListServicesResult.h
	include/alibabacloud/computenestsupplier/model/ReleaseArtifactRequest.h
	include/alibabacloud/computenestsupplier/model/ReleaseArtifactResult.h
	include/alibabacloud/computenestsupplier/model/UpdateArtifactRequest.h
	include/alibabacloud/computenestsupplier/model/UpdateArtifactResult.h
	include/alibabacloud/computenestsupplier/model/UpdateServiceRequest.h
	include/alibabacloud/computenestsupplier/model/UpdateServiceResult.h )

set(computenestsupplier_src 
	src/ComputeNestSupplierClient.cc
	src/model/CreateArtifactRequest.cc
	src/model/CreateArtifactResult.cc
	src/model/CreateServiceRequest.cc
	src/model/CreateServiceResult.cc
	src/model/DeleteArtifactRequest.cc
	src/model/DeleteArtifactResult.cc
	src/model/DeleteServiceRequest.cc
	src/model/DeleteServiceResult.cc
	src/model/GetArtifactRequest.cc
	src/model/GetArtifactResult.cc
	src/model/GetArtifactRepositoryCredentialsRequest.cc
	src/model/GetArtifactRepositoryCredentialsResult.cc
	src/model/GetServiceRequest.cc
	src/model/GetServiceResult.cc
	src/model/GetServiceEstimateCostRequest.cc
	src/model/GetServiceEstimateCostResult.cc
	src/model/GetServiceInstanceRequest.cc
	src/model/GetServiceInstanceResult.cc
	src/model/GetUploadCredentialsRequest.cc
	src/model/GetUploadCredentialsResult.cc
	src/model/ListArtifactVersionsRequest.cc
	src/model/ListArtifactVersionsResult.cc
	src/model/ListArtifactsRequest.cc
	src/model/ListArtifactsResult.cc
	src/model/ListServiceInstancesRequest.cc
	src/model/ListServiceInstancesResult.cc
	src/model/ListServiceUsagesRequest.cc
	src/model/ListServiceUsagesResult.cc
	src/model/ListServicesRequest.cc
	src/model/ListServicesResult.cc
	src/model/ReleaseArtifactRequest.cc
	src/model/ReleaseArtifactResult.cc
	src/model/UpdateArtifactRequest.cc
	src/model/UpdateArtifactResult.cc
	src/model/UpdateServiceRequest.cc
	src/model/UpdateServiceResult.cc )

add_library(computenestsupplier ${LIB_TYPE}
	${computenestsupplier_public_header}
	${computenestsupplier_public_header_model}
	${computenestsupplier_src})

set_target_properties(computenestsupplier
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}computenestsupplier
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(computenestsupplier
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_COMPUTENESTSUPPLIER_LIBRARY)
endif()

target_include_directories(computenestsupplier
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(computenestsupplier
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(computenestsupplier
		jsoncpp)
	target_include_directories(computenestsupplier
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(computenestsupplier
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(computenestsupplier
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(computenestsupplier
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(computenestsupplier
		jsoncpp)
endif()

install(FILES ${computenestsupplier_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/computenestsupplier)
install(FILES ${computenestsupplier_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/computenestsupplier/model)
install(TARGETS computenestsupplier
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)