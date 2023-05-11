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

set(alinlp_public_header 
	include/alibabacloud/alinlp/AlinlpClient.h
	include/alibabacloud/alinlp/AlinlpExport.h )

set(alinlp_public_header_model 
	include/alibabacloud/alinlp/model/ADClockRequest.h
	include/alibabacloud/alinlp/model/ADClockResult.h
	include/alibabacloud/alinlp/model/ADMMURequest.h
	include/alibabacloud/alinlp/model/ADMMUResult.h
	include/alibabacloud/alinlp/model/ADMiniCogRequest.h
	include/alibabacloud/alinlp/model/ADMiniCogResult.h
	include/alibabacloud/alinlp/model/ADMiniCogResultRequest.h
	include/alibabacloud/alinlp/model/ADMiniCogResultResult.h
	include/alibabacloud/alinlp/model/GetBrandChEcomRequest.h
	include/alibabacloud/alinlp/model/GetBrandChEcomResult.h
	include/alibabacloud/alinlp/model/GetCateChEcomRequest.h
	include/alibabacloud/alinlp/model/GetCateChEcomResult.h
	include/alibabacloud/alinlp/model/GetCheckDuplicationChMedicalRequest.h
	include/alibabacloud/alinlp/model/GetCheckDuplicationChMedicalResult.h
	include/alibabacloud/alinlp/model/GetDiagnosisChMedicalRequest.h
	include/alibabacloud/alinlp/model/GetDiagnosisChMedicalResult.h
	include/alibabacloud/alinlp/model/GetDpChEcomRequest.h
	include/alibabacloud/alinlp/model/GetDpChEcomResult.h
	include/alibabacloud/alinlp/model/GetDpChGeneralCTBRequest.h
	include/alibabacloud/alinlp/model/GetDpChGeneralCTBResult.h
	include/alibabacloud/alinlp/model/GetDpChGeneralStanfordRequest.h
	include/alibabacloud/alinlp/model/GetDpChGeneralStanfordResult.h
	include/alibabacloud/alinlp/model/GetEcChGeneralRequest.h
	include/alibabacloud/alinlp/model/GetEcChGeneralResult.h
	include/alibabacloud/alinlp/model/GetEcEnGeneralRequest.h
	include/alibabacloud/alinlp/model/GetEcEnGeneralResult.h
	include/alibabacloud/alinlp/model/GetEmbeddingRequest.h
	include/alibabacloud/alinlp/model/GetEmbeddingResult.h
	include/alibabacloud/alinlp/model/GetItemPubChEcomRequest.h
	include/alibabacloud/alinlp/model/GetItemPubChEcomResult.h
	include/alibabacloud/alinlp/model/GetKeywordChEcomRequest.h
	include/alibabacloud/alinlp/model/GetKeywordChEcomResult.h
	include/alibabacloud/alinlp/model/GetKeywordEnEcomRequest.h
	include/alibabacloud/alinlp/model/GetKeywordEnEcomResult.h
	include/alibabacloud/alinlp/model/GetMedicineChMedicalRequest.h
	include/alibabacloud/alinlp/model/GetMedicineChMedicalResult.h
	include/alibabacloud/alinlp/model/GetNerChEcomRequest.h
	include/alibabacloud/alinlp/model/GetNerChEcomResult.h
	include/alibabacloud/alinlp/model/GetNerChMedicalRequest.h
	include/alibabacloud/alinlp/model/GetNerChMedicalResult.h
	include/alibabacloud/alinlp/model/GetNerCustomizedChEcomRequest.h
	include/alibabacloud/alinlp/model/GetNerCustomizedChEcomResult.h
	include/alibabacloud/alinlp/model/GetNerCustomizedSeaEcomRequest.h
	include/alibabacloud/alinlp/model/GetNerCustomizedSeaEcomResult.h
	include/alibabacloud/alinlp/model/GetOpenNLURequest.h
	include/alibabacloud/alinlp/model/GetOpenNLUResult.h
	include/alibabacloud/alinlp/model/GetOpenNLUHighRecallRequest.h
	include/alibabacloud/alinlp/model/GetOpenNLUHighRecallResult.h
	include/alibabacloud/alinlp/model/GetOperationChMedicalRequest.h
	include/alibabacloud/alinlp/model/GetOperationChMedicalResult.h
	include/alibabacloud/alinlp/model/GetPosChEcomRequest.h
	include/alibabacloud/alinlp/model/GetPosChEcomResult.h
	include/alibabacloud/alinlp/model/GetPosChGeneralRequest.h
	include/alibabacloud/alinlp/model/GetPosChGeneralResult.h
	include/alibabacloud/alinlp/model/GetPriceChEcomRequest.h
	include/alibabacloud/alinlp/model/GetPriceChEcomResult.h
	include/alibabacloud/alinlp/model/GetSSETestRequest.h
	include/alibabacloud/alinlp/model/GetSSETestResult.h
	include/alibabacloud/alinlp/model/GetSaChGeneralRequest.h
	include/alibabacloud/alinlp/model/GetSaChGeneralResult.h
	include/alibabacloud/alinlp/model/GetSaSeaEcomRequest.h
	include/alibabacloud/alinlp/model/GetSaSeaEcomResult.h
	include/alibabacloud/alinlp/model/GetSimilarityChMedicalRequest.h
	include/alibabacloud/alinlp/model/GetSimilarityChMedicalResult.h
	include/alibabacloud/alinlp/model/GetSummaryChEcomRequest.h
	include/alibabacloud/alinlp/model/GetSummaryChEcomResult.h
	include/alibabacloud/alinlp/model/GetTableQAServiceInfoByIdRequest.h
	include/alibabacloud/alinlp/model/GetTableQAServiceInfoByIdResult.h
	include/alibabacloud/alinlp/model/GetTcChEcomRequest.h
	include/alibabacloud/alinlp/model/GetTcChEcomResult.h
	include/alibabacloud/alinlp/model/GetTcChGeneralRequest.h
	include/alibabacloud/alinlp/model/GetTcChGeneralResult.h
	include/alibabacloud/alinlp/model/GetTsChEcomRequest.h
	include/alibabacloud/alinlp/model/GetTsChEcomResult.h
	include/alibabacloud/alinlp/model/GetUserUploadSignRequest.h
	include/alibabacloud/alinlp/model/GetUserUploadSignResult.h
	include/alibabacloud/alinlp/model/GetWeChCommentRequest.h
	include/alibabacloud/alinlp/model/GetWeChCommentResult.h
	include/alibabacloud/alinlp/model/GetWeChEcomRequest.h
	include/alibabacloud/alinlp/model/GetWeChEcomResult.h
	include/alibabacloud/alinlp/model/GetWeChEntertainmentRequest.h
	include/alibabacloud/alinlp/model/GetWeChEntertainmentResult.h
	include/alibabacloud/alinlp/model/GetWeChGeneralRequest.h
	include/alibabacloud/alinlp/model/GetWeChGeneralResult.h
	include/alibabacloud/alinlp/model/GetWeChSearchRequest.h
	include/alibabacloud/alinlp/model/GetWeChSearchResult.h
	include/alibabacloud/alinlp/model/GetWsChGeneralRequest.h
	include/alibabacloud/alinlp/model/GetWsChGeneralResult.h
	include/alibabacloud/alinlp/model/GetWsCustomizedChEcomCommentRequest.h
	include/alibabacloud/alinlp/model/GetWsCustomizedChEcomCommentResult.h
	include/alibabacloud/alinlp/model/GetWsCustomizedChEcomContentRequest.h
	include/alibabacloud/alinlp/model/GetWsCustomizedChEcomContentResult.h
	include/alibabacloud/alinlp/model/GetWsCustomizedChEcomTitleRequest.h
	include/alibabacloud/alinlp/model/GetWsCustomizedChEcomTitleResult.h
	include/alibabacloud/alinlp/model/GetWsCustomizedChEntertainmentRequest.h
	include/alibabacloud/alinlp/model/GetWsCustomizedChEntertainmentResult.h
	include/alibabacloud/alinlp/model/GetWsCustomizedChGeneralRequest.h
	include/alibabacloud/alinlp/model/GetWsCustomizedChGeneralResult.h
	include/alibabacloud/alinlp/model/GetWsCustomizedChO2ORequest.h
	include/alibabacloud/alinlp/model/GetWsCustomizedChO2OResult.h
	include/alibabacloud/alinlp/model/GetWsCustomizedSeaEcomRequest.h
	include/alibabacloud/alinlp/model/GetWsCustomizedSeaEcomResult.h
	include/alibabacloud/alinlp/model/GetWsCustomizedSeaGeneralRequest.h
	include/alibabacloud/alinlp/model/GetWsCustomizedSeaGeneralResult.h
	include/alibabacloud/alinlp/model/InsertCustomRequest.h
	include/alibabacloud/alinlp/model/InsertCustomResult.h
	include/alibabacloud/alinlp/model/OpenAlinlpServiceRequest.h
	include/alibabacloud/alinlp/model/OpenAlinlpServiceResult.h
	include/alibabacloud/alinlp/model/RequestTableQARequest.h
	include/alibabacloud/alinlp/model/RequestTableQAResult.h
	include/alibabacloud/alinlp/model/RequestTableQAOnlineRequest.h
	include/alibabacloud/alinlp/model/RequestTableQAOnlineResult.h )

set(alinlp_src 
	src/AlinlpClient.cc
	src/model/ADClockRequest.cc
	src/model/ADClockResult.cc
	src/model/ADMMURequest.cc
	src/model/ADMMUResult.cc
	src/model/ADMiniCogRequest.cc
	src/model/ADMiniCogResult.cc
	src/model/ADMiniCogResultRequest.cc
	src/model/ADMiniCogResultResult.cc
	src/model/GetBrandChEcomRequest.cc
	src/model/GetBrandChEcomResult.cc
	src/model/GetCateChEcomRequest.cc
	src/model/GetCateChEcomResult.cc
	src/model/GetCheckDuplicationChMedicalRequest.cc
	src/model/GetCheckDuplicationChMedicalResult.cc
	src/model/GetDiagnosisChMedicalRequest.cc
	src/model/GetDiagnosisChMedicalResult.cc
	src/model/GetDpChEcomRequest.cc
	src/model/GetDpChEcomResult.cc
	src/model/GetDpChGeneralCTBRequest.cc
	src/model/GetDpChGeneralCTBResult.cc
	src/model/GetDpChGeneralStanfordRequest.cc
	src/model/GetDpChGeneralStanfordResult.cc
	src/model/GetEcChGeneralRequest.cc
	src/model/GetEcChGeneralResult.cc
	src/model/GetEcEnGeneralRequest.cc
	src/model/GetEcEnGeneralResult.cc
	src/model/GetEmbeddingRequest.cc
	src/model/GetEmbeddingResult.cc
	src/model/GetItemPubChEcomRequest.cc
	src/model/GetItemPubChEcomResult.cc
	src/model/GetKeywordChEcomRequest.cc
	src/model/GetKeywordChEcomResult.cc
	src/model/GetKeywordEnEcomRequest.cc
	src/model/GetKeywordEnEcomResult.cc
	src/model/GetMedicineChMedicalRequest.cc
	src/model/GetMedicineChMedicalResult.cc
	src/model/GetNerChEcomRequest.cc
	src/model/GetNerChEcomResult.cc
	src/model/GetNerChMedicalRequest.cc
	src/model/GetNerChMedicalResult.cc
	src/model/GetNerCustomizedChEcomRequest.cc
	src/model/GetNerCustomizedChEcomResult.cc
	src/model/GetNerCustomizedSeaEcomRequest.cc
	src/model/GetNerCustomizedSeaEcomResult.cc
	src/model/GetOpenNLURequest.cc
	src/model/GetOpenNLUResult.cc
	src/model/GetOpenNLUHighRecallRequest.cc
	src/model/GetOpenNLUHighRecallResult.cc
	src/model/GetOperationChMedicalRequest.cc
	src/model/GetOperationChMedicalResult.cc
	src/model/GetPosChEcomRequest.cc
	src/model/GetPosChEcomResult.cc
	src/model/GetPosChGeneralRequest.cc
	src/model/GetPosChGeneralResult.cc
	src/model/GetPriceChEcomRequest.cc
	src/model/GetPriceChEcomResult.cc
	src/model/GetSSETestRequest.cc
	src/model/GetSSETestResult.cc
	src/model/GetSaChGeneralRequest.cc
	src/model/GetSaChGeneralResult.cc
	src/model/GetSaSeaEcomRequest.cc
	src/model/GetSaSeaEcomResult.cc
	src/model/GetSimilarityChMedicalRequest.cc
	src/model/GetSimilarityChMedicalResult.cc
	src/model/GetSummaryChEcomRequest.cc
	src/model/GetSummaryChEcomResult.cc
	src/model/GetTableQAServiceInfoByIdRequest.cc
	src/model/GetTableQAServiceInfoByIdResult.cc
	src/model/GetTcChEcomRequest.cc
	src/model/GetTcChEcomResult.cc
	src/model/GetTcChGeneralRequest.cc
	src/model/GetTcChGeneralResult.cc
	src/model/GetTsChEcomRequest.cc
	src/model/GetTsChEcomResult.cc
	src/model/GetUserUploadSignRequest.cc
	src/model/GetUserUploadSignResult.cc
	src/model/GetWeChCommentRequest.cc
	src/model/GetWeChCommentResult.cc
	src/model/GetWeChEcomRequest.cc
	src/model/GetWeChEcomResult.cc
	src/model/GetWeChEntertainmentRequest.cc
	src/model/GetWeChEntertainmentResult.cc
	src/model/GetWeChGeneralRequest.cc
	src/model/GetWeChGeneralResult.cc
	src/model/GetWeChSearchRequest.cc
	src/model/GetWeChSearchResult.cc
	src/model/GetWsChGeneralRequest.cc
	src/model/GetWsChGeneralResult.cc
	src/model/GetWsCustomizedChEcomCommentRequest.cc
	src/model/GetWsCustomizedChEcomCommentResult.cc
	src/model/GetWsCustomizedChEcomContentRequest.cc
	src/model/GetWsCustomizedChEcomContentResult.cc
	src/model/GetWsCustomizedChEcomTitleRequest.cc
	src/model/GetWsCustomizedChEcomTitleResult.cc
	src/model/GetWsCustomizedChEntertainmentRequest.cc
	src/model/GetWsCustomizedChEntertainmentResult.cc
	src/model/GetWsCustomizedChGeneralRequest.cc
	src/model/GetWsCustomizedChGeneralResult.cc
	src/model/GetWsCustomizedChO2ORequest.cc
	src/model/GetWsCustomizedChO2OResult.cc
	src/model/GetWsCustomizedSeaEcomRequest.cc
	src/model/GetWsCustomizedSeaEcomResult.cc
	src/model/GetWsCustomizedSeaGeneralRequest.cc
	src/model/GetWsCustomizedSeaGeneralResult.cc
	src/model/InsertCustomRequest.cc
	src/model/InsertCustomResult.cc
	src/model/OpenAlinlpServiceRequest.cc
	src/model/OpenAlinlpServiceResult.cc
	src/model/RequestTableQARequest.cc
	src/model/RequestTableQAResult.cc
	src/model/RequestTableQAOnlineRequest.cc
	src/model/RequestTableQAOnlineResult.cc )

add_library(alinlp ${LIB_TYPE}
	${alinlp_public_header}
	${alinlp_public_header_model}
	${alinlp_src})

set_target_properties(alinlp
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}alinlp
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(alinlp
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ALINLP_LIBRARY)
endif()

target_include_directories(alinlp
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(alinlp
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(alinlp
		jsoncpp)
	target_include_directories(alinlp
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(alinlp
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(alinlp
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(alinlp
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(alinlp
		jsoncpp)
endif()

install(FILES ${alinlp_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/alinlp)
install(FILES ${alinlp_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/alinlp/model)
install(TARGETS alinlp
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)