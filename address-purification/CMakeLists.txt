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

set(address-purification_public_header 
	include/alibabacloud/address-purification/Address_purificationClient.h
	include/alibabacloud/address-purification/Address_purificationExport.h )

set(address-purification_public_header_model 
	include/alibabacloud/address-purification/model/ClassifyPOIRequest.h
	include/alibabacloud/address-purification/model/ClassifyPOIResult.h
	include/alibabacloud/address-purification/model/CompleteAddressRequest.h
	include/alibabacloud/address-purification/model/CompleteAddressResult.h
	include/alibabacloud/address-purification/model/CorrectAddressRequest.h
	include/alibabacloud/address-purification/model/CorrectAddressResult.h
	include/alibabacloud/address-purification/model/ExtractAddressRequest.h
	include/alibabacloud/address-purification/model/ExtractAddressResult.h
	include/alibabacloud/address-purification/model/ExtractExpressRequest.h
	include/alibabacloud/address-purification/model/ExtractExpressResult.h
	include/alibabacloud/address-purification/model/ExtractNameRequest.h
	include/alibabacloud/address-purification/model/ExtractNameResult.h
	include/alibabacloud/address-purification/model/ExtractPhoneRequest.h
	include/alibabacloud/address-purification/model/ExtractPhoneResult.h
	include/alibabacloud/address-purification/model/GetAddressBlockMappingRequest.h
	include/alibabacloud/address-purification/model/GetAddressBlockMappingResult.h
	include/alibabacloud/address-purification/model/GetAddressDivisionCodeRequest.h
	include/alibabacloud/address-purification/model/GetAddressDivisionCodeResult.h
	include/alibabacloud/address-purification/model/GetAddressEvaluateRequest.h
	include/alibabacloud/address-purification/model/GetAddressEvaluateResult.h
	include/alibabacloud/address-purification/model/GetAddressGeocodeRequest.h
	include/alibabacloud/address-purification/model/GetAddressGeocodeResult.h
	include/alibabacloud/address-purification/model/GetAddressSearchRequest.h
	include/alibabacloud/address-purification/model/GetAddressSearchResult.h
	include/alibabacloud/address-purification/model/GetAddressSimilarityRequest.h
	include/alibabacloud/address-purification/model/GetAddressSimilarityResult.h
	include/alibabacloud/address-purification/model/GetInputSearchRequest.h
	include/alibabacloud/address-purification/model/GetInputSearchResult.h
	include/alibabacloud/address-purification/model/GetZipcodeRequest.h
	include/alibabacloud/address-purification/model/GetZipcodeResult.h
	include/alibabacloud/address-purification/model/PredictPOIRequest.h
	include/alibabacloud/address-purification/model/PredictPOIResult.h
	include/alibabacloud/address-purification/model/StructureAddressRequest.h
	include/alibabacloud/address-purification/model/StructureAddressResult.h
	include/alibabacloud/address-purification/model/TransferCoordRequest.h
	include/alibabacloud/address-purification/model/TransferCoordResult.h
	include/alibabacloud/address-purification/model/UpdateProjectRequest.h
	include/alibabacloud/address-purification/model/UpdateProjectResult.h )

set(address-purification_src 
	src/Address-purificationClient.cc
	src/model/ClassifyPOIRequest.cc
	src/model/ClassifyPOIResult.cc
	src/model/CompleteAddressRequest.cc
	src/model/CompleteAddressResult.cc
	src/model/CorrectAddressRequest.cc
	src/model/CorrectAddressResult.cc
	src/model/ExtractAddressRequest.cc
	src/model/ExtractAddressResult.cc
	src/model/ExtractExpressRequest.cc
	src/model/ExtractExpressResult.cc
	src/model/ExtractNameRequest.cc
	src/model/ExtractNameResult.cc
	src/model/ExtractPhoneRequest.cc
	src/model/ExtractPhoneResult.cc
	src/model/GetAddressBlockMappingRequest.cc
	src/model/GetAddressBlockMappingResult.cc
	src/model/GetAddressDivisionCodeRequest.cc
	src/model/GetAddressDivisionCodeResult.cc
	src/model/GetAddressEvaluateRequest.cc
	src/model/GetAddressEvaluateResult.cc
	src/model/GetAddressGeocodeRequest.cc
	src/model/GetAddressGeocodeResult.cc
	src/model/GetAddressSearchRequest.cc
	src/model/GetAddressSearchResult.cc
	src/model/GetAddressSimilarityRequest.cc
	src/model/GetAddressSimilarityResult.cc
	src/model/GetInputSearchRequest.cc
	src/model/GetInputSearchResult.cc
	src/model/GetZipcodeRequest.cc
	src/model/GetZipcodeResult.cc
	src/model/PredictPOIRequest.cc
	src/model/PredictPOIResult.cc
	src/model/StructureAddressRequest.cc
	src/model/StructureAddressResult.cc
	src/model/TransferCoordRequest.cc
	src/model/TransferCoordResult.cc
	src/model/UpdateProjectRequest.cc
	src/model/UpdateProjectResult.cc )

add_library(address-purification ${LIB_TYPE}
	${address-purification_public_header}
	${address-purification_public_header_model}
	${address-purification_src})

set_target_properties(address-purification
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}address-purification
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(address-purification
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ADDRESS_PURIFICATION_LIBRARY)
endif()

target_include_directories(address-purification
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(address-purification
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(address-purification
		jsoncpp)
	target_include_directories(address-purification
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(address-purification
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(address-purification
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(address-purification
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(address-purification
		jsoncpp)
endif()

install(FILES ${address-purification_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/address-purification)
install(FILES ${address-purification_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/address-purification/model)
install(TARGETS address-purification
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)