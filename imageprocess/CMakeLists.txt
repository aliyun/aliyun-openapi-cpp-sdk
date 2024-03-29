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

set(imageprocess_public_header 
	include/alibabacloud/imageprocess/ImageprocessClient.h
	include/alibabacloud/imageprocess/ImageprocessExport.h )

set(imageprocess_public_header_model 
	include/alibabacloud/imageprocess/model/AnalyzeChestVesselRequest.h
	include/alibabacloud/imageprocess/model/AnalyzeChestVesselResult.h
	include/alibabacloud/imageprocess/model/CalcBMDRequest.h
	include/alibabacloud/imageprocess/model/CalcBMDResult.h
	include/alibabacloud/imageprocess/model/CalcCACSRequest.h
	include/alibabacloud/imageprocess/model/CalcCACSResult.h
	include/alibabacloud/imageprocess/model/ClassifyFNFRequest.h
	include/alibabacloud/imageprocess/model/ClassifyFNFResult.h
	include/alibabacloud/imageprocess/model/DetectCovid19CadRequest.h
	include/alibabacloud/imageprocess/model/DetectCovid19CadResult.h
	include/alibabacloud/imageprocess/model/DetectHipKeypointXRayRequest.h
	include/alibabacloud/imageprocess/model/DetectHipKeypointXRayResult.h
	include/alibabacloud/imageprocess/model/DetectKneeKeypointXRayRequest.h
	include/alibabacloud/imageprocess/model/DetectKneeKeypointXRayResult.h
	include/alibabacloud/imageprocess/model/DetectKneeXRayRequest.h
	include/alibabacloud/imageprocess/model/DetectKneeXRayResult.h
	include/alibabacloud/imageprocess/model/DetectLiverSteatosisRequest.h
	include/alibabacloud/imageprocess/model/DetectLiverSteatosisResult.h
	include/alibabacloud/imageprocess/model/DetectLungNoduleRequest.h
	include/alibabacloud/imageprocess/model/DetectLungNoduleResult.h
	include/alibabacloud/imageprocess/model/DetectLymphRequest.h
	include/alibabacloud/imageprocess/model/DetectLymphResult.h
	include/alibabacloud/imageprocess/model/DetectPancRequest.h
	include/alibabacloud/imageprocess/model/DetectPancResult.h
	include/alibabacloud/imageprocess/model/DetectRibFractureRequest.h
	include/alibabacloud/imageprocess/model/DetectRibFractureResult.h
	include/alibabacloud/imageprocess/model/DetectSkinDiseaseRequest.h
	include/alibabacloud/imageprocess/model/DetectSkinDiseaseResult.h
	include/alibabacloud/imageprocess/model/DetectSpineMRIRequest.h
	include/alibabacloud/imageprocess/model/DetectSpineMRIResult.h
	include/alibabacloud/imageprocess/model/FeedbackSessionRequest.h
	include/alibabacloud/imageprocess/model/FeedbackSessionResult.h
	include/alibabacloud/imageprocess/model/GetAsyncJobResultRequest.h
	include/alibabacloud/imageprocess/model/GetAsyncJobResultResult.h
	include/alibabacloud/imageprocess/model/PredictCVDRequest.h
	include/alibabacloud/imageprocess/model/PredictCVDResult.h
	include/alibabacloud/imageprocess/model/RunCTRegistrationRequest.h
	include/alibabacloud/imageprocess/model/RunCTRegistrationResult.h
	include/alibabacloud/imageprocess/model/RunMedQARequest.h
	include/alibabacloud/imageprocess/model/RunMedQAResult.h
	include/alibabacloud/imageprocess/model/ScreenCRCRequest.h
	include/alibabacloud/imageprocess/model/ScreenCRCResult.h
	include/alibabacloud/imageprocess/model/ScreenChestCTRequest.h
	include/alibabacloud/imageprocess/model/ScreenChestCTResult.h
	include/alibabacloud/imageprocess/model/ScreenECRequest.h
	include/alibabacloud/imageprocess/model/ScreenECResult.h
	include/alibabacloud/imageprocess/model/ScreenGCRequest.h
	include/alibabacloud/imageprocess/model/ScreenGCResult.h
	include/alibabacloud/imageprocess/model/ScreenLCRequest.h
	include/alibabacloud/imageprocess/model/ScreenLCResult.h
	include/alibabacloud/imageprocess/model/SegmentLymphNodeRequest.h
	include/alibabacloud/imageprocess/model/SegmentLymphNodeResult.h
	include/alibabacloud/imageprocess/model/SegmentOARRequest.h
	include/alibabacloud/imageprocess/model/SegmentOARResult.h
	include/alibabacloud/imageprocess/model/TargetVolumeSegmentRequest.h
	include/alibabacloud/imageprocess/model/TargetVolumeSegmentResult.h
	include/alibabacloud/imageprocess/model/TranslateMedRequest.h
	include/alibabacloud/imageprocess/model/TranslateMedResult.h )

set(imageprocess_src 
	src/ImageprocessClient.cc
	src/model/AnalyzeChestVesselRequest.cc
	src/model/AnalyzeChestVesselResult.cc
	src/model/CalcBMDRequest.cc
	src/model/CalcBMDResult.cc
	src/model/CalcCACSRequest.cc
	src/model/CalcCACSResult.cc
	src/model/ClassifyFNFRequest.cc
	src/model/ClassifyFNFResult.cc
	src/model/DetectCovid19CadRequest.cc
	src/model/DetectCovid19CadResult.cc
	src/model/DetectHipKeypointXRayRequest.cc
	src/model/DetectHipKeypointXRayResult.cc
	src/model/DetectKneeKeypointXRayRequest.cc
	src/model/DetectKneeKeypointXRayResult.cc
	src/model/DetectKneeXRayRequest.cc
	src/model/DetectKneeXRayResult.cc
	src/model/DetectLiverSteatosisRequest.cc
	src/model/DetectLiverSteatosisResult.cc
	src/model/DetectLungNoduleRequest.cc
	src/model/DetectLungNoduleResult.cc
	src/model/DetectLymphRequest.cc
	src/model/DetectLymphResult.cc
	src/model/DetectPancRequest.cc
	src/model/DetectPancResult.cc
	src/model/DetectRibFractureRequest.cc
	src/model/DetectRibFractureResult.cc
	src/model/DetectSkinDiseaseRequest.cc
	src/model/DetectSkinDiseaseResult.cc
	src/model/DetectSpineMRIRequest.cc
	src/model/DetectSpineMRIResult.cc
	src/model/FeedbackSessionRequest.cc
	src/model/FeedbackSessionResult.cc
	src/model/GetAsyncJobResultRequest.cc
	src/model/GetAsyncJobResultResult.cc
	src/model/PredictCVDRequest.cc
	src/model/PredictCVDResult.cc
	src/model/RunCTRegistrationRequest.cc
	src/model/RunCTRegistrationResult.cc
	src/model/RunMedQARequest.cc
	src/model/RunMedQAResult.cc
	src/model/ScreenCRCRequest.cc
	src/model/ScreenCRCResult.cc
	src/model/ScreenChestCTRequest.cc
	src/model/ScreenChestCTResult.cc
	src/model/ScreenECRequest.cc
	src/model/ScreenECResult.cc
	src/model/ScreenGCRequest.cc
	src/model/ScreenGCResult.cc
	src/model/ScreenLCRequest.cc
	src/model/ScreenLCResult.cc
	src/model/SegmentLymphNodeRequest.cc
	src/model/SegmentLymphNodeResult.cc
	src/model/SegmentOARRequest.cc
	src/model/SegmentOARResult.cc
	src/model/TargetVolumeSegmentRequest.cc
	src/model/TargetVolumeSegmentResult.cc
	src/model/TranslateMedRequest.cc
	src/model/TranslateMedResult.cc )

add_library(imageprocess ${LIB_TYPE}
	${imageprocess_public_header}
	${imageprocess_public_header_model}
	${imageprocess_src})

set_target_properties(imageprocess
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}imageprocess
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(imageprocess
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_IMAGEPROCESS_LIBRARY)
endif()

target_include_directories(imageprocess
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(imageprocess
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(imageprocess
		jsoncpp)
	target_include_directories(imageprocess
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(imageprocess
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(imageprocess
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(imageprocess
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(imageprocess
		jsoncpp)
endif()

install(FILES ${imageprocess_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/imageprocess)
install(FILES ${imageprocess_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/imageprocess/model)
install(TARGETS imageprocess
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)